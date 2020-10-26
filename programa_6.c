#include <stdio.h>
int main(){
	
	float a;
	printf("inserte dominador\n");
	scanf("%f",&a);
	
	float b;
	printf("inserte denominador\n");	
	scanf("%f",&b);
	if(b==0){
		printf("error\n");
		printf("fin del programa");
	}
	else{
			float division_variables =a/b;
                  
	printf("divicion de variables :%.3f",a/b);             	
	
	}
	
	 

	
	
	
	
}
