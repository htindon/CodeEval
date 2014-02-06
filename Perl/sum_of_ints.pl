use strict;
use warnings;

my $sum = 0;
open(my $FH, '<', $ARGV[0]) || die $!;
while(<$FH>){
	chomp;
	$sum += $_;
}
print $sum;
close($FH);
