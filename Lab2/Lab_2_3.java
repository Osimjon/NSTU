
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
    
	public static void main(String[] args) {
	    int n = 250;
	    n = reverse(n);
		System.out.println(n);
	}
}

