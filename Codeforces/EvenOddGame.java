import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * EvenOddGame
 */
public class EvenOddGame {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    boolean mahmoud = false;
    if (n % 2 == 0 && n > 1) {
      mahmoud = true;
    } else {
      mahmoud = false;
    }
    if (mahmoud)
      System.out.println("Mahmoud");
    else
      System.out.println("Ehab");
  }
}
