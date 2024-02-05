<?php
    class buku{
        private $judul = "";
        private $pengarang = "";

        function __construct ($j="",$p=""){
            $this->judul = $j;
            $this->pengarang = $p;
        }

        function setjudul($j=""){
            $this->judul = $j;
        }

        function setpengarang($p=""){
            $this->pengarang = $p;
        }

        function getjudul(){
            return $this->judul;
        }

        function getpengarang(){
            return $this->pengarang;
        }
    }
?>