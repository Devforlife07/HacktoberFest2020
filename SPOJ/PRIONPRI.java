import java.io.*;
import java.util.*;

class PRIONPRI {
  static int MAX_ITERATIONS = 100;

  public static void main(String[] args) {
    InputReader in = new InputReader(System.in);
    OutputWriter out = new OutputWriter(System.out);
    int t = in.readInt();
    while (t-- > 0) {
      int n = in.readInt();
      if (isPrime1(n))
        out.printLine("YES");
      else
        out.printLine("NO");

    }
  }

  private static boolean isPrime1(int n) {
    if (n < 2)
      return false;
    for (int i = 2; i <= Math.sqrt(n); i++) {
      if (n % i == 0)
        return false;
    }
    return true;
  }

  // private static boolean isPrime(int n) {
  // if (n < 2)
  // return false;
  // if (n == 2 || n == 3)
  // return true;
  // if (n % 2 == 0 || n % 3 == 0)
  // return false;
  // for (int i = 0; i < MAX_ITERATIONS; i++) {
  // int max = 2;
  // int min = n - 2;
  // int range = max - min + 1;
  // int a = (int) (Math.random() * range) + min;
  // if (gcd(a, n) == 1) {
  // if (exp(a, n - 1, n) != 1)
  // return false;
  // } else {
  // return false;
  // }
  // }
  // return true;
  // }

  // private static int gcd(int a, int b) {
  // return b == 0 ? a : gcd(b, a % b);
  // }

  // private static int exp(int a, int n, int p) {
  // int res = 1;
  // a = a % p;
  // if (a == 0)
  // return 0;
  // while (n > 0) {
  // if ((n & 1) == 1) {
  // res = (res * a) % p;
  // }
  // a = (a * a) % p;
  // n >>= 1;
  // }
  // return res;
  // }
}

class InputReader {
  private InputStream stream;
  private byte[] buf = new byte[1024];
  private int curChar;
  private int numChars;
  private SpaceCharFilter filter;

  public InputReader(InputStream stream) {
    this.stream = stream;
  }

  public int read() {
    if (numChars == -1) {
      throw new InputMismatchException();
    }
    if (curChar >= numChars) {
      curChar = 0;
      try {
        numChars = stream.read(buf);
      } catch (IOException e) {
        throw new InputMismatchException();
      }
      if (numChars <= 0) {
        return -1;
      }
    }
    return buf[curChar++];
  }

  public int readInt() {
    int c = read();
    while (isSpaceChar(c)) {
      c = read();
    }
    int sgn = 1;
    if (c == '-') {
      sgn = -1;
      c = read();
    }
    int res = 0;
    do {
      if (c < '0' || c > '9') {
        throw new InputMismatchException();
      }
      res *= 10;
      res += c - '0';
      c = read();
    } while (!isSpaceChar(c));
    return res * sgn;
  }

  public String readString() {
    int c = read();
    while (isSpaceChar(c)) {
      c = read();
    }
    StringBuilder res = new StringBuilder();
    do {
      res.appendCodePoint(c);
      c = read();
    } while (!isSpaceChar(c));
    return res.toString();
  }

  public double readDouble() {
    int c = read();
    while (isSpaceChar(c)) {
      c = read();
    }
    int sgn = 1;
    if (c == '-') {
      sgn = -1;
      c = read();
    }
    double res = 0;
    while (!isSpaceChar(c) && c != '.') {
      if (c == 'e' || c == 'E') {
        return res * Math.pow(10, readInt());
      }
      if (c < '0' || c > '9') {
        throw new InputMismatchException();
      }
      res *= 10;
      res += c - '0';
      c = read();
    }
    if (c == '.') {
      c = read();
      double m = 1;
      while (!isSpaceChar(c)) {
        if (c == 'e' || c == 'E') {
          return res * Math.pow(10, readInt());
        }
        if (c < '0' || c > '9') {
          throw new InputMismatchException();
        }
        m /= 10;
        res += (c - '0') * m;
        c = read();
      }
    }
    return res * sgn;
  }

  public long readLong() {
    int c = read();
    while (isSpaceChar(c)) {
      c = read();
    }
    int sgn = 1;
    if (c == '-') {
      sgn = -1;
      c = read();
    }
    long res = 0;
    do {
      if (c < '0' || c > '9') {
        throw new InputMismatchException();
      }
      res *= 10;
      res += c - '0';
      c = read();
    } while (!isSpaceChar(c));
    return res * sgn;
  }

  public boolean isSpaceChar(int c) {
    if (filter != null) {
      return filter.isSpaceChar(c);
    }
    return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
  }

  public String next() {
    return readString();
  }

  public interface SpaceCharFilter {
    public boolean isSpaceChar(int ch);
  }
}

class OutputWriter {
  private final PrintWriter writer;

  public OutputWriter(OutputStream outputStream) {
    writer = new PrintWriter(new BufferedWriter(new OutputStreamWriter(outputStream)));
  }

  public OutputWriter(Writer writer) {
    this.writer = new PrintWriter(writer);
  }

  public void print(Object... objects) {
    for (int i = 0; i < objects.length; i++) {
      if (i != 0) {
        writer.print(' ');
      }
      writer.print(objects[i]);
    }
    writer.flush();
  }

  public void printLine(Object... objects) {
    print(objects);
    writer.println();
    writer.flush();
  }

  public void close() {
    writer.close();
  }

  public void flush() {
    writer.flush();
  }
}
