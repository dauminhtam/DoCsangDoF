#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[])


{
	float doC, doF;
	
	printf ("Nhap gia tri doC:");
	scanf ("%f",&doC);
	
	doF = 32 + doC*1.8;
	printf ("Gia tri do F tuong ung la: %f", doF);
	return 0;
}
