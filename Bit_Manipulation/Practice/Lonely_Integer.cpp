/*
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int lonelyinteger(vector<int> a) {
    int uniqueCatcher = a[0];
    bool SingleElementCheck = true;
    for(int i = 1; i < a.size(); i++)
    {
        uniqueCatcher ^= a[i];
        if(SingleElementCheck && a[i] != a[i - 1])
        SingleElementCheck = false;   
    }
    return SingleElementCheck? a[0] : uniqueCatcher;
}
