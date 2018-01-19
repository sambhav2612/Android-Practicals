<?php

    $stdin = fopen('php://stdin', 'r');
    if ($stdin) {
        $string = fgets($stdin, 1024);
        echo strrev($string);    
    }
    

?>