public class JavaMethodOverloading {
    void printInfo(String name) {
        System.out.println("Name: " + name);
    }

    void printInfo(String name, String id) {
        System.out.println("Name: " + name + ", ID: " + id);
    }

    void printInfo(String name, String id, String department) {
        System.out.println("Name: " + name + ", ID: " + id + ", Department: " + department);
    }

    public static void main(String[] args) {
        JavaMethodOverloading obj = new JavaMethodOverloading();

        System.out.println("=== Method Overloading Examples ===");

        obj.printInfo("Ishtyaq Ahmed Abdullah");
        obj.printInfo("Ishtyaq Ahmed Abdullah", "241-15-918");
        obj.printInfo("Ishtyaq Ahmed Abdullah", "241-15-918", "CSE");
    }
}
