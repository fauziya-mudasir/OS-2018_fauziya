#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
FILE *fp;
char c[100];
fp =fopen(argv[1],"r");
if(argv[1]==NULL){
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
fclose(fp);
}

