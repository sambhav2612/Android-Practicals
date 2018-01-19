<?php

$a = 2; 
$b = 3;
$c = 4;
$large = 0;
if ($a >= $b && $a >= $c) {
	$large = $a;
} else if ($b >= $a && $b >= $c) {
	$large = $b;
} else {
	$large = $c;
}

echo $large;

?>
