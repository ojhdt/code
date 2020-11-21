#include <stdio.h>
#define N 999
int main(void)
{
    char str[N];
    char str_result[N];
    int i, j = 0, is_x = 0;
    scanf("%s", &str);
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] != '*') is_x = 1;
        if(str[i] == '*' && is_x == 1)
        {}
        else
        {
            str_result[j++] = str[i];
        }
    }
    str_result[j] = '\0';
    for(i = 0; str_result[i] !='\0'; i++)
    {
        printf("%c", str_result[i]);
    }
}

/*高阶玩法
void delete_char(char str[],char target){
	int i,j;
	for(i=j=0;str[i]!='\0';i++){
		if(str[i]!=target){
			str[j++]=str[i];
		}
	}
	str[j]='\0';
}
*/