#include<stdio.h>

main(){
	
	double unit,s,cost,bill;
	
	printf("enter unit :");
	scanf("%lf",&unit);
	
	if(unit<=50){
		s=unit*0.50;
	}else if(unit<=150){
		s=(unit-50)*0.75+25;
	}else if(unit<=250){
		s=(unit-150)*1.25+100;
	}else {
		s=(unit-250)*1.50+225;
	}
	printf("total = %.2lf\n",s);
	
	cost=s*20/100;
	bill=s+cost;
	
	printf("bill = %.2lf\n",bill);
}
