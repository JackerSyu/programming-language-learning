bool isPalindrome(int x) {
    if(x < 0)
    {
        return false;
    }
    else
    {
        long long int result = 0;
        int y = x;
        while (x != 0)
        {
            result = result * 10 + x % 10;
            x = x / 10;
        }
        if(y == result)
        {
            return true;
        }
        return false;
    }
}