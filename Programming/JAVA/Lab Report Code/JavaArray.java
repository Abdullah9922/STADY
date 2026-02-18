public class JavaArray {
    public static void main(String[] args) {

        System.out.println("ID Array:");
        String[] infoID = {"Ishtyaq Ahmed Abdullah", "241-15-918", "CSE", "DIU"};
        for (int i = 0; i < infoID.length; i++) {
            System.out.println("Element " + i + ": " + infoID[i]);
        }

        System.out.println("\n2D Array:");
        String[][] info2D = {
            {"Name", "Ishtyaq Ahmed Abdullah"},
            {"ID", "241-15-918"},
            {"Department", "CSE"},
            {"University", "Daffodil International University"}
        };

        for (int i = 0; i < info2D.length; i++) {
            for (int j = 0; j < info2D[i].length; j++) {
                System.out.print(info2D[i][j] + " ");
            }
            System.out.println();
        }
    }
}
