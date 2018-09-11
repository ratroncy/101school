#!/usr/bin/php
<?php

$ret = array();
foreach (array_slice($argv, 1) as $v)
    $ret = array_filter(array_merge (explode (" ", $v), $ret));
sort($ret);
foreach ($ret as $v)
    echo $v."\n";

?>