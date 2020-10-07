import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * divisbility
 */
public class divisbility {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while (t-- > 0) {
      String ar[] = br.readLine().split(" ");
      int a = Integer.parseInt(ar[0]);
      int b = Integer.parseInt(ar[1]);

      int count = 0;

      if (a % b != 0) {

        count = b - (a % b);
      } else {
        count = 0;
      }

      System.out.println(count);
    }

  }
}