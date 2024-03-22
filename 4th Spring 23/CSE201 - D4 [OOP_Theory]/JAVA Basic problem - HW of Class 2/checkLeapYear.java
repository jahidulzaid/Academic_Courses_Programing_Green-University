public class checkLeapYear {
    public static void main(String[] args){

        //the year to check
        
        int year = 2023;
        boolean isLeapYear = false;

        if(year % 4 == 0){
            if( year % 100 ==0){
                if(year % 400 == 0){
                    isLeapYear = true;
                }
                else{
                    isLeapYear = false;
                }
            }
            else{
                isLeapYear = true;
            }
        }
        else
            isLeapYear = false;

        if(isLeapYear){
            System.out.println(year + " is a leap year.");
        }
        else
            System.out.println(year + " is not a leap year");
    }
}
