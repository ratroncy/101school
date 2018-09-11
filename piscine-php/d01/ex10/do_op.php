#!/usr/bin/php
<?php

if ($argc == 4) {
    foreach (array_slice($argv, 1) as $v)
        trim($v);
    $argv[2] = trim($argv[2]);
    if ($argv[2] == "+") {
        echo ($argv[1] + $argv[3]."\n");
    }
    if ($argv[2] == "-") {
        echo ($argv[1] - $argv[3]."\n");
    }
    if ($argv[2] == "*") {
        echo ($argv[1] * $argv[3]."\n");
    }
    if ($argv[2] == "/") {
        echo ($argv[1] / $argv[3]."\n");
    }
    if ($argv[2] == "%") {
        echo ($argv[1] % $argv[3]."\n");
    }
}
else {
    echo "Incorrect Parameters\n";
}

?>