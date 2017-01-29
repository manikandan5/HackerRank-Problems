import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class JumpingOnTheClouds 
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int c[] = new int[n];
        for(int c_i=0; c_i < n; c_i++)
        {
            c[c_i] = in.nextInt();
        }

        int jumps = 0;

        for(int i=0; i <= n-2; )
        {
            if(i == n-2)
            {
                i = i+1;
            }
            else if(c[i+2] == 0)
            {
                i = i+2;
            }
            else
            {
                i = i+1;
            }
            jumps++;
        }

        System.out.println(jumps);
    }
}
