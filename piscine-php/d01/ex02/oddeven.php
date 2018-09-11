#!/usr/bin/php
<?php

$ask = fopen ("php://stdin", "r");

while ($ask && !feof($ask)) {

echo ("Entrez un nombre: ");
$num = fgets($ask);
$num = str_replace("\n", "", "$num");

if (is_numeric($num)) {
    if ($num % 2 == 0) {
        echo ("Le chiffre $num est Pair\n");
    }
    else {
        echo ("Le chiffre $num est Impair\n");
    }
}
else {
    echo ("'$num' n'est pas un chiffre\n");
}

}

fclose($ask);

?>