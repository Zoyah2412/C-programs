#include <stdio.h>
struct student{
    char n[50];
    int roll;
    struct dob{
        int d,m,y;
    } dob;
};
int calage(int d,int m,int y){
    int dif;
    if (2022==y)
        return 0;
    else{}
        dif=2022-y;
        if(m>5)
            return dif-1;
        else if (m<5)
            return dif;
        else
        {
            if (d>26)
                return dif - 1;
            else
                return dif;
        }
    }
void arrange(struct student s1, struct student s2, struct student s3, struct student *s){
    int age_s1=calage(s1.dob.d, s1.dob.m, s1.dob.y);
    int age_s2=calage(s2.dob.d, s2.dob.m, s2.dob.y);
    int age_s3=calage(s3.dob.d, s3.dob.m, s3.dob.y);
    if (age_s1>=age_s2){
        if (age_s2>=age_s3){
            s[0]=s1;
            if (age_s2==age_s3){
                if (s2.dob.m<s3.dob.m){
                    s[1]=s2;
                    s[2]=s3;
                }
                else if (s2.dob.m>s3.dob.m){
                    s[1]=s3;
                    s[2]=s2;
                }
                else{
                    if (s2.dob.d<=s3.dob.d){
                        s[1]=s2;
                        s[2]=s3;
                    }
                    else if(s2.dob.d>s3.dob.d){
                        s[1]=s3;
                        s[2]=s2;
                    }
                }
            }
            else{
                s[1]=s2;
                s[2]=s3;
            }
        }
        else{
            s[2]=s2;
            if(age_s3>=age_s1){
                if (age_s1==age_s3){
                    if(s1.dob.m<s3.dob.m){
                        s[0]=s1;
                        s[1]=s3;
                    }
                    else if(s1.dob.m>s3.dob.m){
                        s[0]=s3;
                        s[1]=s1;
                    }
                    else{
                        if (s1.dob.d<=s3.dob.d){
                            s[0]=s1;
                            s[1]=s3;
                        }
                        else{
                            s[0]=s3;
                            s[1]=s1;
                        }
                    }
                }
            }
            else{
                s[0]=s1;
                s[1]=s3;
            }
        }
    }
    else{
        if(age_s1>=age_s3){
            s[0]=s2;
            if(age_s1==age_s3){
                if(s1.dob.m<s3.dob.m){
                    s[1]=s1;
                    s[2]=s3;
                }
                else if (s1.dob.m>s3.dob.m){
                    s[1]=s3;
                    s[2]=s1;
                }
                else{
                    if (s1.dob.d < s3.dob.d){
                        s[1]=s1;
                        s[2]=s3;
                    }
                }
            }
            else{
                s[1]=s1;
                s[2]=s3;
            }
        }
        else{
            s[2]=s1;
            if(age_s2>=age_s3){
                if (s2.dob.m<s3.dob.m){
                    s[0]=s2;
                    s[1]=s3;
                }
                else if (s2.dob.m>s3.dob.m){
                    s[0]=s3;
                    s[1]=s2;
                }
                else{
                    if (s2.dob.d<=s3.dob.d){
                        s[0]=s2;
                        s[1]=s3;
                    }
                    else if (s2.dob.d>s3.dob.d){
                        s[0]=s3;
                        s[1]=s2;
                    }
                }
            }
            else{
                s[0]=s3;
                s[1]=s2;
            }
        }
    }
}
int main(){
    struct student s1,s2,s3,s[3];
    printf("Enter name of first student : ");
    getchar();
    scanf("%[^\n]s",s1.n);
    getchar();
    printf("Enter roll no of first student : ");
    scanf("%d", &s1.roll);
    printf("Enter date of birth of first student in dd/mm/yyyy format : ");
    scanf("%d/%d/%d", &s1.dob.d, &s1.dob.m, &s1.dob.y);
    printf("Enter name of second student : ");
    getchar();
    scanf("%[^\n]s", s2.n);
    getchar();
    printf("Enter roll no of second student : ");
    scanf("%d", &s2.roll);
    printf("Enter date of birth of second student in dd/mm/yyyy format : ");
    scanf("%d/%d/%d", &s2.dob.d, &s2.dob.m, &s2.dob.y);
    printf("Enter name of third student : ");
    getchar();
    scanf("%[^\n]s",s3.n);
    getchar();
    printf("Enter roll no of third student : ");
    scanf("%d", &s3.roll);
    printf("Enter date of birth of third student in dd/mm/yyyy format : ");
    scanf("%d/%d/%d", &s3.dob.d, &s3.dob.m, &s3.dob.y);
    arrange(s1, s2, s3, s);
    printf("\nDetails in decreasing order of age are: \n");
    for (int i=0;i<3;i++){
        printf("Name : %s\n",s[i].n);
        printf("Roll no. : %d\n",s[i].roll);
        printf("DOB : %d/%d/%d\n",s[i].dob.d,s[i].dob.m,s[i].dob.y);
    }
}