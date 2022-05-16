#include <stdio.h>

void fullFillArrayUnderScore(char array[32][63]);

void printArray(char array[32][63]);

void placesOnes(int starter , int starterCol,int lenght,char array[32][63]);

void placesOnesTwo(int i, int i1, int i2, char array[32][63]);

int main() {

    char array[32][63];
    int numberOfIterations;
    fullFillArrayUnderScore(array);
    printf("Enter the number of iterations:");
    scanf("%d",&numberOfIterations);

    //this part is missing you think about this part
    if(numberOfIterations == 0){
        placesOnes(0,31,32,array);
    }else{
        placesOnesTwo(0,31,16,array);

    }




    printArray(array);

    return 0;
}

void placesOnesTwo(int i, int i1, int lenght, char array[32][63]) {




}

void placesOnes(int starter , int starterCol,int lenght,char array[32][63]){

    for(int i=0;i<lenght;i++){

        for(int j=starterCol-i;j<=starterCol+i;j++){
            array[i][j]='1';
        }
    }
}

void printArray(char array[32][63]) {
    for(int i=0;i<32;i++){
        for(int j=0;j<63;j++){
            printf("%c",array[i][j]);
        }
        printf("\n");
    }

}

void fullFillArrayUnderScore(char array[32][63]) {

    for(int i=0;i<32;i++){
        for(int j=0;j<63;j++) {
            array[i][j] = '_';
        }
    }
}

