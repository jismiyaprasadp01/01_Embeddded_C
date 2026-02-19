/*
Find the longest substring common to two given strings.
Input: "abcdxyz", "xyzabcd"
Output: "abcd"
*/
#include<stdio.h>
#include<string.h>
void longest_substring(char *s1,char *s2)
{
int m = strlen(s1);
    int n = strlen(s2);
    int dp[m+1][n+1];
    int i, j;

    int maxLen = 0;
    int endIndex = 0;

    for(i = 0; i <= m; i++)
        dp[i][0] = 0;

    for(j = 0; j <= n; j++)
        dp[0][j] = 0;

    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;

                if(dp[i][j] > maxLen)
                {
                    maxLen = dp[i][j];
                    endIndex = i;
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    printf("Longest substring: ");
    for(i = endIndex - maxLen; i < endIndex; i++)
        printf("%c", s1[i]);

    printf("\n");
}
int main()
{
char s1[20]="abcdxyz";
char s2[20]="xyzabcd";
longest_substring(s1,s2);
}

