import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * GennadyAndCardGame
 */
public class GennadyAndCardGame {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String table_card = br.readLine();
    String five_cards[] = br.readLine().split(" ");
    boolean flag = false;
    for (int i = 0; i < five_cards.length; i++) {
      String ch1 = String.valueOf(table_card.charAt(0));
      String ch2 = String.valueOf(table_card.charAt(1));
      if (five_cards[i].contains(ch1) || five_cards[i].contains(ch2))
        flag = true;
    }
    if (flag)
      System.out.println("YES");
    else
      System.out.println("NO");
  }
}