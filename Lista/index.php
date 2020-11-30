<?php 
$title = 'Dodaj film';
$description = 'Ranking filmów';
$keywords = 'Ranking, Filmy, Najlepsze Filmy';
include 'includes/head.php'; ?>
<body>
  <header></header>
<?php include 'includes/nav.php'; ?>
  <article>
  <section>
    <h3>Dodaj swój ulubiony film</h3>
  <hr />
  <form enctype="multipart/form-data" method="post" action="serwer.php">
    <label for="tytul">Tytuł filmu:</label>
    <input type="text" id="tytul" name="tytul" required="required"/><br />
    <label for="director">Reżyser:</label>
    <input type="text" id="director" name="director" required="required"/><br />
    <label>Gatunek:</label>
    <select name="gatunek" required="required" class="btn">
<option value="Fantastyka">Fantastyka
<option value="Dramat">Dramat
<option value="Komedia">Komedia
    </select>
    <label for="rok">Rok produkcji:</label>
    <input type="number" max="2015" min="1900" required="required" class="btn" id="rok" name="rok">
    <label for="image">Okładka filmu:</label>
    <input type="file" id="image" name="image" class="btn" required="required"/>
    <hr />
    <input type="submit" value="Dodaj" name="submit" class="btn btn-primary"/>
  </form>
  </section>
  </article>
  <aside></aside>
  <footer></footer>
</body>
