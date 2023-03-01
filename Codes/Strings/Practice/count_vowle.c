#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[40];  
    int i,vow=0,con=0;
 
    printf("Enter the string : ");
    scanf("%s",&s);
     
    for(i=0;s[i];i++)  
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122)) // for small || for capital (ASCII value)
    	{
		
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vow++;
            else
             con++;
        }
 
 	}
 	printf("vowels = %d\n",vow);
    printf("consonants = %d\n",con);
    return 0;
}
