#include "temp_api.h"
#include <stdio.h>

sensor* read_csv(const char* filename, int* size) 
{
    sensor* info = NULL;
    char line[256];
    *size = 0;
    int line_number = 0;
    FILE* CSVfile;
    CSVfile = fopen(filename, "r");

    if (!CSVfile)
    {
        printf("Error occured while opening file\n");
        return NULL;
    }

    while (fgets(line, sizeof(line), CSVfile)) 
    {
        line_number++;
        sensor tmp;
        if (sscanf(line, "%d;%d;%d;%d;%d;%d", &tmp.year, &tmp.month, &tmp.day, &tmp.hour, &tmp.minute, &tmp.temperature) == 6
        && (tmp.year > 1900 && tmp.year < 2100)
        && (tmp.month > 0 && tmp.month < 13)
        && (tmp.day > 0 && tmp.day < 32)
        && (tmp.hour >= 0 && tmp.hour < 24)
        && (tmp.minute >= 0 && tmp.minute < 60)
        && (tmp.temperature > -99 && tmp.temperature < 99))
            add_record(&info, size, tmp);
        else 
            printf("uncorrect info in line %d\n", line_number);
    }
    fclose(CSVfile);
    return info;
}

void add_record(sensor** info, int* size, sensor record) 
{
    *info = realloc(*info, (*size + 1) * sizeof(sensor));
    (*info)[*size] = record;
    (*size)++;
}

void changeIJ(sensor info[], int i, int j)
{
    sensor temp;
    temp = info[i];
    info[i] = info[j];
    info[j] = temp;
}

void SortByTemperature(sensor info[], int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            if (info[i].temperature >= info[j].temperature)
                changeIJ(info, i, j);
}

void AddRecord(sensor info[], int size, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t temperature)
{
    info[size].year = year;
    info[size].month = month;
    info[size].day = day;
    info[size].hour = hour;
    info[size].minute = minute;
    info[size].temperature = temperature;
}

int AddInfo(sensor info[])
{
    int counter = 0;
    AddRecord(info, counter++, 2021, 9, 16, 20, 10, 9);
    AddRecord(info, counter++, 2021, 9, 2, 12, 8, -9);
    AddRecord(info, counter++, 2021, 1, 7, 17, 1, 8);
    AddRecord(info, counter++, 2021, 9, 5, 4, 33, 1);
    return counter;
}

void print(sensor info[], int size)
{
    printf("===================================\n");
    for (int i = 0; i < size; i++)
        printf("%d %04d-%02d-%02d-%02d-%02d t=%3d\n",i+1,
               info[i].year,
               info[i].month,
               info[i].day,
               info[i].hour,
               info[i].minute,
               info[i].temperature);
    printf("===================================\n");
}

void DelRecord(sensor** info, int *size, int indexToDelete)
{
    if (indexToDelete == -1)
    {
        printf("Element didn't find.\n");
    }
    else 
    {
        for (int i = indexToDelete; i < *size - 1; ++i)
        {
            (*info[i]) = (*info)[i+1];
        }
        *(size)--;
    }
}

float Month_avg_temp(const sensor info[], int size, int month)
{
    int res = 0, count = 0;

    for (int i = 0; i < size; i++)
    {
        if (info[i].month == month)
        {
            res += info[i].temperature;
            count++;
        }
    }

    if (count > 0)
        return (float)res / count;
    else
        printf("didn't find");
}

int Month_min_temp(const sensor info[], int size, int month)
{
    int res = 100, count = 0;

    for (int i = 0; i < size; i++)
    {
        if (info[i].month == month)
        {
            if (info[i].temperature < res)
            {
                res = info[i].temperature;
                count++;
            }
        }
    }

    if (count > 0)
        return res;
    else
        printf("didn't find");
}

int Month_max_temp(const sensor info[], int size, int month)
{
    int res = -100, count = 0;

    for (int i = 0; i < size; i++)
    {
        if (info[i].month == month)
        {
            if (info[i].temperature > res)
            {
                res = info[i].temperature;
                count++;
            }
        }
    }

    if (count > 0)
        return res;
    else
        printf("didn't find");
}

void Year_avg_temp(const sensor info[], int size)
{
    int res = 0, count = 0;

    for (int i = 0; i < size; i++)
    {
        res += info[i].temperature;
        count++;
    }

    if (count > 0)
        printf("Average temp for year: %.2f\n", (float)res / count);
    else
        printf("Data didn't find");
}

void Year_min_temp(const sensor info[], int size)
{
    int res = 100, count = 0;

    for (int i = 0; i < size; i++)
    {
        if (info[i].temperature < res)
        {
            res = info[i].temperature;
            count++;
        }
    }

    if (count > 0)
        printf("Min temp for year: %d\n", res);
    else
        printf("Data didn't find\n");
}

void Year_max_temp(const sensor info[], int size)
{
    int res = -100, count = 0;

    for (int i = 0; i < size; i++)
    {
        if (info[i].temperature > res)
        {
            res = info[i].temperature;
            count++;
        }
    }

    if (count > 0)
        printf("Max temp for year: %d\n", res);
    else
        printf("Data didn't find\n");
}