#!/usr/bin/php
<?php
   $handle = fopen($argv[1], 'r');
   if ($handle) {
      while (($buffer = fgets($handle, 4096)) !== false) {
        $table = buildTable($buffer);
        $A = $table[0];
        $B = $table[1];
        $N = $table[2];
        DoFizzBuzz($A, $B, $N);
     }
    }
   fclose($handle);
   
  function DoFizzBuzz($A, $B, $N) {
    $i = 1;
    while ($i < $N) {
      if ($i % $A == 0) {
        echo 'F';
        }
      if ($i % $B == 0) {
        echo 'B';
        }
      if (($i %$A != 0) && ($i % $B != 0)) {
        echo $i;
        }
      echo ' ';
    $i++;
    }
    if ($i % $A == 0) {
        echo 'F';
      }
    if ($i % $B == 0) {
        echo 'B';
      }
    if (($i %$A != 0) && ($i % $B != 0)) {
        echo $i;
      }
    echo "\n";
  }
  
  function buildTable($buffer) {
    if (!$buffer) {
      return (NUL);
    }
    else {
      $table = split(' ', $buffer);
    }
    return ($table);
  }
?>