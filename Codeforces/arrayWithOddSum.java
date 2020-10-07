import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * arrayWithOddSum
 */
public class arrayWithOddSum {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while (t-- > 0) {
      int n = Integer.parseInt(br.readLine());
      String s[] = br.readLine().split(" ");
      int[] a = new int[n];
      int sum = 0;
      for (int i = 0; i < n; i++) {
        a[i] = Integer.parseInt(s[i]);
        sum += a[i];
      }
      if (sum % 2 != 0)
        System.out.println("YES");
      else
        System.out.println("NO");
    }
  }
}