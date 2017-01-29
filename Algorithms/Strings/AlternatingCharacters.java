import java.io.*;
import java.util.*;

public class AlternatingCharacters 
{
    public static void main(String[] args)
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        int tC = Integer.parseInt(s.nextLine());
        String input = "";
        int count;
        for(int i=0; i < tC; i++)
        {
            input = s.nextLine();
            count = 0;

            for(int j=1; j < input.length(); j++)
            {
                if(input.charAt(j)==input.charAt(j-1))
                {
                    count++;
                }
            }

            System.out.println(count);
        }
    }
}
