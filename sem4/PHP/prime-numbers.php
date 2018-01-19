<?php

$x = 100;
$flag = false;
for ($i = 2; $i < $x; $i++) {
    if ($x % $i == 0) { // divisible
        echo "$x is not prime";
        $flag = true;
        break;
    }
}
if (!$flag)
    echo "$x is prime";

?>