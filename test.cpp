#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "function.h"

TEST_CASE("Question 1: add", "[q1]") {
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, 1) == 0);
    REQUIRE(add(0, 0) == 0);
}

TEST_CASE("Question 2: rectangleArea", "[q2]") {
    REQUIRE(rectangleArea(5.0, 10.0) == 50.0);
    REQUIRE(rectangleArea(0.0, 10.0) == 0.0);
    REQUIRE(rectangleArea(5.5, 3.0) == 16.5);
}

TEST_CASE("Question 3: circleCircumference", "[q3]") {
    // Note: Using 3.14 as an approximation of PI in your function
    REQUIRE(circleCircumference(1.0) == Approx(6.28).epsilon(0.01));
    REQUIRE(circleCircumference(0.0) == 0.0);
    REQUIRE(circleCircumference(2.0) == Approx(12.56).epsilon(0.01));
}

TEST_CASE("Question 4: fahrenheitToCelsius", "[q4]") {
    REQUIRE(fahrenheitToCelsius(32) == 0.0);
    REQUIRE(fahrenheitToCelsius(100) == Approx(37.78).epsilon(0.01));
    REQUIRE(fahrenheitToCelsius(0) == Approx(-17.78).epsilon(0.01));
}

TEST_CASE("Question 5: calculateProfitPercentage", "[q5]") {
    REQUIRE(calculateProfitPercentage(120.0, 100.0) == Approx(20.0).epsilon(0.01));
    REQUIRE(calculateProfitPercentage(100.0, 100.0) == 0.0);
    REQUIRE(calculateProfitPercentage(50.0, 100.0) == Approx(-50.0).epsilon(0.01));
}

