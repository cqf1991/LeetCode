import java.util.HashMap;


public class ContainsDuplicate {
	 public boolean containsDuplicate(int[] nums) {
	        HashMap<Integer, Integer> hm=new HashMap<Integer, Integer>();
	        for (int i = 0; i < nums.length; i++) {
				if (hm.containsKey(nums[i])) {
					return true;
				}
				else {
					hm.put(nums[i],0 );
				}
			}
	        return false;
	    }
	 public static void main(String[] args) {
		int[] tt={2,3,4,1,5,7,6,9};
		ContainsDuplicate cd=new ContainsDuplicate();
		System.out.println(cd.containsDuplicate(tt));
	 }
}
