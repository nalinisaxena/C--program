#include<iostream.h>
#include<conio.h>


int main()
{
	int i,j=0;
	
	char str[100],temp;
	
	
	printf("enter the string");
	scanf("%s",&str);
	 i=0;
	j=strlen(str)-1;
	
	while(j>i)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
		
	}
	printf("reverese string is: %s",str);
		
	return 0;
}
