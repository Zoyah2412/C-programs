#include<stdio.h>
struct student{
    char n[100];
    int roll;  
    int marks[3];
    float avg;
    float cgpa;
};
void calcgpa(struct student *s){
    s->cgpa=(s->marks[0]+s->marks[1]+s->marks[2])/30.0;
}
void calavg(struct student *s){
    s->avg=(s->marks[0]+s->marks[1]+s->marks[2])/3.0;
}
int main(){
    struct student s;
    printf("Enter name of the student :");
    scanf("%[^\n]",s.n);
    printf("Enter roll numnber of the student : ");
    scanf("%d",&s.roll);
    printf("Enter marks of the student : \n");
    for(int i=0;i<3;i++)
        scanf("%d",&s.marks[i]);
    calcgpa(&s);
    calavg(&s);
    printf("Name : %s \n",s.n);
    printf("Roll number : %d \n",s.roll);
    printf("Marks : \n");
    for(int i=0;i<3;i++)
        printf("%d\n",s.marks[i]);
    printf("CGPA : %0.2f\n",s.cgpa);
    printf("Average : %0.2f\n",s.avg);
	return 0;
}