#include<stdio.h>

int main(int argc, char** argv)
{
	char a, b;
	int ax, ay, bx, by;
	scanf("%c", a&);
	scanf("%c", b&);
	// e8 -> (5, 8) = (ax, ay)
	// rule for bishop: (ax+ay) = (bx+by) or (ax-ay) = (bx - by)
	// rule for rook: ax = bx or ay = by
	// rule for queen: (rook) or (bishop)
	// rule for pawn: ax=bx and (ay+1 = by or (ay = 2 and by = 4))
	// rule king abs(ax-bx)<2 and abs(ay-by)<2
	// rule for knight: not(queen) and abs(ax-bx)+abs(ay-by)=3

}
