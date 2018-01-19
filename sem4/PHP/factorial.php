<?php

function fx($x) {
	$fact = 1;
	for($i = 1; $i <= $x; $i++) {
		$fact = $fact*$i;
	} 	

	echo $fact;
}

fx(5);

?>
