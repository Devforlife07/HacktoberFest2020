import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * AntonAndPolyhedrons
 */
public class AntonAndPolyhedrons {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    int sum = 0;
    while (n-- > 0) {
      String s = br.readLine();
      if (s.equals("Tetrahedron"))
        sum += 4;
      else if (s.equals("Cube"))
        sum += 6;
      else if (s.equals("Octahedron"))
        sum += 8;
      else if (s.equals("Dodecahedron"))
        sum += 12;
      else if (s.equals("Icosahedron"))
        sum += 20;

    }
    System.out.println(sum);
  }
}