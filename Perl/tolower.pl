use strict;
use warnings;

open(my $FH, '<', $ARGV[0]) || die $!;
while(<$FH>){
	print(lc $_);
}
close($FH);
