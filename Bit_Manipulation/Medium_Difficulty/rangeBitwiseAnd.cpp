class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int changedbits = left ^ right;
        int ret = 1;
        while(changedbits)
        {
            changedbits >>= 1;
            ret <<= 1;
            ret++;
        }
        ret >>= 1;
        return left & right & ~ret;
    }
};
