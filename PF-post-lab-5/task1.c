#include <stdio.h>

int main() {
int temp;
printf("Enter the temperature in Celsius: ");
scanf("%d",&temp);

if(temp<15){
printf("Cold");}

else if(temp>=15 && temp <= 30){
printf("Normal");}

else printf("Hot");
}