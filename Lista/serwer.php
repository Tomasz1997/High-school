<?php 
$title = 'Dodałeś film';
$description = 'Ranking filmów';
$keywords = 'Ranking, Filmy, Najlepsze Filmy';
include 'includes/head.php'; ?>
<body>
  <header></header>
<?php include 'includes/nav.php'; ?>
  <article>
  <section>
    <h3>Dodałeś swój ulubiony film <hr /></h3>
<?php
define('GW_MAXFILESIZE', 8800000000009768);  
     $tytul = $_POST['tytul'];
  $gatunek = $_POST['gatunek'];
  $rok = $_POST['rok'];
  $director = $_POST['director'];
    $image_type = $_FILES['image']['type'];
    $image_size = $_FILES['image']['size']; 
    if ($tytul AND $director) {
      if ((($image_type == 'image/gif') || ($image_type == 'image/jpeg') || ($image_type == 'image/pjpeg') || ($image_type == 'image/png'))
        && ($image_size > 0) && ($image_size <= GW_MAXFILESIZE)) {
        if ($_FILES['image']['error'] == 0) {
          // Przenoszenie plików do docelowego katalogu. 
          define('GW_UPLOADPATH', 'image/');
  $id = sha1($tytul+$director+$gatunek+$rok+$image_size);
  $gatunek = $_POST['gatunek'];
  $tytul = $_POST['tytul'];
  $rok = $_POST['rok'];
  $director = $_POST['director'];
          $image = $_FILES['image'] . $id;
          $target = GW_UPLOADPATH . $image;
          
          
          if (move_uploaded_file($_FILES['image']['tmp_name'], $target)){
    
    $dbc = mysqli_connect('localhost', 'root', '', 'filmy')
    or die('Brak połączenia z serwerem MySQL.');

$query = "INSERT INTO filmy (tytul, director, image, gatunek, rok)  VALUES ('$tytul', '$director', '$image', '$gatunek', '$rok')";
    
    $result = mysqli_query($dbc, $query)
    or die('Błąd w zapytaniu do bazy danych.');



  echo '<h4> Dodano film ' . $tytul . ' <br />Reżyser:' . $director;
  echo '<br />Gatunek:' . $gatunek;
  echo '<br />Rok produkcji:' . $rok . '</h4>';          
            $image = "";
            $director = "";
            $tytul = "";
            $gatunek = "";
            $rok = "";
            mysqli_close($dbc);
          }
          else {
            echo '<p class="error">Wystąpił problem przy przesyłaniu zrzutu.</p>';
          }
        }
      }
      else {
           echo '<p class="error">Zrzut musi być plikiem GIF, JPEG lub PNG o rozmiarze nie ' .
      ' większym niż ' . (GW_MAXFILESIZE / 1024) . ' kB.</p>';
      }

      // Próba usunięcia tymczasowego pliku graficznego ze zrzutem.
      @unlink($_FILES['image']['images']);
    }
    else {
      echo '<p class="error">Wpisz wszystkie dane, aby dodać wynik.</p>';
    }


?>
  </section>
  </article>
  <aside></aside>
  <footer></footer>
</body>

</html>