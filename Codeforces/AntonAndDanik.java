import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * AntonAndDanik
 */
public class AntonAndDanik {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    String s = br.readLine();
    int anton = 0, danik = 0;
    for (int i = 0; i < s.length(); i++) {
      if (s.charAt(i) == 'A')
        anton++;
      else
        danik++;
    }
    if (anton > danik)
      System.out.println("Anton");
    else if (anton < danik)
      System.out.println("Danik");
    else
      System.out.println("Friendship");

  }
}