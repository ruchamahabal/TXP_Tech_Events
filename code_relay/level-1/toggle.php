<?php
    $str = "HelLo";
    $newStr = '';
    $length = strlen($str);
    for ($i=0 ; $i<$length ; $i++) {
     if ($str[$i] >= 'A' && $str[$i] <= 'Z') {
         $newStr .= strtolower($str[$i]);
     } else if ($str[$i] >= 'a' && $str[$i] <= 'z') {
         $newStr .= strtoupper($str[$i]);
     } else {
         $newStr .= $str[$i];
     }
    }
    echo $newStr;
?>
