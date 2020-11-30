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
        <h3>Lista najlepszych filmów</h3>
         <hr />
  	       <?php 
    $get = $_GET['id'];
    
    $dbc = mysqli_connect('localhost', 'root', '', 'filmy')
    or die('Brak połączenia z serwerem MySQL.');

    $query = "SELECT * FROM filmy WHERE id=$get"
    or die('NIe znaleziono tabeli');
    $data = mysqli_query($dbc, $query);
    
    $row = mysqli_fetch_array($data);
    $i = $row['id'];
    $tytul = $row['tytul'];
    $director = $row['director'];
    $gatunek = $row['gatunek'];
    $rok = $row['rok'];
    $GW_UPLOADPATH = 'image/';
    $image = $row['image'];
    $id = $row['id'];
  echo '<h4>Film ' . $tytul . ' <br />Reżyser:' . $director;
  echo '<br />Gatunek:' . $gatunek;
  echo '<br />Rok produkcji:' . $rok . '</h4>';
  echo '<td><img src="' . $GW_UPLOADPATH . $image . '" alt="Score image" class="img-polaroid"/></td></tr>';
  echo '<form methode="get" action="' . $_SERVER['PHP_SELF'] . '"><input type="hidden" name="id" value="' . $i . '" />
<input type="hidden" name="submit" value="submit" />
<input type="submit" class = "btn btn-primary" value="Lubie to!" name="' .  $row['id'] . '" /><form>';
  if (isset($_GET['submit'])) {
    $dbc = mysqli_connect('localhost', 'root', '', 'filmy')
    or die('Brak połączenia z serwerem MySQL.');
    $i = $row['id'];
    $ocena = $row['ocena'] + 1;
    $query = "UPDATE filmy SET ocena = $ocena WHERE id = $i"
    or die('NIe znaleziono tabeli');
    mysqli_query($dbc, $query);
    echo '<br /><h4>Ocena '. $ocena . ' </h4><br />';
}

        mysqli_close($dbc);
?>
  </section>
  </article>
  <aside></aside>
  <footer></footer>
</body>