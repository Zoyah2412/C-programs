#include <stdio.h>
int main(){
    int dd,m,y,td,jan1,d=0,day;
    printf("Enter a date in the form dd/mm/yyyy : ");
    scanf("%d/%d/%d",&dd,&m,&y);
    printf("Enter what day is January 1 : ");
	scanf("%d",&jan1);
	if(m>=1){
		d=0;
	}if(m>=2){
		d=d+31;
	}if(m>=3){
		if (y%100==0){
        	if(y%400==0)
            	d=d+29;
        	else
				d=d+28;
    		}	
    	else{
        	if(y%4==0)
            	d=d+29;
        	else
            	d=d+28;
        	}
	}if(m>=4){
		d=d+31;
	}if(m>=5){
		d=d+30;
	}if(m>=6){
		d=d+31;
	}if(m>=7){
		d=d+30;
	}if(m>=8){
		d=d+31;
	}if(m>=9){
		d=d+31;
	}if(m>=10){
		d=d+30;
	}if(m>=11){
		d=d+31;
	}if(m>=12){
		d=d+30;
	}
	td=d+dd;
	day=td%7;
	day=(jan1+day)-1;
	switch(day){
		case 1:
		case 8:printf("Sunday");
		break;
		case 2:
		case 9:printf("Monday");
		break;
		case 3:
		case 10:printf("Tuesday");
		break;
		case 4:
		case 11:printf("Wednesday");
		break;
		case 5:
		case 12:printf("Thursday");
		break;
		case 6:printf("Friday");
		break;
		case 7:printf("Saturday");
		break;
	}
}