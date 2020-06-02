#include <stdio.h>
#include "threads/palloc.h"

void alloctest(void)
{

    /* Next Fit & Best Fit & Buddy System test code  - by MinJoon*/
    if(pallocator == 0){
        palloc_get_status(0);

        size_t page = palloc_get_multiple(0, 3);

        printf("4 page allocate\n");
        palloc_get_status(0);

        palloc_free_multiple(page, 2);

        palloc_get_status(0);

        size_t page2 = palloc_get_multiple(0, 3);

        printf("3 page allocate\n");
        palloc_get_status(0);

        palloc_free_multiple(page2, 2);

        palloc_get_status(0);

        size_t page3 = palloc_get_multiple(0, 1);

        printf("1 page allocate\n");
        palloc_get_status(0);    
    }

    if(pallocator == 1){
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

        size_t page3 = palloc_get_multiple(0, 2);

        printf("2 page allocate\n");
        palloc_get_status(0);    
    }

    if(pallocator == 2){
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

        size_t page3 = palloc_get_multiple(0, 2);

        printf("2 page allocate\n");
        palloc_get_status(0);

    }

    if(pallocator == 3){
         palloc_get_status(0);

        size_t page = palloc_get_multiple(0, 5);

        printf("5 page allocate\n");
        palloc_get_status(0);

        // palloc_free_multiple(page, 6);

        // palloc_get_status(0);

        size_t page2 = palloc_get_multiple(0, 15);

        printf("15 page allocate\n");
        palloc_get_status(0);

        // palloc_free_multiple(page2, 8);

        // palloc_get_status(0);

        size_t page3 = palloc_get_multiple(0, 3);

        printf("3 page allocate\n");
        palloc_get_status(0);  

        // palloc_free_multiple(page3, 8);

        // size_t page4 = palloc_get_multiple(0, 7);

        // printf("7 page allocate\n");
        // palloc_get_status(0);  
    }

}
