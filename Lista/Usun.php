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
    <h3>Usuń film z listy</h3>
    <form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
  	  <?php 
    
    $dbc = mysqli_connect('localhost', 'root', '', 'filmy')
    or die('Brak połączenia z serwerem MySQL.');
 ?>

<table class="table table-hover">
          <tr class"info">
          <td><b>#</b></td>  
          <td><b>Tytuł</b></td>
          <td><b>Reżyser</b></td>
          <td><b>Gatunek</b></td>
          <td><b>Rok produkcji</b></td>
          <td><b>CheckBox</b></td>
          </tr>          




<?php  
  $p = 1;
  $query = "SELECT * FROM filmy";
  $result = mysqli_query($dbc, $query);
  while ($row = mysqli_fetch_array($result)) {
    echo '<tr><td>' . $p . '.</td>';
    echo '<td>' . $row['tytul'] . '</td>';
    echo '<td>' . $row['director'] . '</td>';
    echo '<td>' . $row['gatunek'] . '</td>';
    echo '<td>' . $row['rok'] . '</td>';
    echo '<td><input type="checkbox" class="checkbox" class="btn" value="' . $row['id'] . '" name="todelete[]"/></td></tr>';
    echo '';
    $p++;
  }
 
 if (isset($_POST['submit'])) 
{
        foreach ($_POST['todelete'] as $delete_id) 
        {
        
        $query = "DELETE FROM filmy WHERE id = $delete_id";
      
        mysqli_query($dbc, $query)
        or die('Błąd w zapytaniu do bazy danych.');

        } 
        header('Location: usun.php'); 
}


  mysqli_close($dbc);

?>
</table>

    <input type="submit" name="submit" value="Usuń" class="btn btn-primary"/>
  </form>
</body>
</html>