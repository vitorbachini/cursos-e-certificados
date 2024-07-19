import java.util.Locale;
import java.util.Scanner; 

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
       
        System.out.println("Digite dois numeros: ");
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        while(n1 != n2){
            if(n1 > n2){
                System.out.println("Decrescente!");
            }else{
                System.out.println("Crescente!");
            }
            System.out.println("Digite outros dois numeros: ");
                n1 = sc.nextInt();
                n2 = sc.nextInt();
        }

        sc.close();
    }
}
