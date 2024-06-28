#include "pch.h"
#include "Source.cpp"


TEST(test4and3) {
    testing::internal::CaptureStdout(); // Перенаправляем вывод в стандартный поток вывода

    func(4, 3);

    std::string output = testing::internal::GetCapturedStdout(); // Получаем вывод
    EXPECT_EQ(output, "7 1 12 1\n");
    EXPECT_TRUE(true);
}

TEST(test7andMinus4) {
    testing::internal::CaptureStdout(); // Перенаправляем вывод в стандартный поток вывода

    func(7, -4);

    std::string output = testing::internal::GetCapturedStdout(); // Получаем вывод
    EXPECT_EQ(output, "3 11 -28 -1\n");
    EXPECT_TRUE(true);
}

TEST(bequalzero) {
    testing::internal::CaptureStdout(); // Перенаправляем вывод в стандартный поток вывода

    func(10, 0);

    std::string output = testing::internal::GetCapturedStdout(); // Получаем вывод
    EXPECT_EQ(output, "10 10 0 Error\n");
    EXPECT_TRUE(true);
}


TEST(test0and6) {
    testing::internal::CaptureStdout(); // Перенаправляем вывод в стандартный поток вывода

    func(0, 6);

    std::string output = testing::internal::GetCapturedStdout(); // Получаем вывод
    EXPECT_EQ(output, "6 -6 0 0\n");
    EXPECT_TRUE(true);
}
