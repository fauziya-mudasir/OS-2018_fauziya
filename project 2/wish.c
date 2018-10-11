#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int  main(int argc, char *argv[])
{
    char* c;
    char* c1;
    char* path;
    size_t cSize =  32;
    
    c=(char*)malloc(cSize*sizeof(char));
    path=(char*)malloc(cSize*sizeof(char));
    path="/bin";
   
    if (argc == 1)
    { printf("wish> ");
    while(getline(&c,&cSize,stdin))
    {
        c1=c;
        char* arg1=strtok_r(c1," ",&c1);
        if (strcmp(arg1,"exit\n")==0)
        {
            exit(0);
        }
        else if(strcmp(arg1,"cd")== 0)
        {
            char* arg2=strtok_r(NULL," ",&c1);
           
           arg2[strlen(arg2)-1]=0;
           int dir = chdir(arg2);
           if (dir==0){

           printf("Cd was successful\n");
           

           }
           else{
               printf("Cd failed\n");
           }
           printf("wish> ");
            
        }
        else if(strcmp(arg1,"path")==0)
        {
           c1[strlen(c1)-1]=0;
           path=c1;
           printf(path);
           printf("\n");
           printf("wish> ");



        }
        else{
            char* cpath=path;
            char* new = strtok_r(cpath," ",&cpath);
            char* inst;
            if (arg1[strlen(arg1)-1] != "\n"){
                printf(arg1);
               arg1[strlen(arg1)-1]=0;
               
               while(new!= NULL){
                   strcpy(inst,new);
                   strcat(inst,"/");
                   strcat(inst,arg1);
                   printf(inst);

               } 
            }

        }


    }
    }
    return 0;
}
      