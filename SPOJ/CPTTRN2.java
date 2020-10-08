/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class CPTTRN2 {
  public static void main(String[] args) throws java.lang.Exception {
    // your code goes here
    Scanner sn = new Scanner(System.in);
    int t = sn.nextInt();
    while (t-- > 0) {
      int a = sn.nextInt();
      int b = sn.nextInt();
      for (int i = 0; i < a; i++) {
        if (i == 0 || i == a - 1) {
          for (int j = 0; j < b; j++) {
            System.out.print("*");
          }
        } else {
          for (int j = 0; j < b; j++) {
            if (j == 0 || j == b - 1)
              System.out.print("*");
            else
              System.out.print(".");
          }
        }
        System.out.println();
      }
    }
  }
}