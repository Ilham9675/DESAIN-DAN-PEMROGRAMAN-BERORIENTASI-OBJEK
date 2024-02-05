<?php
    include "titik.php";

    $t1 = new Titik();

    $t1->setx(18);
    $t1->sety(28);

    echo "t1 : nilai X : ".$t1->getx()."<br/>";
    echo "t1 : nilai Y : ".$t1->gety()."<br/>";
?>