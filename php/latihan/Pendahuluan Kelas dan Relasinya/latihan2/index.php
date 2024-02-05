<?php
    include "buku.php";

    $b2 = new buku("J2ME","orang_1");
    echo $b2->getjudul()."<br/>";
    echo $b2->getpengarang()."<br/>";
?>