#include <stdio.h>
#include "threads/palloc.h"

void alloctest(void)
{
    palloc_get_status(0);

    size_t page = palloc_get_multiple(0, 4);

    printf("4 page allocate\n");
    palloc_get_status(0);

    palloc_free_multiple(page, 3);

    palloc_get_status(0);

    size_t page2 = palloc_get_multiple(0, 4);

    printf("4 page allocate\n");
    palloc_get_status(0);

    palloc_free_multiple(page2, 2);

    palloc_get_status(0);

    size_t page3 = palloc_get_multiple(0, 1);

    printf("1 page allocate\n");
    palloc_get_status(0);



//	if(pallocator == 1)
//	{
//		size_t i;
//		char* dynamicmem[11];
//
//		for (i=0; i<3; i++) {
//			dynamicmem[i] = (char *) malloc (145000);
//			memset (dynamicmem[i], 0x00, 145000);
//			printf ("할당 중 : \n");
//			palloc_get_status (0);
//		}
//
//		thread_sleep (100);
//
//		for (i=0; i<3; i++) {
//			free(dynamicmem[i]);
//			printf ("Free 중 : \n");
//			palloc_get_status (0);
//		}
//
//		for (i=6; i<9; i++) {
//			dynamicmem[i] = (char *) malloc (145000);
//			memset (dynamicmem[i], 0x00, 145000);
//			printf ("할당 중 : \n");
//			palloc_get_status (0);
//		}
//
//		for (i=6; i<9; i++) {
//			free(dynamicmem[i]);
//			printf ("Free 중 : \n");
//			palloc_get_status (0);
//		}
//	}
//
//	if(pallocator == 2)
//	{
//		size_t i;
//		char* dynamicmem[11];
//
//		dynamicmem[0] = (char *) malloc (110000);
//		memset (dynamicmem[0], 0x00, 110000);
//
//		dynamicmem[1] = (char *) malloc (200000);
//		memset (dynamicmem[1], 0x00, 200000);
//
//		dynamicmem[2] = (char *) malloc (300000);
//		memset (dynamicmem[2], 0x00, 300000);
//
//		dynamicmem[3] = (char *) malloc (140000);
//		memset (dynamicmem[3], 0x00, 140000);
//
//		dynamicmem[4] = (char *) malloc (180000);
//		memset (dynamicmem[4], 0x00, 180000);
//
//		dynamicmem[5] = (char *) malloc (220000);
//		memset (dynamicmem[5], 0x00, 220000);
//
//		printf ("할당 후 : \n");
//		palloc_get_status (0);
//
//		thread_sleep (100);
//
//		for (i=2; i<6; i=i*2) {
//			free(dynamicmem[i]);
//			printf ("Free 중 : \n");
//			palloc_get_status (0);
//		}
//
//		for (i=6; i<10; i++) {
//			dynamicmem[i] = (char *) malloc (140000);
//			memset (dynamicmem[i], 0x00, 140000);
//			printf ("할당 중 : \n");
//			palloc_get_status (0);
//		}
//	}
//
//	if(pallocator == 3)
//	{
//		size_t i;
//		char* dynamicmem[11];
//
//		dynamicmem[0] = (char *) malloc (50000);
//		memset (dynamicmem[0], 0x00, 50000);
//
//		dynamicmem[1] = (char *) malloc (300000);
//		memset (dynamicmem[1], 0x00, 300000);
//
//		dynamicmem[2] = (char *) malloc (100000);
//		memset (dynamicmem[2], 0x00, 100000);
//
//		thread_sleep (100);
//
//		for (i=0; i<3; i++) {
//			free(dynamicmem[i]);
//		}
//  }
}
