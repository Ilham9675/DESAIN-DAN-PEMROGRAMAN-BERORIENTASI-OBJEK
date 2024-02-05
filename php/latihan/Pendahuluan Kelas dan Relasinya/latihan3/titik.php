<?php
    class Titik{
        private $x;
        private $y;

        public function __construct(){
            $this->x = 0;
            $this->y = 0;
        }

        public function setx($xp){
            $this->x = $xp;
        }

        public function sety($yp){
            $this->y = $yp;
        }

        public function getx(){
            return $this->x;
        }

        public function gety(){
            return $this->y;
        }

        function __destruct(){
            
        }
    }
?>