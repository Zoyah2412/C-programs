#include <stdio.h>
int main(){
    int f,n,y;
    printf("Enter first day of the year : ");
    scanf("%d",&f);
    printf("Enter the year : ");
    scanf("%d",&y);
    if (y%100==0){
        if(y%400==0){
            for(int i=1;i<=12;i++){
                if (i>=1)
                    n=31;
			    if (i>=2)
                    n=29;
			    if (i>=3)
				    n=31;
                if (i>=4)
				    n=30;
			    if (i>=5)
                    n=31;
			    if (i>=6)
                   n=30;
		        if (i>=7)
                   n=31;
			    if (i>=8)
                    n=31;
			    if (i>=9)
                    n=30;
			    if (i>=10)
                    n=31;
			    if (i>=11)
                    n=30;
			    if (i>=12)
                    n=31;
				switch(i){
			        case 1:printf("\t\tJanuary\n");
				           break;
			        case 2:printf("\t\tFebuary\n");
				           break;
			        case 3:printf("\t\tMarch\n");
				           break;
			        case 4:printf("\t\tApril\n");
				           break;
			        case 5:printf("\t\tMay\n");
				           break;
			        case 6:printf("\t\tJune\n");
				           break;
			        case 7:printf("\t\tJuly\n");
				           break;
			        case 8:printf("\t\tAugust\n");
				           break;
			        case 9:printf("\t\tSeptember\n");
				           break;
			        case 10:printf("\t\tOctober\n");
				           break;
			        case 11:printf("\t\tNovember\n");
				           break;
			        case 12:printf("\t\tDecember\n");
				            break;
		        }
                printf("S\tM\tT\tW\tT\tF\tS\t\n");
                f=f%7;
                if (f==0)
                    f=7;
                for(int i=1;i<f;i++)
                    printf("  \t");
                for(int i=1;i<=n;i++){
                    printf("%d\t",i);
                    if((f+i-1)%7==0)
                     printf("\n");
                }
                f=f+(n%7);
                printf("\n");
            }
        }
        else{
            for(int i=1;i<=12;i++){
                if (i>=1)
                    n=31;
			    if (i>=2)
                    n=28;
			    if (i>=3)
				    n=31;
                if (i>=4)
				    n=30;
			    if (i>=5)
                    n=31;
			    if (i>=6)
                   n=30;
		        if (i>=7)
                   n=31;
			    if (i>=8)
                   n=31;
			    if (i>=9)
                    n=30;
			    if (i>=10)
                    n=31;
			    if (i>=11)
                    n=30;
			    if (i>=12)
                    n=31;
				switch(i){
			        case 1:printf("\t\tJanuary\n");
				           break;
			        case 2:printf("\t\tFebuary\n");
				           break;
			        case 3:printf("\t\tMarch\n");
				           break;
			        case 4:printf("\t\tApril\n");
				           break;
			        case 5:printf("\t\tMay\n");
				           break;
			        case 6:printf("\t\tJune\n");
				           break;
			        case 7:printf("\t\tJuly\n");
				           break;
			        case 8:printf("\t\tAugust\n");
				           break;
			        case 9:printf("\t\tSeptember\n");
				           break;
			        case 10:printf("\t\tOctober\n");
				           break;
			        case 11:printf("\t\tNovember\n");
				           break;
			        case 12:printf("\t\tDecember\n");
				            break;
		        }
                printf("S\tM\tT\tW\tT\tF\tS\t\n");
                f=f%7;
                if (f==0)
                    f=7;
                for(int i=1;i<f;i++)
                    printf("  \t");
                for(int i=1;i<=n;i++){
                    printf("%d\t",i);
                    if((f+i-1)%7==0)
                     printf("\n");
                }
                f=f+(n%7);
                printf("\n");
            }
        }
    }
    else{
        if(y%4==0){
            for(int i=1;i<=12;i++){
                if (i>=1)
                    n=31;
			    if (i>=2)
                    n=29;
			    if (i>=3)
				    n=31;
                if (i>=4)
				    n=30;
			    if (i>=5)
                    n=31;
			    if (i>=6)
                   n=30;
		        if (i>=7)
                   n=31;
			    if (i>=8)
                   n=31;
			    if (i>=9)
                   n=30;
			    if (i>=10)
                    n=31;
			    if (i>=11)
                    n=30;
			    if (i>=12)
                    n=31;
				switch(i){
			        case 1:printf("\t\tJanuary\n");
				           break;
			        case 2:printf("\t\tFebuary\n");
				           break;
			        case 3:printf("\t\tMarch\n");
				           break;
			        case 4:printf("\t\tApril\n");
				           break;
			        case 5:printf("\t\tMay\n");
				           break;
			        case 6:printf("\t\tJune\n");
				           break;
			        case 7:printf("\t\tJuly\n");
				           break;
			        case 8:printf("\t\tAugust\n");
				           break;
			        case 9:printf("\t\tSeptember\n");
				           break;
			        case 10:printf("\t\tOctober\n");
				           break;
			        case 11:printf("\t\tNovember\n");
				           break;
			        case 12:printf("\t\tDecember\n");
				            break;
		        }
                printf("S\tM\tT\tW\tT\tF\tS\t\n");
                f=f%7;
                if (f==0)
                    f=7;
                for(int i=1;i<f;i++)
                    printf("  \t");
                for(int i=1;i<=n;i++){
                    printf("%d\t",i);
                    if((f+i-1)%7==0)
                     printf("\n");
                }
                f=f+(n%7);
                printf("\n");
            }
        }
        else{
            for(int i=1;i<=12;i++){
                if (i>=1)
                    n=31;
			    if (i>=2)
                    n=28;
			    if (i>=3)
				    n=31;
                if (i>=4)
				    n=30;
			    if (i>=5)
                    n=31;
			    if (i>=6)
                   n=30;
		        if (i>=7)
                   n=31;
			    if (i>=8)
                   n=31;
			    if (i>=9)
                   n=30;
			    if (i>=10)
                    n=31;
			    if (i>=11)
                    n=30;
			    if (i>=12)
                    n=31;
				switch(i){
			        case 1:printf("\t\tJanuary\n");
				           break;
			        case 2:printf("\t\tFebuary\n");
				           break;
			        case 3:printf("\t\tMarch\n");
				           break;
			        case 4:printf("\t\tApril\n");
				           break;
			        case 5:printf("\t\tMay\n");
				           break;
			        case 6:printf("\t\tJune\n");
				           break;
			        case 7:printf("\t\tJuly\n");
				           break;
			        case 8:printf("\t\tAugust\n");
				           break;
			        case 9:printf("\t\tSeptember\n");
				           break;
			        case 10:printf("\t\tOctober\n");
				           break;
			        case 11:printf("\t\tNovember\n");
				           break;
			        case 12:printf("\t\tDecember\n");
				            break;
		        }
                printf("S\tM\tT\tW\tT\tF\tS\t\n");
                f=f%7;
                if (f==0)
                    f=7;
                for(int i=1;i<f;i++)
                    printf("  \t");
                for(int i=1;i<=n;i++){
                    printf("%d\t",i);
                    if((f+i-1)%7==0)
                     printf("\n");
                }
                f=f+(n%7);
                printf("\n");
            }
        }
    }
    return 0;
}
