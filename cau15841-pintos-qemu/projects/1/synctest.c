#include <stdio.h>
#include <threads/thread.h>
#include <devices/timer.h>

void
test_helper (void *aux) 
{
	timer_msleep(1000);
	printf("child_thread!!!\n");
}


void synctest(void)
{
	tid_t tid[10];
	int i;
	printf("implement synchronize test!!!\n");
	printf("struct thread size : %d\n", sizeof(struct thread));

	for(i = 0; i < 10; i++)
		tid[i] = thread_create ("sema-test", PRI_DEFAULT, test_helper, (void *)NULL);
	thread_yield();

	for(i = 0; i < 10; i++){
		thread_yield();
		thread_join(tid[i]);
	}

	printf ("done.\n");

}
