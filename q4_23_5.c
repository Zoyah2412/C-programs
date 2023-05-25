#include<stdio.h>
struct employee{
	int empid;
	char empname[50];
	int basic_sal;
	float gross_sal;
	int dd;
	int mm;
	int yy;
};
void gross_salary(struct employee *e,int year){
int count= year - e->yy;
	if(count>30 && count<=50){
		(*e).gross_sal=((*e).basic_sal)*0.2;
		return;
	}
    else if(count>50 && count<=55){
		e->gross_sal=(e->basic_sal)*0.3;
		return;
	}
    else if(count>55){
		e->gross_sal= (a->basic_sal)*0.4;
		return;
	}
    else
		return;
}
int main (){
    struct employee arr[3];
    int y;
    printf("Enter the current year : ");
    scanf("%d",&y);
    for(int i=0;i<3;i++){
        printf("Enter the employee id : ");
        scanf("%d",&arr[i].empid);
        printf("\nEnter the employee name : ");
        scanf("%[^\n]s",&arr[i].empname);
        getchar();
        printf("\nEnter the employee's basic salary : ");
        scanf("%d",&arr[i].basic_sal);
        printf("\nEnter the date of birth of employee in form of dd/mm/yyyy : ");
        scanf("%d/%d/%d",&arr[i].dd,&arr[i].mm,&arr[i].yy);
        gross_salary((arr+i),curr_year);
        printf("\nGross salary of %s employee is %.2f\n",arr[i].empname,arr[i].gross_sal);
        }
    return 0;
}