/*
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER l
 *  2. INTEGER r
 */

int maximizingXor(int l, int r) {
    int max = l ^ l;
    for(int i = l; i <= r; i++)
    {
        for(int j = l; j <= r; j++)
        {
            max = (i ^ j) > max ? i ^ j : max;
        }
    }
    return max;
}
