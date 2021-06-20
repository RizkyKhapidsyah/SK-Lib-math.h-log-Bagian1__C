/* log example */
#include <stdio.h>      /* printf */
#include <math.h>       /* log */
#include <conio.h>

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

int main(){
	double param, result;
	param = 5.5;
	result = log(param);
	printf("log(%f) = %f\n", param, result);
	_getch();
	return 0;
}