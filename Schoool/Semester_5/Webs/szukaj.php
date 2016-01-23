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
	
	//if(isset($_GET['search'])){
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

		//$sql = $my_connect->query("SELECT * FROM user LIMIT $sqlpage, $perpage");

		//$searching = mysql_real_escape_string($_GET['search']);
		$searching = $_GET['search'];
		$searching = trim($searching);
		$keys = explode(" ",$searching);

		$sql = "SELECT * FROM user WHERE nazwisko LIKE '%$searching%'";
		//$sql4count = $sql;

		foreach($keys as $k){
		    $sql .= " OR nazwisko LIKE '%$k%' ";
		}
		$sql2 = $my_connect->query($sql);
		//$sql4count = $my_connect->query($sql);
		$count = $sql2->num_rows;
		$links_num = ceil($count / $perpage);
		//echo $links_num;
		$sql .= "LIMIT $sqlpage, $perpage";
		$sql = $my_connect->query($sql);


		while ($user = $sql->fetch_assoc()){
			echo 	'<tr>
			<td>
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
	//}
?>
</table>
<?php 
	if ($page > 1) {
		echo '<a href="'.$_SERVER['REQUEST_URI'].'?strona=5&podstrona=' .$prev. '"> <div class="btn-round red"><span> < </span></div> </a>';	
	}
	for($id=1; $id <= $links_num; $id++){		
		echo '<a href="'.$_SERVER['REQUEST_URI'].'?strona=5&podstrona=' .$id. '">  ' .$id. '  </a>';		
	}
	if ($page < $links_num) {
		echo '<a href="'.$_SERVER['REQUEST_URI'].'?strona=5&podstrona=' .$next. '"> <div class="btn-round red"><span> > </span></div> </a>';
	}
?>