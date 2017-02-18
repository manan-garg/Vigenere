#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int count=0,i;
    char argv[50][50],s[50],ch;
    int k=0,w,o,size,j;
    clrscr();
    printf("\nEnter the key=");
    gets(argv[1]);
    {
	for(i=0;argv[1][i]!='\0';++i)
	{
	    if((argv[1][i]>='a'&&argv[1][i]<='z')||(argv[1][i]>='A'&&argv[1][i]<='Z'))
	    count=0;
	    else
	    count=1;
	}
	if(count==1)
	{
	    printf("Error\n");
	    return 1;
	}
    }
    printf("plaintext:");
    gets(s);
    size=strlen(argv[1]);

    printf("ciphertext:");
    for(j=0;s[j]!='\0';++j)
    {
      if((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z'))
       {if(k==size)
       k=0;
       if(argv[1][k]>='A'&&argv[1][k]<='Z')
       w=argv[1][k]-'A';
       else
      if(argv[1][k]>='a'&&argv[1][k]<='z')
       w=argv[1][k]-'a';
       if(s[j]>='A'&&s[j]<='Z')
       o=s[j]-'A';
       else
       if(s[j]>='a'&&s[j]<='z')
       o=s[j]-'a';
       if((o+w)>26)
       {
	   w=(o+w)-26;
	     if(s[j]>='a'&&s[j]<='z')
	    ch=97+w;
	    else
	      if(s[j]>='A'&&s[j]<='Z')
	   ch=65+w;
	   printf("%c",ch);
       }
       else
       {
	   ch=s[j]+w;
	   printf("%c",ch);
       }
       ++k;
       }
       else
       printf("%c",s[j]);

    }
    printf("\n");
    getch();
    return 0;
}