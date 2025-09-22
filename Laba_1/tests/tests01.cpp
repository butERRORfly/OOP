#include <gtest/gtest.h>
#include "../include/ogres.h"

TEST(RemoveVowelsTest, TestFromTask) {
    EXPECT_EQ(RemoveVowels("This website is for losers LOL!"), "Ths wbst s fr lsrs LL!");
}

TEST(RemoveVowelsTest, LowerCaseVowels) {
    EXPECT_EQ(RemoveVowels("aeiou"), "");
    EXPECT_EQ(RemoveVowels("banana"), "bnn");
}

TEST(RemoveVowelsTest, UpperCaseVowels) {
    EXPECT_EQ(RemoveVowels("AEIOU"), "");
    EXPECT_EQ(RemoveVowels("BANANA"), "BNN");
}

TEST(RemoveVowelsTest, MixedCase) {
    EXPECT_EQ(RemoveVowels("ApplE"), "ppl");
    EXPECT_EQ(RemoveVowels("Umbrella"), "mbrll");
}

TEST(RemoveVowelsTest, NoVowels) {
    EXPECT_EQ(RemoveVowels("rhythm"), "rhythm");
    EXPECT_EQ(RemoveVowels("bcdfg"), "bcdfg");
}

TEST(RemoveVowelsTest, EmptyString) {
    EXPECT_EQ(RemoveVowels(""), "");
}

TEST(RemoveVowelsTest, OnlyVowels) {
    EXPECT_EQ(RemoveVowels("ooaaee"), "");
}

TEST(RemoveVowelsTest, SpecialCharsAndNumbers) {
    EXPECT_EQ(RemoveVowels("h3ll0_w0rld!"), "h3ll0_w0rld!");
    EXPECT_EQ(RemoveVowels("c@t_d0g"), "c@t_d0g");
}
