
public class ReverseString {
	 
	/*
	 public String reverseString(String s) {
	        //String r=""; //bad way using String+=; String is designed as immutable var
		    StringBuilder r=new StringBuilder();
	        for(int i=s.length()-1;i>=0;i--)
	        {
	            r.append(s.charAt(i));
	        }
	        return r.toString();	        
	    }
	    
	 public String reverseString(String s) {
		 StringBuilder r=new StringBuilder(s);    
		 return r.reverse().toString();// use api
	    }
	    */
	 public String reverseString(String s) {
	        int left=0, right=s.length()-1;
	        char[] arrString=s.toCharArray();//Converts this string to a new character array
	        while(left<right)
	        {
	        	char temp=arrString[left];
	        	arrString[left]=arrString[right];
	        	arrString[right]=temp;
	        	left++;
	        	right--;
	        }
	        return new String(arrString);//new string(char[]) ¡£
	    }
	 public static void main(String[] args) {
		ReverseString rString=new ReverseString();
		System.out.println(rString.reverseString("ABC")) ;
	}

}
