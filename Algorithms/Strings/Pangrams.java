import java.io.*;
import java.util.*;

public class Pangrams 
{
    public static void main(String[] args)
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String newString = sc.nextLine();


        HashSet<Character> alphaMap = new HashSet<>();

        for(int i=0; i < newString.length(); i++)
        {
            if((newString.charAt(i) != ' ') && (!alphaMap.contains(Character.toLowerCase(newString.charAt(i)))))
            {
                alphaMap.add(Character.toLowerCase(newString.charAt(i)));
            }
        }

        if(alphaMap.size() == 26)
        {
            System.out.println("pangram");
        }
        else
        {
            System.out.println("not pangram");
        }
    }
}
