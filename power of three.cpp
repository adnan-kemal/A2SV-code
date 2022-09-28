class Solution {
private:
    bool isPow(int x)
    {
        if(x == 1)
        {
            return true;
        }
        if(x < 3)
        {
            return false;
        }
        if(x == 3)
        {
            return true;
        }
        if(x > 3 && x % 3 == 0)
        {
            return isPow(x / 3);
        }
        else
        {
            return false;
        }
    }
public:
    bool isPowerOfThree(int n) {
        return isPow(n);
    }
};