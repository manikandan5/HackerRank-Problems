import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class JumpingOnTheCloudsRevisited {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int c[] = new int[n];
        for(int c_i=0; c_i < n; c_i++)
        {
            c[c_i] = in.nextInt();
        }

        int E = 100;

        for(int i=0; i < n; i = i+k )
        {
            if(c[i] == 1)
            {
               E = E-3;
            }
            else
            {
               E = E-1;
            }
        }

        System.out.println(E);
    }
}
