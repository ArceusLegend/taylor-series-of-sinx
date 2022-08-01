#include<stdio.h>
#include<math.h>

double sintaylor(double x) {
    double value = x;
    double sum = x;
    int i;
    
    for (i = 0; i < 100; i++) {
        value = -value*x*x/(2*i+2)/(2*i+3);
        sum += value;
    }
    return sum;
}

int main(){
	double deg, rad, sum;
	printf("Enter degrees: ");
	scanf("%lf", &deg);
	rad = deg * M_PI/180;
	sum = sintaylor(rad);
	printf("%lf", sum);
}
