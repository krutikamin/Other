#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int main(int argc, char *argv[])
{
	uint32_t virtual_address;
	if(argc != 2)
	{
		printf("USAGE: ./a.out [VIRTUAL ADDRESS]\n");
		return 0;
	}
	else
	{
		sscanf(argv[1], "%"SCNd32, &virtual_address);
		//virtual_address = (uint32_t)argv[1];
		printf("The address %d contains:\n", virtual_address);
		printf("page number = %d\n", (virtual_address / 4096));
		printf("offset = %d\n", (virtual_address % 4096));
	}
	return 0;
}
