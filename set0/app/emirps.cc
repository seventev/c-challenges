#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to reverse the digits of a number
int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

// Function to find emirps in a given range
int countEmirps(int limit) {
    std::vector<int> primes;

    // Find all primes up to the limit
    for (int i = 2; i < limit; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    int emirpCount = 0;

    // Check for emirps
    for (int prime : primes) {
        int reversedPrime = reverseNumber(prime);
        if (reversedPrime != prime && isPrime(reversedPrime)) {
            emirpCount++;
        }
    }

    return emirpCount;
}

int main() {
    int limit = 1000000;
    int emirpCount = countEmirps(limit);

    std::cout << "Number of emirps below " << limit << ": " << emirpCount << std::endl;

    return 0;
}
