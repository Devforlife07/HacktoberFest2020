import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * Drinks
 */
public class Drinks {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    String s[] = br.readLine().split(" ");
    int a[] = new int[t];
    int orangeDrink = 0;
    for (int i = 0; i < t; i++) {
      a[i] = Integer.parseInt(s[i]);
      orangeDrink += a[i];
    }
    int finalDrink = t * 100;
    double prop = (double) orangeDrink / finalDrink;
    System.out.printf("%.12f", prop * 100);
  }
}