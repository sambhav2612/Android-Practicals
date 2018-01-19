<?php


    $stdin = fopen('php://stdin', 'r');
    if ($stdin) {
        $flag = true;
        $string = fgets($stdin);
        for ($ch = 0, $back = strlen($string)-2; $ch < strlen($string)-1, $back > 0; $ch++, $back--) {
            if ($string[$ch] != $string[$back]) {
                $flag = false;
            }
        }
        if (!$flag) {   
            echo "not palindrome";
        } else {
            echo "palindrome";
        }
    }

?>