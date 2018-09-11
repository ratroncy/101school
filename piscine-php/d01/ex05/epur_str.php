#!/usr/bin/php
<?php
 if ($argc == 2) {
    $array = array_filter(explode(' ', $argv[1]));
    foreach($array as $v)
        echo trim($v)." ";
    echo "\n";
 }
?>