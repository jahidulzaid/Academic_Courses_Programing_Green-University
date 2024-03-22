public class patternUpperTriangle {
    public static void main(String[] args){
        int row=5;
        for (int i = row-1; i>=0; i--){
            for (int j = 0; j<=i; j++){
                System.out.print("* ");
            }
            System.out.println(" ");
        }
    }
}
