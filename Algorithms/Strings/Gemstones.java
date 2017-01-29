import java.io.*;
import java.util.*;

public class Gemstones {

    public static void main(String[] args)
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int result = 0;
        String[] input = new String[n];
        sc.nextLine();
        for(int i=0; i < n; i++)
        {
            input[i] = sc.nextLine();
        }

        HashMap<Character, Integer> charMap = new HashMap<Character, Integer>();
        for(int j =0; j < input[0].length(); j++)
        {
            if(!charMap.containsKey(input[0].charAt(j)))
            {
                charMap.put(input[0].charAt(j), 1);
            }
        }

        HashMap<Character, Integer> tempCharMap = new HashMap<Character, Integer>();

        for(int i=1; i < n; i++)
        {
            for(int j =0; j < input[i].length(); j++)
            {
                if(charMap.containsKey(input[i].charAt(j)) && !tempCharMap.containsKey(input[i].charAt(j)))
                {
                    tempCharMap.put(input[i].charAt(j), 1);
                    charMap.put(input[i].charAt(j),charMap.get(input[i].charAt(j))+1);
                }
            }
            tempCharMap.clear();
        }

        for (int value : charMap.values())
        {
            if(value == n)
            {
                result++;
            }
        }

        System.out.println(result);
    }
}
