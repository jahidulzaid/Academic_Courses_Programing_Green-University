public class fibonacciNumberGenerator {
    public static void main(String[] args){
        int n1 =0, n2 =1, n3;

        //n is the 1st n digit of fibonacci series
        int n=10;
        System.out.println("fibonacci number till "+ n + " numbers is: ");
        System.out.print(n1 +" "+ n2);

        for (int i=2; i<n; i++){
            n3 = n1 + n2;
            System.out.print( " "+n3);
            n1 = n2;
            n2 = n3;
        }
    }
}
