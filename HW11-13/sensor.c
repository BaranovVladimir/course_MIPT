#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include "temp_api.h"

int main(int argc, char *argv[])
{
    int res = 0;
    int size = 0;
    sensor* info = NULL;
    int MonthFlag = 0;
    
    if (argc == 1)
    {
        printf("It's a temperature statistic programme!\n");
        printf("Use -h key for instructions.\n");
    }

    while ((res = getopt(argc, argv, "hf:m:")) != -1)
    {
        switch (res)
        {
            case 'h':
                printf("Command list:\n");
                printf("    -h, print help with keys of the programme\n");
                printf("    -f, open file wtih data. Format: -f '/path'.\n");
                //printf("    -a, add new info. Format: -a 'year,month,day,hour,minute,temperature'.\n");
                //printf("    -d, del info. Format: -d 'number of line to delete'.\n");
                printf("    -m, statistic of the selected month. Format: -m 'number of month'.\n");
                break;

            case 'f':
                char* filename = optarg;
                info = read_csv(filename, &size);
                break;
            
            case 'm':
                MonthFlag = atoi(optarg);
                break;
        }
    }

if(info != NULL)
{
    printf("===================================\n");
    Year_avg_temp(info, size);
    Year_min_temp(info, size);
    Year_max_temp(info, size);
    printf("===================================\n");

    if(MonthFlag == 0)
    {
        printf("Month   Avg   Min   Max\n");
        for(int i=1; i<13; i++)
            printf("%3d%9.2f%5d%6d\n", i, Month_avg_temp(info, size, i), Month_min_temp(info, size, i), Month_max_temp(info, size, i));
    }
    else
    {
        printf("Month   Avg   Min   Max\n");
        printf("%3d%9.2f%5d%6d\n", MonthFlag, Month_avg_temp(info, size, MonthFlag), Month_min_temp(info, size, MonthFlag), Month_max_temp(info, size, MonthFlag));
    }
}

free(info);
return 0;
}