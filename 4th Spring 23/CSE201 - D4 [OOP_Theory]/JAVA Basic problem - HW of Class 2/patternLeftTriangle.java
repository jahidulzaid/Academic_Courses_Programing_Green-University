public class patternLeftTriangle {
    public static void main(String[] arguments){
        int i, j, row = 6;       

        for (i=0; i<row; i++)
        {  
            //for space      
            for (j=2*(row-i); j>0; j--)         
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
