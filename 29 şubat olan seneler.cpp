#include<stdio.h>
int main(){
short yil;
printf("Bir yil degeri giriniz.");
scanf("%d",&yil);
if(((yil&4==0)&&(yil%100!=0))||(yil%400==0)){
printf("Artik yil");
}
 else{
	printf("Artik yil degil");
}
return 0;
}
