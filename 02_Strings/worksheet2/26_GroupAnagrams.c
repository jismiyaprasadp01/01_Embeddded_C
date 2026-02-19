/*
Group a list of words so that anagrams are together.
Input: ["cat", "tac", "act", "dog"]
Output: ["cat", "tac", "act"], ["dog"]
*/
#include <stdio.h>
#include <string.h>

void sort_string(char *s)
{
    int i, j;
    char temp;

    for(i = 0; s[i]; i++)
    {
        for(j = i+1; s[j]; j++)
        {
            if(s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main()
{
    char words[][10] = {"cat", "tac", "act", "dog"};
    int n = 4;
    int used[4] = {0};

    for(int i = 0; i < n; i++)
    {
        if(used[i])
            continue;

        char key[10];
        strcpy(key, words[i]);
        sort_string(key);

        printf("[ ");

        for(int j = i; j < n; j++)
        {
            if(!used[j])
            {
                char temp[10];
                strcpy(temp, words[j]);
                sort_string(temp);

                if(strcmp(key, temp) == 0)
                {
                    printf("%s ", words[j]);
                    used[j] = 1;
                }
            }
        }

        printf("]\n");
    }
}


