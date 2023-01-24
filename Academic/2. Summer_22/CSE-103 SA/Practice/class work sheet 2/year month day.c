#include <stdio.h>
int main(){
int n, year, month, week, days;
scanf("%d", &n);

year = n/365;
n = n%365;
month = n/30;
n = n%30;
week = n/7;
n = n%7;
days = n;
printf("Year: %d, Month: %d Week: %d, Days: %d", year, month, week, days);

}
