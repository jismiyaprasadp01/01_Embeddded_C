/*Program: Count total number of words in a string
Input: "C programming is fun"
Output: 4
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int c=0,i,j;
	printf("Enter the string\n");
	scanf("%[^\n]", s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ' || s[i+1]=='\0')
			c++;
}
		printf("%d\n",c);
	}
