<?php 
$title = 'Ranking filmów';
$description = 'Ranking filmów';
$keywords = 'Ranking, Filmy, Najlepsze Filmy';
include 'includes/head.php'; ?>
<body>
  <header></header>
<?php include 'includes/nav.php'; ?>
  <article>
  <section>
    <h3>O filmie Avatar</h3>
    <hr />
  	  <?php 
    $i = $_GET['id'];
    $dbc = mysqli_connect('localhost', 'root', '', 'filmy')
    or die('Brak połączenia z serwerem MySQL.');

    $query = "SELECT * FROM filmy WHERE id = $i"
    or die('NIe znaleziono tabeli');
    $data = mysqli_query($dbc, $query);

    if($row = mysqli_fetch_array($data)) {

      $i = $_GET['id'];

      if ($i) {
  
    $GW_UPLOADPATH = 'image/';
    $image = $row['image'];
  
  echo '<h4> Tytuł: ' . $row['tytul'] . '<br />'; 
  echo 'Reżyser: ' . $row['director'] . '<br /></h4>';
  echo '<img src="' . $GW_UPLOADPATH . $image . '" alt="Score image" height="250px" width="350px" class="media-grid"/></p><hr />';
  echo '<form methode="get" action="' . $_SERVER['PHP_SELF'] . '"><input type="submit" class = "btn btn-primary" value="Lubie to!" name="' .  $row['id'] . '" /><form>';
  $p = $row['ocena']
  if (isset($_GET['submit'])) {
    $dbc = mysqli_connect('localhost', 'root', '', 'filmy')
    or die('Brak połączenia z serwerem MySQL.');
    $i = $row['id'];
    $p++;
    $query = "UPDATE filmy SET ocena = $p WHERE id = 1"
    or die('NIe znaleziono tabeli');
    mysqli_query($dbc, $query);
    echo $row['ocena'] . ' polubienie <br />';
}

}

}

    mysqli_close($dbc);
?>