public class TestAnimal {
    public static void main(String[] args) throws Exception {
         
         Animal A = new Animal("A", 3);
        
    
         System.out.println("Description de l'animal A :");
         System.out.println(A);
         
         
         Chien B = new Chien("B", 5, "Humain");
         
         
         System.out.println("\nAge du chien B : " + B.getAge());
         
         
         B.ajouterVaccin("Vaccin contre la tuberculouse de chien");
         
         
         System.out.println("\nVaccins du chien B :");
         B.afficherVaccins();
        
    }
}

 
