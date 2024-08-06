#include <assert.h>
#include <iostream>

using std::cout;
const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
enum majorColors{White, Red, Black, Yellow, Violet};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int printColorMap(int pairNum, int majorNum) {
    int totalPairs = 0;
    int minorNum = 0;
    for (int minorColorNum = 0; minorColorNum < 5; minorColorNum++) {
        cout <<pairNum++ << " | " << majorColor[majorNum] << " | " << minorColor[minorNum] << "\n";
        totalPairs++;
    }
    return totalPairs;
}

int main() {
    assert(printColorMap(0, White) == 5);
    assert(printColorMap(5, Red) == 5);
    assert(printColorMap(10, Black) == 5);
    assert(printColorMap(15, Yellow) == 4);
    assert(printColorMap(20, Violet) == 5);
    cout << "All is well (maybe!)\n";
    return 0;
}
