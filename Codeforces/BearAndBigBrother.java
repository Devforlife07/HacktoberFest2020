import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * BearAndBigBrother
 */
public class BearAndBigBrother {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String s[] = br.readLine().split(" ");
    int limak = Integer.parseInt(s[0]);
    int bob = Integer.parseInt(s[1]);
    int count = 0;
    while (limak <= bob) {
      limak = limak * 3;
      bob = bob * 2;
      count++;
    }
    System.out.println(count);
  }
}