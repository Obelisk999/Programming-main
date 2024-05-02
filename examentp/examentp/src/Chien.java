public class Chien extends Animal {
    private String race;

    public Chien(String nom, int age, String race) {
        super(nom, age);
        this.race = race;
    }

    public String getRace() {
        return race;
    }

    public void setRace(String race) {
        this.race = race;
    }

    @Override
    public String toString() {
        return "Chien [nom=" + nom + ", age=" + age + ", race=" + race + ", listeVaccin=" + listeVaccin+ "]";
    }
}
