#!/usr/bin/perl

use warnings;
use strict;

my $filename = $ARGV[0];
open(my $FH, '<', $filename) || die($!);
while (my $line = <$FH>) {
	my $n = 0;
	my $result = '';
	if ($line =~ /^(\d+) (\d+) (\d+)$/) {
		while ($n < $3){		
			$n += 1;
			if ($n % $1 == 0) {
				$result = $result . "F";
			}
			if ($n % $2 == 0) {
				$result = $result . "B";
			}
			if ($n % $2 != 0 && $n % $1 != 0) {
				$result = $result . $n;
			}
			$result = $result . ' ';
		}
	chop $result;
	print "$result\n";
	}
}
