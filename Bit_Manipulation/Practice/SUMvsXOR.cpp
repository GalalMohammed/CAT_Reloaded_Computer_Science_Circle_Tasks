/*
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */

long sumXor(long n) {
    int zeroes = 0;
    while(n)
    {
        if(!(n & 1)) zeroes++;
        n >>= 1;
    }
    return pow(2, zeroes);
}
