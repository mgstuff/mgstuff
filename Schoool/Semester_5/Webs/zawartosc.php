    
<!--     $licznik = $_SESSION['licz'];
    $iter = 1;
    for($iter; $iter <= $licznik; $iter++){	
		echo "<br/>";
		echo "ID:  " .$iter."<br/>";
		echo "Imię:  " .$_SESSION['pracownik'][$iter]['imie'] ."<br/>";
		echo "Nazwisko:  " .$_SESSION['pracownik'][$iter]['nazwisko']."<br/>";
		echo "Płeć:  " .$_SESSION['pracownik'][$iter]['plec']."<br/>";
		echo "Nazwisko panieńskie:  " .$_SESSION['pracownik'][$iter]['panienskie']."<br/>";
		echo "Email:  " .$_SESSION['pracownik'][$iter]['email']."<br/>";
		echo "Kod:  " .$_SESSION['pracownik'][$iter]['kod']."<br/>";
    }
    session_unset (); -->

<?php 
$licznik = $_SESSION['licz'];
	$iter = 1;
	if($licznik != 0){?>		
		<table class="userTable">
			<tr class="tableTitleRowBold">
				<td>
				id	
				</td>
				<td>
					Imię
				</td>
				<td>
					Nazwisko
				</td>
				<td>
					Płeć
				</td>
				<td>
					Nazwisko pańieńskie
				</td>
				<td>
					Email
				</td>
				<td>
					Kod
				</td>
			</tr>
	<?php
	    for($iter; $iter <= $licznik; $iter++){
	 		echo 	'<tr>
					<td>
						'.$iter.'	
					</td>
					<td>
						'.$_SESSION['pracownik'][$iter]['imie'].'
					</td>
					<td>
						'.$_SESSION['pracownik'][$iter]['nazwisko'].'
					</td>
					<td>
						'.$_SESSION['pracownik'][$iter]['plec'].'
					</td>
					<td>
						'.$_SESSION['pracownik'][$iter]['panienskie'].'
					</td>
					<td>
						'.$_SESSION['pracownik'][$iter]['email'].'
					</td>
					<td>
						'.$_SESSION['pracownik'][$iter]['kod'].'
					</td>
				</tr>';
	 	}
	?>	
</table>
<?php 
	}
	else
		echo 'Brak rekordów sesyjnych!';
?>
