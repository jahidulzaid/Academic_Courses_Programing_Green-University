/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.hello_world;

/**
 *
 * @author @jahidulZaid
 */
public class Hello_World {

    public static void main(String[] args) 
    {   
//        int x=1;
//        int y=6;
//        int sum1 = x+y;
//        System.out.println("The value of sum is "+sum1);
        
//2nd problem
            int n=3;
            int sum;
            int fact;
            sum=0;
            fact=1;

            for (int i= 1; i<=n; ++i)
            {
                fact*=i;
                sum+=fact;
                System.out.println(+sum);

            }
            System.out.println("Output of " + n + " is "+sum);

//        3rd problem 

        
        
        
        
    
    }
}
