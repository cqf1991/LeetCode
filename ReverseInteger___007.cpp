class Solution {
public
    int reverse(int x) {
	int mod=10;
	int out=0;
	int n=0;
	int i=0;
	int flag;
	int array[99];
	if(x0)
	{
		x=-x;
		flag=1;
	}
	else if(x==0)
	{
		return x;
	}
	while(x%mod!=x)
	{
		array[n]=(x%mod)(mod10);
		mod=mod10;
		n++;
	}
	array[n]=(x%mod)(mod10);
	n++;
	
	while(n0)
	{
		out+=array[i](mod10);
		mod=mod10;
		i++;
		n--;
	}
	if(flag==1)
	{
		return -out;
	}
	else
	{
		return out;
	}
	
	
    }

};