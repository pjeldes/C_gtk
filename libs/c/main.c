#include <app.h>

int main(int argc, char* argv[])
{
	for(int i = 0; i < 3; i++)
	{
		printf("hello world %d\n", i);
	}
	// print
	float area;
	float radio = 12.0;
	area_calc_circle(&area, &radio);
	List_Handler mylist;
	mylist.name = "super market";
	mylist.pages = 10;
	strcpy(mylist.lists[0],"otra");
	strcpy(mylist.lists[1],"otra");
	strcpy(mylist.lists[2],"Traer aceite");
	strcpy(mylist.lists[3],"otra");
	strcpy(mylist.lists[4],"otra");
	strcpy(mylist.lists[5],"Traer aceite");
	printf("radio = %f, area = %f\n", radio, area);
	printf("string list: %s\n", mylist.lists[0]);
	// print byte
	uint8_t options;
	options = 0xff;
	printf("byte hex %x\n",options);
	
	char* arr = "Traer aceite";
	search_in_list(&mylist, arr);
	return 0;
}
