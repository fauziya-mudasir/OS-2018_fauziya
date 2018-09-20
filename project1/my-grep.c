#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int  main(int argc, char *argv[])
{
    FILE *fp;
    char c[1000];
    if (argc == 1)
    {
        printf("my-grep:searchterm{file...]\n");
        exit(1);
    }
    if (argc > 2)
    {
        for (int i = 2; i < argc; i++)
        {

            fp = fopen(argv[i], "r");

            if (fp == NULL)
            {
                printf("my-grep: cannot open file\n");
                exit(1);
            }
            while (!feof(fp))
            {
                if (fgets(c, 1000, fp))
                    if (strstr(c, argv[1]) != NULL)
                    {
                        printf("%s\n", c);
                    }
                    else
                    {
                        continue;
                    }
            }
            fclose(fp);
        
}}else{
           while (!feof(stdin))
           { if (fgets(c, 1000, stdin))
                    if (strstr(c, argv[1]) != NULL)
                    {
                        printf("%s\n", c);
                    }
                    else
                    {
                        continue;
                    }
                    } 
        }
        return 0;
        }

