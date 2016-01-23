<?php

	$url = $_SERVER['REQUEST_URI'];
	$url   = explode('=', $url);
	$id = $url[2];

	$query = "SELECT * FROM user WHERE id = '$id'";
	$sql = $my_connect->query($query);


	while($row = $sql->fetch_row()){
	$imie = $row[1]; $nazwisko = $row[2];  $plec = $row[3]; 
	$panienskie = $row[4]; $email = $row[5]; $kod = $row[6];
	}
	echo "Czy na pewno chcesz usunąć użytkownika:'.$imie.'?";
?>
	</br>
	<form action="index.php?strona=9&id=<?php echo $id ?>" method="POST">
		<input type="submit" name="choice" value="TAK" />
		<input type="submit" name="choice" value="NIE" />
	</form>	

<?php

	if($_POST['choice'] == 'TAK'){
		$my_connect->query("DELETE FROM user WHERE id='$id'");
		header("Location: index.php?strona=7");
	}
	elseif ($_POST['choice'] == 'NIE') {
		header("Location: index.php?strona=7");
		//echo("<script>location.href = '".ADMIN_URL."index.php?strona=7';</script>");
	}
	
?>