import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * Cars
 */
public class Cards {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int len = Integer.parseInt(br.readLine());
    String s = br.readLine();
    int _z = 0;
    int _n = 0;
    for (int i = 0; i < len; i++) {
      if (s.charAt(i) == 'z')
        _z++;
      else if (s.charAt(i) == 'n')
        _n++;
    }
    String str = "";
    for (int i = 1; i <= _n; i++)
      str += "1 ";
    for (int i = 1; i <= _z; i++)
      str += "0 ";
    System.out.println(str.trim());
  }
}