#include <stdio.h>
//Display stars in pattern ques 1
int main()
{
    int i,j,k=1,l,m;
	for (i=1;i<=5;i++)
	{
		if(i%2!=0)
		{
		     for(j=1;j<=5-i+1;j++,k++)
	         {
			     printf("%d\t",k);
             }
		printf("\n");
	    }
	    else
	    {
	    	 k=k+5-i;
			 for(j=5;j>=i;j--)
	    	 {
	    	 	 printf("%d\t",k);
	    	 	 k--;
			 }
			
		}
		printf("\n");
    }
    
	return 0;
}