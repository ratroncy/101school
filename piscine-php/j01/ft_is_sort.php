#!/usr/bin/php
<?php

function    ft_is_sort($array) {
    $i = 0;
    while ($array[$i + 1] != NULL) {
        if (strcmp ($array[$i], $array[$i + 1]) > 0) {
            return (FALSE);
        }
        $i++;
    }
    return (TRUE);
}

?>