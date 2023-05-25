#include <stdio.h>
int main(){
	char str[100];
	printf("Enter a name having three words : ");
    getchar();
	scanf("%[^\n]s",str);
    getchar();
	int str1[2];
	int a=0,b=0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' ' && str[i+1]!=' '){
			str[a]=i+1;
			a++;
		}else if(str[i]>='A' && str[i]<='Z')
			str[i]+=32;
		b++;
	}
	str[0]-=32;
	for(int j=0;j<a;j++)
		str[str1[j]]-=32;
	printf("\nString with first alphabet of each word in uppercase : ");
	for(int i=0;str[i]!='\0';i++)
		printf("%c",str[i]);
	int c=str1[1];
	int str2[b];
	for(int i=0;i<b;i++)
		str2[i]=str[i];
	for(int i=0;i<c;i++){
		if(str2[i]>='a' && str2[i]<='z')
			str2[i]=' ';
		else if(str2[i]>='A' && str2[i]<='Z')
			str2[i+1]='.';
	}
	printf("\nArray in the form A. B. CDEF :");
	for(int i=0;i<b;i++)
		printf("%c",str2[i]);
	int d=str1[0];
	for(int i=0;i<d;i++){
		if(str[i]!=' ' && str[i]>='a')
			str[i]-=32;
	}
	for(int i=d;i<b;i++){
		if(str[i]>='a' && str[i]<='z')
			str[i]=' ';
        else if(str[i]>='A' && str[i]<='Z'){
			str[i]+=32;
			str[i+1]='.';
		}
	}
	printf("\nArray in the form ABCD E. F. : ");
	for(int i=0;str[i]!='\0';i++){
		printf("%c",str[i]);
	}
	return 0;
}
