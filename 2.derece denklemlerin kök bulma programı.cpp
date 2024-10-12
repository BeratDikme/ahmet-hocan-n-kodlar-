#include <stdio.h>
#include <math.h>
 int main(){
 	float a,b,c,x1,x2,delta;
 	printf("Denklemdeki a,b,c katsayilarini giriniz.");
    scanf("%f%f%f",&a,&b,&c);
    
    delta=b*b-4*a*c;
    if(delta<0){
    printf("Denklemin reel çozumu yoktur.");
	}
	else if ("delta>0"){
		x1=(-b+sqrt(delta))/(2*a);
	    x2=(-b-sqrt(delta))/(2*a);
	    printf("Denklemin reel kokleri/n");
	    printf("x1=%.2f/n",x1);
	    printf("x2=%.2f/n",x2);
	}
 	else{
 		x1=x2=(-b)/(2*a);
 		printf("Cakisan reel kokler/n");
 		printf("x1=x2=%.f/n",x1);
 		
	 }
 	
    return 0;
 }
