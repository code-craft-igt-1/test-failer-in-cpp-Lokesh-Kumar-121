#include <assert.h>
#include <iostream>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
enum majorColors{White, Red, Black, Yellow, Violet};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int printColorMap(int pairNum, int majorColorNum) {
    int totalPairs = 0;
    int minorColorNum = 0;
    for(int minorColorNum = 0; minorColorNum < 5; minorColorNum++) {
        std::cout <<pairNum++ << " | " << majorColor[majorColorNum] << " | " << minorColor[minorColorNum] << "\n";
        totalPairs++;
    }
    return totalPairs;
}

int main() {
    assert(printColorMap(0, White) == 5);
    assert(printColorMap(5, Red) == 5);
    assert(printColorMap(10, Black) == 5);
    assert(printColorMap(15, Yellow) == 5);
    assert(printColorMap(20, Violet) == 5);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
