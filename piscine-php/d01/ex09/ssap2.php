#!/usr/bin/php
<?php

if ($argc < 2)
	return ;
else
{
	array_shift($argv);
	$ret = implode(" ", $argv);
	$ret = array_filter(explode(" ", $ret));
	$alpha = array();
	$other = $num = $alpha;
	for ($i = 0; $i < count($ret); $i++)
	{
		if (ctype_alpha($ret[$i]))
			array_push($alpha, $ret[$i]);
		else if (is_numeric($ret[$i]))
			array_push($num, $ret[$i]);
		else
			array_push($other, $ret[$i]);
	}
	natcasesort($alpha);
	sort($num, SORT_STRING);
	natcasesort($other);
	$ret = array_merge($alpha, $num, $other);
	foreach ($ret as $v)
		echo "$v\n";
}

?>