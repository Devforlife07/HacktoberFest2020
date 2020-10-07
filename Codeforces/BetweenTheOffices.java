import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * BetweenTheOffices
 */
public class BetweenTheOffices {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    String s = br.readLine();
    int s_f = 0;
    int f_s = 0;
    for (int i = 1; i < n; i++) {
      if (s.charAt(i - 1) > s.charAt(i))
        s_f++;
      else if (s.charAt(i - 1) < s.charAt(i))
        f_s++;

    }
    if (s_f > f_s)
      System.out.println("YES");
    else
      System.out.println("NO");
  }
}