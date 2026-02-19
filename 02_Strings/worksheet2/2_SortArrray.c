/*
Sort an array of strings in alphabetical order. The sorted array should list strings from A to Z.
Input: {"John", "Alice", "Bob"}
Output: {"Alice", "Bob", "John"}
*/
#include<stdio.h>
#include<string.h>
void sort_array(char s[][20],int ele)
{
char temp[20];
for(int i=0;i<ele-1;i++)
        {
                for(int j=i+1;j<ele;j++)
                {
                        if(strcmp(s[i],s[j])>0)
                        {
                                strcpy(temp,s[i]);
                                strcpy(s[i],s[j]);
                                strcpy(s[j],temp);
                        }
                }
        }
        for(int i=0;i<ele;i++)
                printf("%s ",s[i]);
                printf("\n");
}
int main()
{
	char s[3][20]={"John","Alice","Bob"};
	sort_array(s,3);
}


