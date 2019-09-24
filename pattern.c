#include<stdio.h>
#include<string.h>
void main()
{	int p;	
	char str[20],pat[10];
	printf(" enter the string \n");
	scanf("%s",str);
	printf(" enter the pattern \n");
	scanf("%s",pat);
	p=nfind(str,pat);
	if(p==-1)
	{
		printf(" pattern not found\n");
	}
	else
	{
		printf(" pattern found at positon at %d",p+1);
	}
}

int nfind(char *s, char *p)
{
	int i,j,start=0;
	int lasts=strlen(s)-1;
	int lastp=strlen(p)-1;
	int endmatch=lastp;
	
	for(i=0;endmatch<=lasts;endmatch++,start++)
		{
			if(s[endmatch]==p[endmatch])
			{
				for(j=0,i=start;j<lastp&&s[i]==p[j];i++,j++);
					if(j==lastp)
					return start;
			}
		
		}
	return -1;
}
