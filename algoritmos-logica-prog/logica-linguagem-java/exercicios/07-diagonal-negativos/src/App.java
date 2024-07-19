import java.util.Locale;
import java.util.Scanner; 

public class App {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
       
        System.out.print("Qual e a ordem da matriz? ");
        int N = sc.nextInt();

        int[][] mat = new int[N][N];

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j] = sc.nextInt();
            }
        }

        System.out.println("Diagonal principal: ");
        for (int i = 0; i < N; i++){
            System.out.print(mat[i][i] + " ");
        }

        int somaNegativo = 0;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if(mat[i][j] < 0){
                    somaNegativo = somaNegativo + 1;
                }
            }
        }

        System.out.println();
        System.out.println("Quantidade de negativos = " + somaNegativo);
        sc.close();
    }
}
