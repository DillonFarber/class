
/*
    NAME: Dillon Farber
    Course Number / Name: 4350-251 Unix System Programming
    Assignment Number: 7
    Due Date: April 28, 2022
*/


#include <pthread.h>
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
int fact(int n);

int main() 
{
    pthread_t thread1, thread2, thread3, thread4, thread5, thread6, thread7, 
    thread8, thread9, thread10, thread11, thread12;
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

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);
    pthread_join(thread4, NULL);
    pthread_join(thread5, NULL);
    pthread_join(thread6, NULL);
    pthread_join(thread7, NULL);
    pthread_join(thread8, NULL);
    pthread_join(thread9, NULL);
    pthread_join(thread10, NULL);
    pthread_join(thread11, NULL);
    pthread_join(thread12, NULL);


}

void* thread_1(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = arg/arg;
    RESULT += result;
    printf("%s %d", "Result of the 1st Thread =   ", result);
    pthread_mutex_unlock(&lock);
}
void* thread_2(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = (arg + arg)/arg;
    RESULT += result;
    printf("%s %d", "Result of the 2nd Thread =   ", result);
    pthread_mutex_unlock(&lock);
}
void* thread_3(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = sqrt(double(arg));
    RESULT += result;
    printf("%s %d", "Result of the 3rd Thread =   ", result);
    pthread_mutex_unlock(&lock);
}
void* thread_4(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = sqrt(double(arg)) + (arg/arg);
    RESULT += result;
    printf("%s %d", "Result of the 4th Thread =   ", result);
    pthread_mutex_unlock(&lock);
}
void* thread_5(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = sqrt((double)arg);
    result = fact(result) - (arg/arg);
    RESULT += result;
    printf("%s %d", "Result of the 5th Thread =   ", result);
    pthread_mutex_unlock(&lock);
}
void* thread_6(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = arg - (arg / (sqrt((double)arg)));
    RESULT += result; 
    printf("%s %d", "Result of the 6th Thread =   ", result);
    pthread_mutex_unlock(&lock);
}
int fact(int n)
{
    if(n == 0)
        return 1;
    else
        return n * fact(n-1);
}
void* thread_7(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = (arg + (arg/arg)) - sqrt((double)arg);
    RESULT += result;
    printf("%s %d", "Result of the 7th Thread =   ", result);
    pthread_mutex_unlock(&lock);
}
void* thread_8(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = arg - (arg/arg);
    RESULT += result;
    printf("%s %d", "Result of the 8th Thread =   ", result);
    pthread_mutex_unlock(&lock);
}
void* thread_9(void* arg)
{
    pthread_mutex_lock(&lock);
    RESULT += arg;
    printf("%s %d", "Result of the 9th Thread =   ", arg);
    pthread_mutex_unlock(&lock);
}
void* thread_10(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = arg + (arg/arg);
    RESULT += result;
    printf("%s %d", "Result of the 10th Thread =   ", result);
    pthread_mutex_unlock(&lock);
}
void* thread_11(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = ((arg * arg) + (arg + arg)) / arg;
    RESULT += result;
    printf("%s %d", "Result of the 11th Thread =   ", result);
    pthread_mutex_unlock(&lock);
}
void* thread_12(void* arg)
{
    pthread_mutex_lock(&lock);
    int result = arg + (arg/sqrt((double)arg));
    RESULT += result; 
    printf("%s %d", "Result of the 12th Thread =   ", result);
    pthread_mutex_unlock(&lock);
}
