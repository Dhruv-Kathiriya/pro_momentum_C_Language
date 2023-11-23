#include<stdio.h>

main(){
	
	double u,s,c,bill;
	
	printf("enter unit :");
	scanf("%lf",&u);
	
	if(u<=50){
		s=u*0.50;
	}else if(u<=150){
		s=(u-50)*0.75+25;
	}else if(u<=250){
		s=(u-150)*1.25+100;
	}else {
		s=(u-250)*1.50+225;
	}
	printf("total = %.2lf\n",s);
	
	c=s*20/100;
	bill=s+c;
	
	printf("bill = %.2lf\n",bill);
}
