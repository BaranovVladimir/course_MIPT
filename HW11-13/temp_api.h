#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temperature;
} sensor;

sensor* read_csv(const char* filename, int* size);
void add_record(sensor** info, int* size, sensor record);
void changeIJ(sensor info[], int i, int j);
void SortByTemperature(sensor info[], int n);
void AddRecord(sensor info[], int size, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t temperature);
void DelRecord(sensor** info, int *size, int indexToDelete);
int AddInfo(sensor info[]);
void print(sensor info[],int size);

float Month_avg_temp(const sensor info[], int size, int month);
int Month_min_temp(const sensor info[], int size, int month);
int Month_max_temp(const sensor info[], int size, int month);
void Year_avg_temp(const sensor info[], int size);
void Year_min_temp(const sensor info[], int size);
void Year_max_temp(const sensor info[], int size);
