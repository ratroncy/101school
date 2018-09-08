#!/usr/bin/php
<?php
if ($argc > 1) {
    $word = str_word_count("$argv[1]");
    $i = 0;
    $ret = array_filter(explode (" ", "$argv[1]"));
    while (++$i < $word) {
        echo $ret[$i]." ";
    }
    echo $ret[0]."\n";
}

?>