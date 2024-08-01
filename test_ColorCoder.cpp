#include <gtest/gtest.h>
#include "ColorCoder.h"

TEST(ColorCoderTest, NumberToPair) {
    TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(4);
    EXPECT_EQ(colorPair.getMajor(), TelCoColorCoder::WHITE);
    EXPECT_EQ(colorPair.getMinor(), TelCoColorCoder::BROWN);

    colorPair = TelCoColorCoder::GetColorFromPairNumber(5);
    EXPECT_EQ(colorPair.getMajor(), TelCoColorCoder::WHITE);
    EXPECT_EQ(colorPair.getMinor(), TelCoColorCoder::SLATE);
}

TEST(ColorCoderTest, PairToNumber) {
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE);
    EXPECT_EQ(pairNumber, 12);

    pairNumber = TelCoColorCoder::GetPairNumberFromColor(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE);
    EXPECT_EQ(pairNumber, 25);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}