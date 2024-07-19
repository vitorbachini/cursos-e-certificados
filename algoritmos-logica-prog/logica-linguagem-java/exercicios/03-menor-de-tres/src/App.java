import java.util.Locale;
import java.util.Scanner; 

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
       
        System.out.print("Primeiro valor: ");
        int n1 = sc.nextInt();
        System.out.print("Segundo valor: ");
        int n2 = sc.nextInt();
        System.out.print("Terceiro valor: ");
        int n3 = sc.nextInt();

        int menor = n1;
        if(n2 < n1 && n2 < n3){
            menor = n2;
        }else if(n3 < n1){
            menor = n3;
        }

        System.out.println();
        System.out.println("Menor valor: " + menor);

        sc.close();
    }
}
