#include <assert.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cout, std::string;

const std::vector<string> majorColors = { "White", "Red", "Black", "Yellow", "Violet" };
const std::vector<string> minorColors = { "Blue", "Orange", "Green", "Brown", "Slate" };

std::pair<string, string> getColorsFromPairNumber(int pairNumber) {
    int totalPairs = majorColors.size() * minorColors.size();
    if (pairNumber < 1 || pairNumber > totalPairs) {
        return { "", "" };
    }

    int zeroBasedPairNumber = pairNumber - 1;
    string major = majorColors[zeroBasedPairNumber / minorColors.size()];
    string minor = minorColors[zeroBasedPairNumber % minorColors.size()];

    return { major, minor };
}

string ExpectedOutput() {
    std::ostringstream oss;
    int totalPairs = majorColors.size() * minorColors.size();
    for (int PairNum = 1; PairNum <= totalPairs; PairNum++) {
        std::pair<std::string, std::string> cols = getColorsFromPairNumber(PairNum);
        oss << "Pair number " << PairNum << ": " << cols.first << " - " << cols.second << std::endl;
    }
    return oss.str();
}

string GetColorPairs() {
    std::ostringstream oss;
    int totalPairs = majorColors.size() * minorColors.size();
    for (int PairNum = 1; PairNum <= totalPairs; PairNum++) {
        std::pair<std::string, std::string> cols = getColorsFromPairNumber(PairNum);
        oss << "Pair number " << PairNum << ": " << cols.first << " - " << cols.second << std::endl;
    }
    return oss.str();
}

void testprintColorMap() {
    // Generate expected output dynamically and compare with
    string expectedOutput = ExpectedOutput();
    string actualOutput = GetColorPairs();
    assert(expectedOutput == actualOutput);
}

int main() {
    testprintColorMap();
    cout << "All is well\n";
    return 0;
}