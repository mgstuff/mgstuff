<?php

$url = $_SERVER['REQUEST_URI'];
$url   = explode('=', $url);
$id = $url[2];



//while($row = $sql->fetch_row()){
	// $imie = $row['imie']; $nazwisko = $row['nazwisko'];  $plec = $row['plec']; 
	// $panienskie = $row['panienskie']; $email = $row['email']; $kod = $row['kod'];
if(!isset($_POST['SubmitChange'])){
	$query = "SELECT * FROM user WHERE id = '$id'";
	$sql = $my_connect->query($query);
	$row = $sql->fetch_row();
	$imie = $row[1]; $nazwisko = $row[2];  $plec = $row[3]; 
	$panienskie = $row[4]; $email = $row[5]; $kod = $row[6];
}
//}
/*$row = $sql->fetch_row();
$imie = $row[1]; 
$nazwisko = $row[2];  $plec = $row[3]; 
$panienskie = $row[4]; $email = $row[5]; $kod = $row[6];*/

if($_SERVER["REQUEST_METHOD"] == "POST"){
		if(empty($_POST['imie'])){				
				//$pole_error = true;
				$imieEmpty = 'Proszę poprawnie wypełnić pole imie';
		}else{
			$imie = $_POST['imie'];
		}
		
		if(empty($_POST['nazwisko'])){				
				$nazwiskoEmpty = 'Proszę poprawnie wypełnić pole nazwisko';
				//$pole_error = true;
		}else{
			$nazwisko = $_POST['nazwisko'];
		}
		
		if(empty($_POST['plec'])){				
				$plecEmpty = 'Proszę poprawnie wypełnić pole pleć';
				//$pole_error = true;
		}else{
			$plec = $_POST['plec'];
		}
		
		if(empty($_POST['panienskie'])){				
				$panienskieEmpty = 'Proszę poprawnie wypełnić pole panieńskie';
				//$pole_error = true;
		}else{
			$panienskie = $_POST['panienskie'];
		}
		
		if(empty($_POST['kod'])){				
				$kodEmpty = 'Proszę wypełnić pole kod liczbami';
				//$pole_error = true;
		}else{
			$kod = $_POST['kod'];
			if(!preg_match("/^([0-9]{2})(-[0-9]{3})?$/i", $kod)){
				$kodEmpty = 'Podaj kod w formacie: xx-xxx';	
				unset($kod); 	
			}
		}
		if(empty($_POST['email'])){				
		$emailEmpty = 'Proszę wypełnić pole kod liczbami';
		//$pole_error = true;
		}else{
			$email = $_POST['email'];	
			if(!preg_match("/^[a-zA-Z0-9\.\-_]+\@[a-zA-Z0-9\.\-_]+\.[a-z]{2,4}$/D", $email)){
				$emailEmpty = 'Podaj email w formacie email@email.com';	
				unset($email); 	
			}
		}
}

if(!isset($_POST['SubmitChange']) or !$imie or !$nazwisko or !$plec or !$panienskie or !$kod or !$email){ ?>
	<form method="POST" action="index.php?strona=8&id=<?php echo $id ?>">
		<table>
		<tr>
		<td>
		<table>
			<tr>
				<td> Imię</td>
				<td>
					<input type="text" name="imie" value="<?php echo $imie; ?>">
				</td>
				<td>
					<span class="formError"> <?php echo $imieEmpty; ?> </span>
				</td>
			</tr>
			<tr>
				<td> Nazwisko</td>
				<td>
					<input type="text" name="nazwisko" value="<?php echo $nazwisko; ?>">
				</td>
				<td>
					<span class="formError"> <?php echo $nazwiskoEmpty; ?> </span>
				</td>
			</tr>
			<tr>
				<td> Płeć</td>
				<td>
					<input type="radio" name="plec" value="kobieta" <?php if ($plec == 'kobieta') echo 'checked'; ?>> kobieta
					</br>
					<input type="radio" name="plec" value="mezczyzna" <?php if ($plec == 'mezczyzna') echo 'checked'; ?>> mężczyzna					
				</td>
				<td>
					<span class="formError"> <?php echo $plecEmpty; ?> </span>
				</td>
			</tr>
			<tr>
				<td>Nazwisko panieńskie</td>
				<td>
					<input type="text" name="panienskie" value="<?php echo $panienskie; ?>">		
				</td>
				<td>
					<span class="formError"> <?php echo $panienskieEmpty; ?> </span>
				</td>
			</tr>
			<tr>
				<td>Email</td>
				<td>
					<input type="text" name="email" value="<?php echo $email; ?>">	
				</td>
				<td>
					<span class="formError"> <?php echo $emailEmpty; ?> </span>
				</td>
			</tr>
			<tr>
				<td>Kod pocztowy</td>
				<td>
					<input type="text" name="kod" value="<?php echo $kod; ?>">
				</td>
				<td>
					<span class="formError"> <?php echo $kodEmpty; ?> </span>
				</td>
			</tr>
			<tr>
				<td>
					<input name="SubmitChange" type="submit" value="POTWIERDŹ ">
				</td>
				<td>
					<a href="/index.php?strona=6"><button type="button">ODRZUĆ</button></a>
				</td>
			</tr>
		</table>
		</td>
		</tr>
		</table>
	</form>
	<?php
	}else{
		$query2 = "UPDATE user SET imie='$imie', nazwisko='$nazwisko', plec='$plec', panienskie='$panienskie', kod='$kod', email='$email' WHERE id='$id'";
		$my_connect->query($query2);
		unset($_POST['SubmitChange']);
		header('Location: index.php?strona=6'); 
	}
?>