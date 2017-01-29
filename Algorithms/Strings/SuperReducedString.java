import java.io.*;
import java.util.*;

public class SuperReducedString
{
    public static void main(String[] args)
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        boolean check = true;
        String result = "";
        while(check)
        {
            for(int i=0; i < word.length(); i++)
            {
                if(i != word.length()-1)
                {
                    if (word.charAt(i) == word.charAt(i + 1))
                    {
                        i++;
                        continue;
                    } else
                    {
                        result += String.valueOf(word.charAt(i));
                    }
                }
                else
                {
                    result += String.valueOf(word.charAt(i));
                }
            }
            if(word.equals(result))
            {
                check = false;
            }
            word = result;
            result = "";
        }
        if(word.equals(""))
        {
            System.out.println("Empty String");
        }
        else
        {
            System.out.println(word);
        }
    }
}
