#include "ColorCoder.h"
#include <iostream>
#include <sstream>

namespace TelCoColorCoder
{
    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    // Constructor for ColorPair
    ColorPair::ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor) {}

    // Getter for major color
    MajorColor ColorPair::getMajor() {
        return majorColor;
    }

    // Getter for minor color
    MinorColor ColorPair::getMinor() {
        return minorColor;
    }

    // Convert ColorPair to string
    std::string ColorPair::ToString() {
        std::ostringstream colorPairStr;
        colorPairStr << MajorColorNames[majorColor] << " " << MinorColorNames[minorColor];
        return colorPairStr.str();
    }

    // Get ColorPair from pair number
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    // Get pair number from ColorPair
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}