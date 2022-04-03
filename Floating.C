//Get a number from user &print it on console
#include<stdio.h>
void main() 
{
    float num=  getANumberFromUser();
    printf("The num is%f",num);
}
int getANumberFromUser() 
{
    float i;
    scanf("%f,",&i);
    return i;
}
