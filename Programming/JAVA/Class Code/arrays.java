public class arrays {
    public static void main(String[] args) {
        
        int[] marks = new int[3];
        marks[0] = 97;
        marks[1] = 100;
        marks[2] = 98;

        for(int i=0; i<3; i++){
            System.out.println("n-" + (i+1) +  ": "  +  marks[i]);
        }
    }
}
