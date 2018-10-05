<?php

function listPosts()
{
    // echo "listPosts\n";
    // sleep(5);
    // redirect('Location: index.php?action=post');
    echo date('h:i:s') . '<br/>';
    //sleep(10);
    echo date('h:i:s') . '<br/>';
}

function post()
{
    echo "post";
}

function redirect($url) {
    header($url);
}