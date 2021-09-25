// Anilkumar(2020UCD2101)
#include<stdio.h>
int main(){
    float temp_f;
    // float temp_c;
	// printf("input a temperature(in centigrate):");
	// scanf("%f",&temp_c);
    for(float i=300;i>=0;i--){
	temp_f=((9.0/5.0)*i)+32.0;
	printf("%.2f centigrate to %.2f degrees Fahrenheit.\n",i,temp_f);

    }
	return 0;
}
