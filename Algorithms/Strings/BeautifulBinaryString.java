import java.io.*;
import java.util.*;

public class BeautifulBinaryString
{
    public static void main(String[] args)
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String inputString = sc.nextLine();
        inputString = sc.nextLine();
        int result = 0;
        for(int i = 0; i < n-2; i++)
        {
            if(inputString.charAt(i) == '0' && inputString.charAt(i+1) == '1' && inputString.charAt(i+2) == '0')
            {
                result++;
                i = i + 2;
            }
        }
        //System.out.println(result);

        System.out.println((inputString.length() - ((inputString.replace("010","")).length()))/3);
    }
}
