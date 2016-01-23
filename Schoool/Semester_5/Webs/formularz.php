<?php
// require_once "connect.php";
//    okresla jaka metoda zostal wyslany formularz
//	sprawdzam pola ktore zostaly wyslane metoda POST
if($_SERVER["REQUEST_METHOD"] == "POST"){
		
		// $wymagane_pola = array('imie', 'nazwisko', 'plec', 'panienskie', 'kod');
		
		// $pole_error = false;
		// foreach($wymagane_pola as $pole){
		// 	if(empty($_POST[$pole])){				
		// 		echo 'Proszę poprawnie wypełnić pole: '.$pole.'<br/>';
		// 		$pole_error = true;
		// 	}
		// }
		// if(!preg_match('/^[a-zA-Z0-9\.\-_]+\@[a-zA-Z0-9\.\-_]+\.[a-z]{2,4}$/D', $_POST['$email'])){
		// 			echo 'Proszę poprawnie wypełnić email: '.$email.'<br/>';
		// 			$pole_error = true;
		// 		}
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
			//if(!preg_match('/^([0-9]{2})-([0-9]{3})?$/i', $kod)){
			if(!preg_match("/^([0-9]{2})(-[0-9]{3})?$/i", $kod)){
				$kodEmpty = 'Podaj kod w formacie: xx-xxx';	
				unset($kod); 	
			}
		}
		if(empty($_POST['email'])){				
		$emailEmpty = 'Podaj email w formacie email@email.com';
		//$pole_error = true;
		}else{
			$email = $_POST['email'];
			//if(!preg_match('/^[a-zA-Z0-9\.\-_]+\@[a-zA-Z0-9\.\-_]+\.[a-z]{2,4}$/D', $email)){		
			if(!preg_match("/^[a-zA-Z0-9\.\-_]+\@[a-zA-Z0-9\.\-_]+\.[a-z]{2,4}$/D", $email)){
				$emailEmpty = 'Podaj email w formacie email@email.com';	
				unset($email); 	
			}
		}
}
if((!isset($_POST['Submit'])) or !$imie or !$nazwisko or !$plec or !$panienskie or !$kod or !$email){ ?>
	<form method="POST" action="index.php?strona=2">
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
					<input type="radio" name="plec" value="kobieta" <?php if ($_POST['plec'] == 'kobieta') echo 'checked'; ?>> kobieta
					</br>
					<input type="radio" name="plec" value="mezczyzna" <?php if ($_POST['plec'] == 'mezczyzna') echo 'checked'; ?>> mężczyzna					
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
		</table>
		<br>
		<center>
			<input name="Submit" type="submit" value="WYŚLIJ">
		</center>
	</form>
	<?php
	
	}else{
	echo "Imię:  " .$_POST['imie'] ."<br/>";
	echo "Nazwisko:  " .$_POST['nazwisko'] ."<br/>";
	echo "Płeć:  " .$_POST['plec'] ."<br/>";
	echo "Nazwisko panieńskie:  " .$_POST['panienskie'] ."<br/>";
	echo "Email:  " .$_POST['email'] ."<br/>";
	echo "Kod:  " .$_POST['kod'] ."<br/>";
	
	if(!isset($_SESSION['licz']))
		$_SESSION['licz'] = 1;
	else
		$_SESSION['licz']++;
	
	$liczba = $_SESSION['licz'];
	
	$_SESSION['pracownik'][$liczba]['imie']  = $_POST['imie'];
	$_SESSION['pracownik'][$liczba]['nazwisko']  = $_POST['nazwisko'];
	$_SESSION['pracownik'][$liczba]['plec']  = $_POST['plec'];
	$_SESSION['pracownik'][$liczba]['panienskie']  = $_POST['panienskie'];
	$_SESSION['pracownik'][$liczba]['email']  = $_POST['email'];
	$_SESSION['pracownik'][$liczba]['kod']  = $_POST['kod'];
		
	$my_connect->query("INSERT INTO user (imie, nazwisko, plec, panienskie, email, kod)
						VALUES ('".$_POST['imie']."', '".$_POST['nazwisko']."', '".$_POST['plec']."', '".$_POST['panienskie']."', '".$_POST['email']."', '".$_POST['kod']."')");
	unset($_POST['Submit']);
}
?>