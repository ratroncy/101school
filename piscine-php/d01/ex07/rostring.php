#!/usr/bin/php
<?php

if ($argc > 1) {
    $ret = array_filter(explode (' ', $argv[1]));
    foreach (array_slice($ret, 1) as $v) {
        echo trim($v)." ";
    }
    echo $ret[0]."\n";
}

?>