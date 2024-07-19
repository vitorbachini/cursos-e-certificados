import java.util.Locale;
import java.util.Scanner; // Biblioteca para entrada de dados

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
       
        double salario1, salario2;
        String nome1, nome2;
        int idade;
        char sexo;

        System.out.print("Nome da primeira pessoa: ");
        nome1 = sc.nextLine(); // Leitura de string
        System.out.print("Salario da primeira pessoa: ");
        salario1 = sc.nextDouble(); // Leitura de tipo double

        System.out.print("Nome da segunda pessoa: ");
        sc.nextLine(); // limpeza de buffer
        nome2 = sc.nextLine();
        System.out.print("Salario da sefunda pessoa: ");
        salario2 = sc.nextDouble(); 

        System.out.print("Digite uma idade: ");
        idade = sc.nextInt(); // Leitura do tipo int
        System.out.print("Digite uma sexo (F, M): ");
        sexo = sc.next().charAt(0); // Leitura do tipo char

        System.out.println("Nome 1: " + nome1);
        System.out.println("Salario 1: " + salario1);
        System.out.println("Nome 2: " + nome2);
        System.out.println("Salario 2: " + salario2);
        System.out.println("Idade: " + idade);
        System.out.println("Sexo: " + sexo);
        
        sc.close(); // Desalocação de recursos
    }
}
