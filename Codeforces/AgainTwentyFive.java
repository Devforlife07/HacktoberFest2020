import java.io.BufferedReader;

import java.io.IOException;
import java.io.InputStreamReader;

import java.math.BigInteger;

/**
 * AgainTwentyFive
 */
public class AgainTwentyFive {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    long n = Long.parseLong(br.readLine());
    BigInteger f = new BigInteger("5");
    for (long i = 2; i <= n; i++) {
      f = f.multiply(f);
    }
    String s = f.toString();
    int len = s.length();
    System.out.print(s.charAt(len - 2));
    System.out.print(s.charAt(len - 1));

  }
}
