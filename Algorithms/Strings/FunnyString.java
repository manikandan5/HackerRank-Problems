import java.io.*;
import java.util.*;

public class FunnyString
{
    public static void main(String[] args) 
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int tC = Integer.parseInt(sc.nextLine());
        String input;
        int n;
        Boolean flag;
        for(int i=0; i < tC; i++)
        {
            input = sc.nextLine();

            n = input.length();

            flag = true;

            for(int j=1; j < n; j++)
            {
                if(Math.abs((input.charAt(j)-input.charAt(j-1))) != Math.abs(input.charAt(n-j) - input.charAt(n-j-1)))
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                System.out.println("Funny");
            }
            else
            {
                System.out.println("Not Funny");
            }
        }
    }
}
