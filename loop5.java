public class loop5 {
    public static void main(String[] args) {
        


        int i  = 3749;
        int rev = 0;
        for(;i>0; i =i/10) {
   int num = i %10;
  rev = rev* 10 + num;
        }
    
     
        System.out.println("Reverse = " + rev);
    }
}
