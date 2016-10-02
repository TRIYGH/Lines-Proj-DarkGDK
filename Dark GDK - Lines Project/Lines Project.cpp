//T. Robert Ward
//June 26, 2013

#include "DarkGDK.h"

int x1, x2, y, y2, temp;

int ScreenWidth = 620;
int ScreenHeight = 480;
int LineLength;

void DarkGDK()
{
	dbRandomize(dbTimer()); 

	for ( int i = 0; i < 20; i++ )
	{
		x1 = dbRND(ScreenWidth);
		temp = 640 - x1;
		x2 = dbRND(temp) + x1;
			if ( x2 % 2 == 1)
				x2++;
		y = dbRND(ScreenHeight);

		dbLine(x1,y,x2,y);

		x1 = x1 + ((x2-x1)/2);
		x1 = x1 - 5;
		x2 = x1 + 10;
		y = y - 5;
		y2 = y + 10;

		dbBox(x1,y,x2,y2);

		dbWaitKey();
	}
	
	dbWaitKey();

}
