public class primeNumber {
    public static void main(String[] args){
        int i,m, flag;
        flag = 0;
        int n = 7;
        m =n/2;
    
        if( n==0 && n==1){
            System.out.println(n+ " : is Not prime Number");
        }
        else{
            for (i=2;i<=m; i++){
                if(n%i==0){
                    System.out.println(n + " : is Not prime Number");
                    flag = 1;
                    break;
                }
            }
            if(flag==0){
                System.out.println(n+ " : yes, prime!!");
            }
        }
        
    }
}