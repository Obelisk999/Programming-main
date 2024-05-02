import java.util.ArrayList;

public class Animal {
    protected String nom;
    protected int age;
    protected ArrayList<String> listeVaccin;

    public Animal(String nom, int age) {
        this.nom = nom;
        this.age = age;
    }

    public String getNom() {
        return nom;
    }

    public void setNom(String nom) {
        this.nom = nom;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
    
    public void ajouterVaccin(String vaccin) {
        listeVaccin.add(vaccin);
    }

    public void supprimerVaccin(String vaccin) {
        listeVaccin.remove(vaccin);
    }

    public void afficherVaccins() {
        for (String vaccin : listeVaccin) {
            System.out.println(vaccin);
        }
    }

    public ArrayList<String> getListeVaccin() {
        return listeVaccin;
    }

    public void setListeVaccin(ArrayList<String> listeVaccin) {
        this.listeVaccin = listeVaccin;
    }

    @Override
    public String toString() {
        return "Animal [nom=" + nom + ", age=" + age + ", listeVaccin=" + (listeVaccin != null ? listeVaccin : "vide") + "]";
    }
    
}
