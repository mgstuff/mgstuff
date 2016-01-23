<div id="footer" class="red">
	<?php
		
        //count zlicza liczbe elementow w tablicy
		if(!isset($_SESSION['licz'])){
			echo 'STOPKA';
		}elseif($_SESSION['licz'] > 0)
        	echo $_SESSION['licz'];
    ?>
<!--  div contentu	-->
</div>


</div>

</body>

</html>