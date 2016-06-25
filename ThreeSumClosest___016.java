import java.lang.reflect.Array;
import java.util.Arrays;


public class ThreeSumClosest {
	public int threeSumClosest(int[] nums, int target) {
		Arrays.sort(nums);
		int start,end,sum,minDis,res=0;
		minDis=Integer.MAX_VALUE;
		for (int i = 0; i < nums.length-2; i++) {
			start=i+1;
			end=nums.length-1;
			while(start<end)
			{
				sum=nums[i]+nums[start]+nums[end];
				if(Math.abs(sum-target)<minDis)
				{
					minDis=Math.abs(sum-target);
					res=sum;
				}
				else if (sum<target) {
					start++;
				}
				else if(sum>target)
				{
					end--;
				}
				else {
					return res;
				}
			}		
		}
		return res;
    }
	public static void main(String[] args) {
		ThreeSumClosest tsc=new ThreeSumClosest();
		int[] nums={0,1,2};
		int target=3;
		int rrr=tsc.threeSumClosest(nums, target);
		System.out.print(rrr);
	}
}
