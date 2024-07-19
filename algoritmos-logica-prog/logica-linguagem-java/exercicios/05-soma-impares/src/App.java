import java.util.Locale;
import java.util.Scanner; 

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
       
        System.out.println("Digite dois numeros: ");
        int x = sc.nextInt();
        int y = sc.nextInt();

        if(x > y){
            int change = x;
            x = y;
            y= change;
        }

        int soma = 0;
        for (int i = x + 1; i < y; i++) {
            if(i % 2 != 0){
                soma = soma + i;
            }
        }

        System.out.println("Soma dos impares = " + soma);

        sc.close();
    }
}
