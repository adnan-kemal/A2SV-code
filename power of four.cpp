class Solution {
private:
    bool isPow(int x)
    {
        if(x == 1)
        {
            return true;
        }
        if(x < 4)
        {
            return false;
        }
        if(x == 4)
        {
            return true;
        }
        if(x > 4 && x % 4 == 0)
        {
            return isPow(x / 4);
        }
        else
        {
            return false;
        }
    }
public:
    bool isPowerOfFour(int n) {
        return isPow(n);
    }
};