<?php

    function check_for_lowercase($string) {
        for ($ch = 0; $ch < strlen($string); $ch++) {
            if ((ord($string[$ch]) >= ord('A')) && (ord($string[$ch]) <= ord('Z'))) {
                return false;
            } else {
                return true;
            }
        }
    }

    $stdin = fopen('php://stdin', 'r');
    if ($stdin) {
        $string = fgets($stdin, 1024);
        var_dump(check_for_lowercase($string));
    }

?>