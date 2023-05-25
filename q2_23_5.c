#include<stdio.h>
float calcgpa(int *p){
    int s=0;
    for(int i=0;i<3;i++)
        s=s+p[i];
    float c=(s/30.0);
    return c;
}
struct student{
    int roll;
    int marks[3];
    float cgpa;
};
int main(){
    struct student s;
    printf("Enter roll numnber of the student : ");
    scanf("%d",&s.roll);
    printf("Enter marks of the student : \n");
    for(int i=0;i<3;i++)
        scanf("%d",&s.marks[i]);
    s.cgpa=calcgpa(s.marks);
    printf("Roll number : %d \n",s.roll);
    printf("Marks : \n");
    for(int i=0;i<3;i++)
        printf("%d\n",s.marks[i]);
    printf("CGPA : %lf",s.cgpa);
	return 0;
}