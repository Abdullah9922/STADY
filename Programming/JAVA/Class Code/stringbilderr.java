public class stringbilderr {
    public static void main(String[] args) 
    {

        StringBuilder sb = new StringBuilder("Tonny");
        System.out.println(sb);

        // char at index 0
        System.out.println(sb.charAt(0));


        // set char at index 0
        sb.setCharAt(0, 'P');
        System.out.println(sb);

        sb.insert(0,'S');
        System.out.println(sb);


        // delete 
        sb.delete(2, 3);
        System.out.println(sb);


        // add at last
        sb.append("e");
        System.out.println(sb);
        System.out.println(sb.length());

    }
}
