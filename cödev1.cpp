#include<stdio.h>
int main(){
	
int a,b,c ;

printf("Degisecek olan birinci sayiyi giriniz:");
scanf("%d/n",&a);

printf("Degisecek olan ikinci sayiyi giriniz:");
scanf("%d/n",&b);
c=a ;
a=b ;
b=c ;

printf("Artik ilk sayi: %d ",a);
printf("\nArtik ikinci sayi: %d ",b);
	
	return 0;
}