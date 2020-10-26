#include<stdio.h>
#include<math.h>
int main(){
	
	float a;
	printf("inserte valor a\na=");
    scanf("%f",&a);
  float b;
	printf("inserte valor b\nb=");
    scanf("%f",&b);
    float c;
	printf("inserte valor c\nc=");
    scanf("%f",&c);
    
	float d=b*b;
	
	float primer_raiz= (-b+sqrt(d-4*a*c))/(2*a);
	float segunda_raiz= (-b-sqrt(d-4*a*c))/(2*a);
	
	if((d-4*a*c)>0){
		printf("primer raiz:%f\n",primer_raiz);
		printf("segunda raiz:%f\n",segunda_raiz);
		printf("fin del programa");
		
	}
    else{
    	printf("error\n");
    	printf("fin del programa");
	}
  
	
	
	
   
	
	
	
}
