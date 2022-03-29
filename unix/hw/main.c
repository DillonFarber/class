/* Dillon Farber
 * CS 4350-Unix Systems Programming
 * Assignment Number 4
 * Due Date: 3/11/2022
 */
#include <stdio.h>
#include <stdlib.h>

void pattern1(int s);
void pattern2(int s);
void pattern3(int s);
void pattern4(int s);

int main() {
    int choice = 0;
    int size = 0;

    printf("\n\n                           Welcome to My Pattern Program\n");
    printf("This program is written by Dillon Farber. The purpose of this program is to create\n");
    printf("four different patterns of different sizes. The size of each pattern is determined by the\n");
    printf("number of columns or rows. For example, a pattern of size 5 has 5 columns and 5 rows.\n");
    printf("Each pattern is made up of character P and a digit , which shows the size. The size\n");
    printf("must be between 2 and 9.\n\n\n");
    while(choice != 15){
        printf("\nMenu\n");
        printf("1.   Pattern One\n");
        printf("2.   Pattern Two\n");
        printf("3.   Pattern Three\n");
        printf("4.   Pattern Four\n");
        printf("15.  Quit\n");
        int isTrue = 0;
        while(isTrue != 1){
            printf("\nChoose an option (between 1 and 4 or 15 to end program): ");
            scanf("%d", &choice );
            if(choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 15)
            {
                isTrue = 1;
            }
            else
            {
                printf("\nYour option is incorrect. Please try again");
            }
        }
        isTrue = 0;
        if(choice != 15) {
            while (isTrue != 1) {
                printf("\nChoose a pattern size (between 2 and 9): ");
                scanf("%d", &size);
                if (size < 2 || size > 9) {
                    printf("\nYour pattern size is incorrect. Please try again");
                } else {
                    isTrue = 1;
                }
            }
        }


        switch(choice)
        {
            case 1:
                printf("\nPattern One!\n");
                pattern1(size);
                break;
            case 2:
                printf("\nPattern Two!\n");
                pattern2(size);
                break;
            case 3:
                printf("\nPattern Three!\n");
                pattern3(size);
                break;
            case 4:
                printf("\nPattern Four!\n");
                pattern4(size);
                break;
            case 15:
                printf("\nPattern Program By:\n");
                printf("Dillon Farber-3-11-2022\n");
                break;

        }
    }
}

void pattern1(int s){
    int i,j;
    for(i = 0; i < s;i++){
        for(j = 0; j < s; j++){
            if(j == i) {
                printf("%d", s);
            }
            else{
                printf("%s", "P");
            }
        }
        printf("\n");
    }
}
void pattern2(int s){
    int n = s - 1;
    int i, j;
    for(i=0; i < s; i++){
        for(j = 0; j < s; j++) {
            if (j != n) {
                printf("P");
            }
            else {
                printf("%d", s);
            }
        }
        printf("\n");
        n -= 1;
    }
}

void pattern3(int s){
    int n = s;
    int i,j;
    for(i = 0; i < s; i++){
        for(j = 0; j < s; j++){
            if(j < n){
                printf("P");
            }
            else {
                printf("%d", s);
            }
        }
        printf("\n");
        n -= 1;
    }
}

void pattern4(int s){
    int n = -1;
    int i,j;
    for(i = 0; i < s; i++){
        for(j = 0; j < s; j++){
            if(j > n){
                printf("P");
            }
            else {
                printf("%d", s);
            }
        }
        printf("\n");
        n += 1;
    }
}



