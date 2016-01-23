<?php 
	ob_start();
	session_start();
    include('header.html');
	require_once "connect.php"; 
?>
	<div id="leftBar">
		<ol>
			<li><a href="<?php URL ?>index.php?strona=1" target="">Strona główna</a></li>
			<li><a href="<?php URL ?>index.php?strona=2" target="">Formularz</a></li>
			<li><a href="<?php URL ?>index.php?strona=3" target="">Zawartość</a></li>
			<li><a href="<?php URL ?>index.php?strona=4" target="">Baza pracowników</a></li>
			<li><a href="<?php URL ?>index.php?strona=6" target="">Edycja pracownika</a></li>
			<li><a href="<?php URL ?>index.php?strona=7" target="">Usunięcie pracownika</a></li>
		</ol>
	</div>
	<div id="mainBar">
		<div class="wrapper">
			<?php               
				if(!isset($_GET['strona']))
					echo 'Strona główna';
				else{
                        $strona = $_GET['strona'];
                        if($strona  == 1)
                           echo 'Strona główna'; 
                        elseif($strona  == 2)
                            include('formularz.php'); 
                        elseif($strona  == 3)
                            include('zawartosc.php');  
                        elseif($strona  == 4)
                            include('bazauser.php');  
                        elseif($strona  == 5)
                            include('szukaj.php');  
                        elseif($strona  == 6)
                            include('bazauser.php'); 
                        elseif($strona  == 7)
                            include('bazauser.php'); 
                        elseif($strona  == 8)
                            include('edycja.php'); 
                        elseif($strona  == 9)
                            include('usun.php'); 
				    }
           ?>
		</div>
	</div>
	<div id="rightBar">
		<form method = "GET">
	        <input type="text" name="search" placeholder="Wpisz nazwisko">
	        <input name="SubmitSearch" type="submit" value="SZUKAJ">
	        <input type="hidden" name="strona" value="5">
        </form>
		<ol>
			<li><a href="<?php URL ?>index.php?strona=1" target="">Zaloguj</a></li>
			<li><a href="<?php URL ?>index.php?strona=2" target="">Rejestracja</a></li>
		</ol>
	</div>
<?php
    include('footer.php');
    ob_end_flush();
?>