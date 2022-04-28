#include <stdlib.h>
#include <stdio.h>
#include <math.h>



// prototype for the random number generator function
int rand_num_gen(int seed);
// prototype for the counter
int counter(int count);

int main(void){

    // Creating ints for random numbers and sum to reach
    int num1, num2, sum, sum2, count;

    printf("%s/n/n/n", "Practicing C Programming Language");

    // generating the first numbers for the sum 
    num1 = rand_num_gen(15);
    num2 = rand_num_gen(3);

    // displaying generated numbers
    printf("%s %d/n", "First Generated Number :", num1);
    printf("%s %d/n/n", "Second Generated Number :", num2);
    
    //summing the two first numbers generated 
    sum = num1 + num2;
    // displaying the sum
    printf("%s %d", "First Number + Second Number =", sum);

    // processing....
    printf("%s/n/n/n", "Processing . . . . . . ");


    /*
    Using a do-while loop to get it to generate the random numbers
    to get a equal sum to the original sum 
    */
    do{
        num1 = rand_num_gen(11);
        num2 = rand_num_gen(6);
        count = counter(1);
        printf("%s %d/n", "Generating First Number       =", num1);
        printf("%s %d/n", "Generating Second Number      =", num2);
        sum2 = num1 + num2;
        printf("%s %d/n/n/n", "The sum of the generated numbers is :", sum2);

    }while(sum != sum2);

    // displaying results
    printf("%s", "Number of Times the Numbers were Generated");
    printf("%s %d", "Before the Desired sum was reached =", count);


    return 0;

}


int rand_num_gen(int seed){
    srand(seed);
    int random = (rand() % 15) + 1;
    return random;
}

int counter(int count){
    static int counter;
    counter += count;
    return counter;
}