import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * FafaAndCompany
 */
public class FafaAndCompany {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    int count = 0;
    for (int i = 1; i <= n / 2; i++) {
      if (n % i == 0)
        count++;
    }
    System.out.println(count);
  }
}