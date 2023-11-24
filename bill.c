#include<stdio.h>
#include<conio.h>
main()
{
    
    double unit,cost,surcharge,bill;
	clrscr();
    printf("enter unit :");
    scanf("%lf",&unit);
     
      if(unit<=50){
        surcharge= unit*0.50;
    }else if(unit<=150){
       surcharge = (unit-50)*0.75+25;
    }else if(unit<=250){
       surcharge = (unit-150)*1.25+100;
    }else{
       surcharge= (unit-250)*1.50+225;
    }
        printf("Total = %.2lf\n",surcharge);
        cost = surcharge*20/100;
        bill = surcharge+cost;
        printf("bill = %.2lf\n",bill);
        getch();
        
}
