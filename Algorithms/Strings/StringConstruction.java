import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution
{
    public static void StringConstruction(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int a0 = 0; a0 < n; a0++)
        {
            String s = in.next();
            HashSet<Character> set = new HashSet<Character>();
            for(int i=0; i < s.length(); i++)
            {
                if(!set.contains(s.charAt(i)))
                {
                    set.add(s.charAt(i));
                }
            }
            System.out.println(set.size());
        }
    }
}
