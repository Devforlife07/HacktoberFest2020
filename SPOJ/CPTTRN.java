/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone {
  public static void main(String[] args) throws java.lang.Exception {
    // your code goes here
    Scanner sn = new Scanner(System.in);
    int t = sn.nextInt();
    while (t-- > 0) {
      int a = sn.nextInt();
      int b = sn.nextInt();
      for (int i = 0; i < a; i++) {
        char ch1;
        char ch2;
        if (i % 2 == 0) {
          ch1 = '*';
          ch2 = '.';
        } else {
          ch1 = '.';
          ch2 = '*';
        }
        for (int j = 0; j < b; j++) {
          if (j % 2 == 0)
            System.out.print(ch1);
          else
            System.out.print(ch2);
        }
        System.out.println();
      }
    }
  }
}