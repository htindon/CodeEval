use strict;
use warnings;

my $n = 2;
my $i = 0;
my $sumofprimes = 0;
while ($i < 1000){
	if (isprime($n) == 0){
		$i += 1;
		$sumofprimes += $n;
	}
	$n += 1;
}
print $sumofprimes;

sub isprime{
	my $n = shift;
	my $i = 2;
	while ($i < $n) {
		if ($n % $i == 0) {
			return (-1);
		}
		$i += 1;
	}
	return (0);
}
