import java.util.Locale;

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);

        int idade;
        double salario, altura;
        char genero;
        String nome;

        idade = 20;
        salario = 5800.5;
        altura = 1.63;
        genero = 'F';
        nome = "Maria Silva";

        System.out.println("Idade = " + idade); // Saída de dados.
        System.out.println("Salario = " + String.format(".2lf", salario));
        System.out.println("Altura = " + String.format(".2lf", altura));
        System.out.println("Genero = " + genero);
        System.out.println("Nome = " + nome);
    }
}
