#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct BioData{ //Structure Definition
	int age;
	char name[10];
	struct BioData *ptr;
};
int main()
{
	struct BioData Human1;
	struct BioData Human2;
	Human1.age = 18;
	strcpy(Human1.name, "Zoyah");
	printf("%d\n%s\n", Human1.age, Human1.name);
	Human2.age->Human1.age
	free(Human2);
	return 0;
}