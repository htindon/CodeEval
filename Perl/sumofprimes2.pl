use strict;
use warnings;
use Math::Prime::XS;

my $n = 2;
my $i = 0;
my $sumofprimes = 0;
while ($i < 1000){
	if (is_prime($n) == 0){
		$i += 1;
		$sumofprimes += $n;
	}
	$n += 1;
}
print $sumofprimes;
