#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{

FILE *fp;
char c[100];
for(int i=1;i<argc;i++)

{

fp =fopen(argv[i],"r");

if(argv[i]==NULL){
	return(0);
}

if (fp == NULL) {
    printf("No such file or directory\n");
    exit(1);
}

while(!feof(fp)){
if (fgets(c,100,fp)){
printf("%s\n",c);
}
}

}
fclose(fp);
}

