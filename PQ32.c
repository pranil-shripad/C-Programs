#include <stdio.h>

void helloWorld(int count);

int main(){
    helloWorld(5);

}

void helloWorld(int count){
    if (count == 0){
        return;
    }
    printf("HelloWorld\n");
    helloWorld(count-1);


}