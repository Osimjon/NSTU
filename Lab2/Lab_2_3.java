public class Main
{
    public static int reverse(int n1){
    int n2 = 0;
    while (n1 > 0){
        int digit = n1 % 10;
        n1 = n1 / 10;
        n2 = n2 * 10;
        n2 = n2 + digit; 
    }
    return n2;
    }
    
    public static String removefirstChar(String str)
    {
        if (str == null || str.length() == 0) {
            return str;
        }
        return str.substring(1);
    }
    
    public static String reverseString(String str) {
        return new StringBuilder(str).reverse().toString();
    } 
    
	public static void main(String[] args) {
	    
	    String str = "002500";
	    
	    while(str.charAt(0) == '0'){
	        str = removefirstChar(str);
	    };	    
	    str = reverseString(str);	    
	    while(str.charAt(0) == '0'){
	        str = removefirstChar(str);
	    };
	    System.out.println(str); 
	}
}
