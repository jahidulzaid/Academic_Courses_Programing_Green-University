public class patternPyramid  
{    
public static void main(String args[])   
{    

    int i, j, row = 6;       

    for (i=0; i<row; i++)   
    {  
        //for space      
        for (j=row-i; j>1; j--)   
        {  
            //space between two stars  
            System.out.print(" ");   
        }   
        //for columns  
        for (j=0; j<=i; j++ )   
        {   
            //prints star      
            System.out.print("* ");   
        }   
        System.out.println();   
    }   
}   
}  