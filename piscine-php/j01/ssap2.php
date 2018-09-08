#!/usr/bin/php
<?php

$i = 0;
$ret = array();

while (++$i < $argc) {
    $ret = array_filter (array_merge (explode (" ", "$argv[$i]"), $ret));
}
$i = 0;
while ($ret[$i] != NULL) {
    echo ("$ret[$i]\n");
    $i++;
}

?>