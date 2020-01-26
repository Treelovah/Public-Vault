<?php

$name = "SomeName";
$value = 100;
$expire = time() + (60*60*24*7);

setcookie($name, $value, $expire);
