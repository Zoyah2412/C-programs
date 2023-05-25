#include<stdio.h>
struct student {
    int roll;
    int marks[3];
    float avg;
    float cgpa;
    };
float calcgpa (struct student s){
    float c=(s.marks[0]+s.marks[1]+ s.marks[2])/30.0;
    return c;
}
float calavg (struct student s){
    float a=(s.marks[0]+s.marks[1]+s.marks[2])/3.0;
    return a;
}    
int main(){
    struct student s;
    printf("Enter roll number of the student : ");
    scanf("%d", &s.roll);
    printf("Enter marks of the student : ");
    for(int i=0;i<3;i++)
        scanf("%d",&s.marks[i]); 
    s.cgpa=calcgpa(s);
    s.avg=calavg(s);
    printf("Roll number : %d \n",s.roll);
    printf("Marks : \n");
    for(int i=0;i<3;i++)
        printf("%d\n",s.marks[i]);
    printf("CGPA : %0.2f\n",s.cgpa);
    printf("Average : %0.2f\n",s.avg);
    return 0;
}