#include <iostream>
#include <math.h>

const int WIDTH{40};
const int HEIGHT{20};

char charArray[WIDTH * HEIGHT];

void foo(char arr[], int length){
    for(int i = 0; i < length; i++){
        charArray[i] = '.';
    }
}

void draw(char arr[], int length){
    for(int i = 0; i < length; i++){
        if((i % WIDTH) == 0){
            std::cout << std::endl;
        }
        std::cout << arr[i];
    }
}

int plot(int x, int y){
    int index;
    x = floor(x / WIDTH);
    y = floor(y / WIDTH);
    return index;
}

int main(){
    foo(charArray, WIDTH * HEIGHT);
    charArray[20 * 10] = '@';
    int yeet{1};
    while(yeet --> 0){
        draw(charArray, WIDTH * HEIGHT);
        std::cout << "\n -------------------------------------";
    }
    return 0;
}