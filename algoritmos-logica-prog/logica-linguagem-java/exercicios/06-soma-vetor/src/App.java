import java.util.Locale;
import java.util.Scanner; 

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
       
        System.out.print("Quantos numeros voce vai digitar? ");
        int N = sc.nextInt();

        double[] vet = new double[N];

        for (int i = 0; i < N; i++){
            System.out.print("Digite um numero: ");
            vet[i] = sc.nextDouble();
        }

        System.out.print("Valores = ");
        for (int i = 0; i < N; i++){
            System.out.print(vet[i] + "  ");
        }

        double soma = 0;
        for (int i = 0; i < N; i++){
            soma = soma + vet[i];
        }
        System.out.println();
        System.out.println("Soma = " + String.format("%.2f", soma));

        double media = soma / N;
        System.out.println("Media = " + String.format("%.2f", media));
        sc.close();
    }
}
