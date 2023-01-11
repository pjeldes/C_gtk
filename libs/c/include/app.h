 #ifndef APP_H
 #define APP_H
 // All libs add
 #include <stdio.h>
 #include <string.h>
 #include <stdbool.h>
 
// Macros
#define PI							3.1416
#define MAX_LISTS_TAM				30


typedef struct
{
	char* name;
	int pages;
	char lists[MAX_LISTS_TAM][500];
}List_Handler;

typedef unsigned char uint8_t;
 
void area_calc_circle(float* area, float* radio);

void search_in_list(List_Handler* list, char* string);
 
 #endif
