#include<stdio.h>
struct student{
    char n[100];
    int roll;
    int age;
    float cgpa;
};
int main(){
    struct student s;
    printf("Enter name of the student :");
    scanf("%[^\n]",s.n);
    printf("Enter roll numnber of the student :");
    scanf("%d",&s.roll);
    printf("Enter age of the student :");
    scanf("%d",&s.age);
    printf("Enter cgpa of the student :");
    scanf("%f",&s.cgpa);
    printf("\nName : %s\nRoll number : %d \nAge : %d \nCGPA : %f",s.n,s.roll,s.age,s.cgpa);
	return 0;
}