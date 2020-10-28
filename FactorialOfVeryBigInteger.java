import java.math.BigInteger;
import java.util.Scanner;

public class FactorialOfVeryBigInteger {
    public static BigInteger factorial(int N) {
        BigInteger big = BigInteger.ONE;
        for (int i = 2; i <= N; i++) {
            big = big.multiply(BigInteger.valueOf(i));
        }
        return big;
    }

    public static void main(String[] args) {
    	System.out.print("Enter a number to get the Factorial: ");
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        System.out.printf("The Factorial of %d is: %d ",N, factorial(N));
    }
    
}
