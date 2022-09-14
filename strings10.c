#include<stdio.h>
int main()
{
	char x[20][50],ch;
	int vc=0,cc=0,dc=0,spc=0,wc=0,lc=0,symc=0,i,j;
	
	printf("Enter lines of text\n");
	for(i=0;;i++)
	{
		gets(x[i]);
		if(x[i][0]=='\0')
			break;
	}
	
	lc=i; //assigning number of lines
	
	for(i=0;i<lc;i++)
	{
	
		for(j=0;x[i][j]!='\0';j++)
		{
			char ch=x[i][j];
			
			if(ch>='A' && ch<='Z')
				ch=ch+32;
			if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
				vc++;
			else if(ch>='b' && ch<='z')
				cc++;
			else if(ch>'0' && ch<='9')
				dc++;
			else if(" ")
				spc++;
			else 
				symc++;
			
			if(x[i][j]==' ' && x[i][j+1]!=' ' || j==0)
				wc++;
		}
	}
	
	if(vc>0)
		printf("Vowels %i\n",vc);
	if(cc>0)
		printf("Consonents %i\n",cc);
	if(dc>0)
		printf("Digits %i\n",dc);
	if(spc>=0)
		printf("Spaces %i\n",spc);
	if(symc>0)
		printf("Symbols %i\n",symc);
	if(wc>0)
		printf("Words %i\n",wc);
	if(lc>0)
		printf("Lines %i",lc);
	
	return 0;
}

