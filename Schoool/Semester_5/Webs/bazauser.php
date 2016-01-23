<table class="userTable">
	<tr class="tableTitleRowBold">
		<?php if($_GET['strona'] == 6){
			echo'<td>
					Edycja	
				</td>';
		}elseif ($_GET['strona'] == 7){
			echo'<td>
					Usuń	
				</td>';
		}
		?>
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
	$perpage = 4;
	$page = $_GET['podstrona'];

	if($page =="" || $page == "1"){
		$sqlpage = 0;
	}
	else{
		$sqlpage = $page * $perpage - $perpage;
	}
		$pagetemp1 = $pagetemp2 = $page;
		$prev = $page - 1;
		$next = $page + 1;
			
		// $prev = max(1, $page - 1);
		// $next = min($count, $page + 1);
	
	$sql2 = $my_connect->query("SELECT * FROM user");
	$count = $sql2->num_rows;

	$links_num = ceil($count / $perpage);

	$sql = $my_connect->query("SELECT * FROM user LIMIT $sqlpage, $perpage");
	
	while ($user = $sql->fetch_assoc()) {
		echo '<tr>';
		if($_GET['strona'] == 6){
			echo '<td>
				<a href="index.php?strona=8&id=' .$user['id']. '">Edycja</a>	
			</td>';	
		}elseif ($_GET['strona'] == 7) {
			echo '<td>
				<a href="index.php?strona=9&id=' .$user['id']. '">Usuń</a>	
			</td>';	
		}
		echo '<td>
			'.$user['id'].'	
		</td>
		<td>
			'.$user['imie'].'
		</td>
		<td>
			'.$user['nazwisko'].'
		</td>
		<td>
			'.$user['plec'].'
		</td>
		<td>
			'.$user['panienskie'].'
		</td>
		<td>
			'.$user['email'].'
		</td>
		<td>
			'.$user['kod'].'
		</td>
		</tr>';
	}
?>	
</br>
</table>
<?php 
	if ($page > 1) {
		echo '<a href="index.php?strona='.$_GET['strona'].'&podstrona=' .$prev. '"> <div class="btn-round red"><span> < </span></div> </a>';	
	}
	for($id=1; $id <= $links_num; $id++){		
		echo '<a href="index.php?strona='.$_GET['strona'].'&podstrona=' .$id. '">  ' .$id. '  </a>';		
	}
	if ($page < $links_num) {
		echo '<a href="index.php?strona='.$_GET['strona'].'&podstrona=' .$next. '"> <div class="btn-round red"><span> > </span></div> </a>';
	}
?>