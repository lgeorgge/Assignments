#include <iostream>
#include <vector>
using namespace std;

int FibonacciUsingDB(int number, vector<int> &memo)
{
    if (number <= 1)
    {
        return number;
    }
    if (memo[number] != 0)
    {
        return memo[number];
    }
    memo[number] = FibonacciUsingDB(number - 1, memo) + FibonacciUsingDB(number - 2, memo);
    return memo[number];
}

int FibonacciUsingRecursion(int number)
{
    if (number <= 1)
        return number;
    return FibonacciUsingRecursion(number - 1) + FibonacciUsingRecursion(number - 2);
}