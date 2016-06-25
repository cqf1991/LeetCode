class Solution {
public:
    int singleNumber(int A[], int n) {
        int out=A[0];// 0 XOR Y= Y  so  out=0  int i=0 is ok.
        for(int i=1;i<n;i++)
        {
            out^=A[i];// XOR  
        }
        return out;
    }
};