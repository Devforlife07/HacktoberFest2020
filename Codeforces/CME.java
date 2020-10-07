import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * CME
 */
public class CME {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while (t-- > 0) {
      int n = Integer.parseInt(br.readLine());

      if (n % 2 == 0 && n != 2)
        System.out.println("0");
      else if (n == 2)
        System.out.println("2");
      else
        System.out.println("1");
    }
  }
}