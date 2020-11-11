package Maths;

import java.math.BigInteger;
import java.util.Scanner; 

public class BigFactorial{
    static BigInteger factorial(int N) 
    { 
        BigInteger f = BigInteger.ONE;
  
        for (int i = 2; i <= N; i++) 
            f = f.multiply(BigInteger.valueOf(i)); 
  
        return f; 
    } 
  
    public static void main(String args[]) throws Exception 
    { 
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        System.out.println(factorial(N)); 
        sc.close();
    } 
}
