#include <stdio.h>
//Úročení po dnech (složený úrok)
long urok(float x) {
	if (x < 10000) {
		return 0;
	}
	else {
		if (x <= 1) {
			return x * 1.15;
		}
		else {
			return urok(x - 1) * 1.15;
		}
	}
	

}

int main()
{
	printf("Slozene uroceni--------------------------- \n Castka - 10000Kc\n Urok - 15 \n");
	for (int j = 0; j < 6; j++) {
		float a = 10000;
		printf("%2d.rok %2f Kc\n", j, urok(a));
	}
}