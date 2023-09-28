#include<stdio.h>

int main (){ 
    char name[50];
    char email[100];
    int power[3];
    float unitrate=15;
    float unitrateyear=15;

    printf("ENTER YOUR NAME:\n");
    if (scanf("%s",name)!=1){
        printf("PLEASE ENTER A VALID NAME:");
        return 1;
    }

    printf("ENTER YOUR EMAIL:\n");
   if ( scanf("%s",email)!=1){
    printf("PLEASE ENTER A VALID EMAIL:");
    return 1;
   }


    printf("ENTER THE POWER  CONSUMPTION OF THREE MONTHS(like 33 45 67):\n");
    for (int i=0;i<3;i++){
       if (  scanf("%d",&power[i])!=1){
        printf("ENTER A VALID NUMBER");
        return 1;
       }

    }

    printf("MONTHLY BILL\n");
    for (int i=0;i<3;i++){
        float monthlybill=power[i]*unitrate;
        printf("%dth month is %f\n",i+1,monthlybill);
    }

    float oneyearbill=0.0;

    printf("ANNUAL BILL\n");
    for(int i=0;i<3;i++){
         oneyearbill=oneyearbill+power[i]*unitrateyear;
        
    }
    printf("the projected bill you can expect this year is %f\n",oneyearbill);
    
   
    return 0;
}
