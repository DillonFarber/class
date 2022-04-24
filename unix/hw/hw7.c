
/*
    NAME: Dillon Farber
    Course Number / Name: 4350-251 Unix System Programming
    Assignment Number: 7
    Due Date: April 28, 2022
*/


#include <pthred.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int RESULT = 0;

void* thread_1(void* arg);
void* thread_2(void* arg);
void* thread_3(void* arg);
void* thread_4(void* arg);
void* thread_5(void* arg);
void* thread_6(void* arg);
void* thread_7(void* arg);
void* thread_8(void* arg);
void* thread_9(void* arg);
void* thread_10(void* arg);
void* thread_11(void* arg);
void* thread_12(void* arg);


int main() 
{
    pthread_t thread1, thread2, thread3, thread4, thread5 thread6, thread7, thread8, thread9, thread10, thread11, thread12;
    int userNum;
    do
    {
        printf("Enter an Integer > 0 --- >      ");
        scanf("%d", userNum);
        if(userNum < 0)
        {
            printf("\n****      Number must be greater than 0      ****\n");
        }
    }while(userNum < 0 );

    pthread_create(&thread1, NULL, thread_1, (void*));
    sleep(1);

    pthread_create(&thread2, NULL, thread_2, (void*));
    sleep(1);

    pthread_create(&thread3, NULL, thread_3, (void*));
    sleep(1);

    pthread_create(&thread4, NULL, thread_4, (void*));
    sleep(1);

    pthread_create(&thread5, NULL, thread_5, (void*));
    sleep(1);

    pthread_create(&thread6, NULL, thread_6, (void*));
    sleep(1);

    pthread_create(&thread7, NULL, thread_7, (void*));
    sleep(1);

    pthread_create(&thread8, NULL, thread_8, (void*));
    sleep(1);

    pthread_create(&thread9, NULL, thread_9, (void*));
    sleep(1);

    pthread_create(&thread10, NULL, thread_10, (void*));
    sleep(1);

    pthread_create(&thread11, NULL, thread_11, (void*));
    sleep(1);

    pthread_create(&thread12, NULL, thread_12, (void*));
    sleep(1);
}

void* thread_1(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = arg/arg;
    RESULT += result;
    pthread_mutex_unlock(&lock);
    return result;
}
void* thread_2(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = (arg + arg)/arg;
    RESULT += result;
    pthread_mutex_unlock(&lock);
    return result;
}
void* thread_3(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = sqrt(double(arg));
    RESULT += result;
    pthread_mutex_unlock(&lock);
    return result;
}
void* thread_4(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = sqrt(double(arg)) + (arg/arg);
    RESULT += result;
    pthread_mutex_unlock(&lock);
    return result;
}
