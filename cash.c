#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    int quarters,dimes,nickels,pennies,cents,TotalCoins;
    quarters=dimes=nickels=pennies=0;
    float change;
    printf("Change Owed:");
    scanf("%f",&change);
    cents=round(change*100);
    while(cents>=25){
        cents-=25;
        quarters++;
    }
    while  (cents>=10 && cents<25){
        cents-=10;
        dimes++;
    }
    while (cents>=5 && cents<10)
    {
        cents-=5;
        nickels++;
    }
    while (cents<5 && cents!=0)
    {
        cents--;
        pennies++;
    }
    TotalCoins=quarters+dimes+nickels+pennies;
    printf("%d\n",TotalCoins); 

}