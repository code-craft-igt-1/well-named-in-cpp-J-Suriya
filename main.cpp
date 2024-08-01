#include <iostream>
#include "ColorCoder.h"

void PrintColorCodingManual() 
{
    std::cout << "Color Coding Reference Manual\n";
    std::cout << "------------------------------\n";
    for(int i = 1; i <= 25; ++i) 
    {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i);
        std::cout << i << " - " << colorPair.ToString() << "\n";
    }
}

int main() {
    PrintColorCodingManual();
    return 0;
}
