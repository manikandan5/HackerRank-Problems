import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class MiniMaxSum
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong();
        long b = in.nextLong();
        long c = in.nextLong();
        long d = in.nextLong();
        long e = in.nextLong();
        long total = a+b+c+d+e;
        System.out.print(total - findMax(a,b,c,d,e));
        System.out.print(" ");
        System.out.println(total - findMin(a,b,c,d,e));
    }

    public static long findMin(long a, long b, long c, long d, long e)
    {
        long min = a;
        if(b < min)
        {
            min = b;
        }
        if(c < min)
        {
            min = c;
        }
        if(d < min)
        {
            min = d;
        }
        if(e < min)
        {
            min = e;
        }
        return min;
    }

    public static long findMax(long a, long b, long c, long d, long e)
    {
        long max = a;
        if(b > max)
        {
            max = b;
        }
        if(c > max)
        {
            max = c;
        }
        if(d > max)
        {
            max = d;
        }
        if(e > max)
        {
            max = e;
        }
        return max;
    }
}
