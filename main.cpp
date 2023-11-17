#include <iostream>
#include <math.h>

const int WIDTH{30};
const int HEIGHT{10};

char charArray[WIDTH * HEIGHT];

void foo(char arr[], int length){
    for(int i = 0; i < length; i++){
        charArray[i] = 254;
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

//TODO: also pass in a vector maybe?
int plot(int x, int y){
    return x + y * WIDTH;
}

int main(){
    foo(charArray, WIDTH * HEIGHT);
    charArray[plot(3, 2)] = '@';
    // idk why thought it would be fun to use the --> operator for a change
    int frames{1};
    while(frames --> 0){
        draw(charArray, WIDTH * HEIGHT);
        std::cout << "\n -------------------------------------";
    }
    return 0;
}