#include <stdlib.h>
#include "math.h"
#include "stdio.h"
int main(){
    int minX, maxX, rowLength, newX;
    int *array1;
    scanf("%i%*c%i", &minX, &maxX);
    if (minX>=0 && maxX>=0)
        rowLength=maxX-minX+1;
    if (minX<0 && maxX>=0)
        rowLength=abs(minX)+maxX+1;
    if (minX<0 && maxX<=0)
        rowLength=abs(minX)-abs(maxX)+1;
    array1= malloc(rowLength*sizeof(int));
    for(int i=0; i<=rowLength; i++) {
        newX=minX;
        redivide:if(abs(newX)%5==0 && abs(newX)%2==1){
        i--;
        rowLength--;
        minX++;
        continue;
    }
    else{
        while(abs(newX)>10){
            newX=abs(newX)/10;
            goto redivide;
        }
        array1[i]=minX;
        minX++;
    }
    }
    for(int i=0; i<rowLength;i++ ){
        printf("%i ", array1[i]);
    }

    printf("=>%i ", rowLength);
}