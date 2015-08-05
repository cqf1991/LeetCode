public class MedianofTwoSortedArrays {
	public double findMedianSortedArrays(int[] nums1, int[] nums2) {
		int nums[] = new int[nums1.length + nums2.length];
		int i = 0, j = 0;
		for (int k = 0; k < nums.length; k++) {
			if (i > nums1.length - 1)
				nums[k] = nums2[j++];
			else if (j > nums2.length - 1)
				nums[k] = nums1[i++];
			else if (nums1[i] < nums2[j])
				nums[k] = nums1[i++];
			else
				nums[k] = nums2[j++];
		}
		if (nums.length % 2 != 0)
			return nums[nums.length / 2];
		else
			return (double) (nums[nums.length / 2] + nums[nums.length / 2 - 1]) / 2;
	}

	public static void main(String[] args) {
		MedianofTwoSortedArrays nnNo4 = new MedianofTwoSortedArrays();
		int[] nums1 = { 2, 7, 9 };
		int[] nums2 = { 3, 4, 6 };
		nnNo4.findMedianSortedArrays(nums1, nums2);
	}
}