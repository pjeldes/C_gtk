#include <app.h>

void area_calc_circle(float* area, float* radio)
{
 	*area = PI*(*radio)*(*radio);
}

// esto es in país de chile joder.

void search_in_list(List_Handler* list, char* string)
{
	bool COMPARE = false;
	for (int i = 0; i < MAX_LISTS_TAM; i++)
	{
		char* str = list->lists[i];
		COMPARE = strcmp(str,string);
		if (COMPARE == false)
		{
			COMPARE = true;
			break;
		}
		printf("COMPARE: %d\n",COMPARE);
	}
	
	if (COMPARE == true)
	{
		printf("Se ha encontrado la cadena en la lista!\n");
	}

}

void append_in_list(List_Handler* list, char* string)
{
	bool COMPARE = false;
	for (int i = 0; i< MAX_LISTS_TAM; i++)
	{
		strcmp( "default",list->lists[i] );
		
	}
} 
