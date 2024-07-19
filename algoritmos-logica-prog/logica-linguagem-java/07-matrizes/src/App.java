import java.util.Locale;
import java.util.Scanner; 

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
       
        System.out.print("Quantas linhas vai ter a matriz? ");
        int M = sc.nextInt();
        System.out.print("Quantas colunas vai ter a matriz? ");
        int N = sc.nextInt();

        int[][] mat = new int[M][N]; // Criação da matriz

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j] = sc.nextInt();
            }
        }

        System.out.println("Matriz Digitada: ");
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                System.out.print(mat[i][j] + " ");
                
            }
            System.out.println();
        }

        sc.close();
    }
}
