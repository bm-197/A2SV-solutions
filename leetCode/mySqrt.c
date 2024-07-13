int mySqrt(int x)
{
    if (x == 0)
        return 0;
    long int sqrtNum = 1;
    while (1)
    {
        if (sqrtNum * sqrtNum == x)
            return sqrtNum;
        else if (sqrtNum * sqrtNum > x)
            return sqrtNum - 1;
        sqrtNum++;
    }
}