<?php
$title = 'Ranking filmów';
$description = 'Ranking filmów';
$keywords = 'Ranking, Filmy, Najlepsze Filmy';
include 'includes/head.php'; ?>
<link rel="stylesheet" type="text/css" href="css/style.css">

<body>
	<header></header>
	<?php include 'includes/nav.php'; ?>
	<article>
		<section>
			<h3>Lista najlepszych filmów</h3>
			<?php
			if (isset($_GET['numer'])) {
				$zakres = $_GET['numer'] - 1;
			} else {
				$zakres = 0;
			}
			$zakres_k = $zakres + 10;
			$dbc = mysqli_connect('localhost', 'root', '', 'filmy')
				or die('Brak połączenia z serwerem MySQL.');

			$query = "SELECT * FROM filmy LIMIT $zakres,$zakres_k"
				or die('NIe znaleziono tabeli');

			$data = mysqli_query($dbc, $query);
			$p = $zakres + 1; ?>

			<table class="table table-hover">
				<tr class"info">
					<td><b>#</b></td>
					<td><b>Tytuł</b></td>
					<td><b>Reżyser</b></td>
					<td><b>Gatunek</b></td>
					<td><b>Rok produkcji</b></td>
					<td><b>Zdjęcie</b></td>
				</tr>
				<tr>


					<?php
					while ($row = mysqli_fetch_array($data)) {

						$i = $row['id'];

						if ($i >= 0 and $i <= 120) {
							$GW_UPLOADPATH = 'image/';
							$image = $row['image'];

							echo  '<tr><td>' . $p . ".</td>";
							echo '<form method="get" action="strona.php"><input type="hidden" name="id" value="' . $i . '" /><td><button class="button">' . $row['tytul'] . '</td></button></form>';
							echo '<td>' . $row['director'] . '</td>';
							echo '<td>' . $row['gatunek'] . '</td>';
							echo '<td>' . $row['rok'] . '</td>';
							echo '<td><img src="' . $GW_UPLOADPATH . $image . '" alt="Score image" height="30px" width="30px" class="img-polaroid"/></td></tr>';

							$p++;
						}
					}
					echo '</table>';
					mysqli_close($dbc);
					?>
		</section>
		</br>
		<div>
			<a href="lista.php?numer=1"><input type="submit" name="submit" value="1" class="btn btn-primary" /></a>
			<a href="lista.php?numer=11"><input type="submit" name="submit" value="2" class="btn btn-primary" /></a>
			<a href="lista.php?numer=21"><input type="submit" name="submit" value="3" class="btn btn-primary" /></a>
		</div>
	</article>
	<aside>
	</aside>
	<footer></footer>
</body>

</html>