<?php
    //Connexion
    $serveur = "localhost";
    $utilisateur = "root";
    $motdepasse = "";
    $base = "iad";
    $conn = "";

    $conn = mysqli_connect("$serveur","$utilisateur","$motdepasse","$base");

    // //Variables
    $num = $_POST["Numero"];
    $nom = $_POST["Nom"];
    $mdp = $_POST["MotDePasse"];
    $sexe = $_POST["Sexe"];
    $filiere = $_POST["Filiere"];
    $email = $_POST["Email"];
    $adresse = $_POST["Adresse"];

    $sql = "INSERT INTO etudiant VALUES ('$num', '$nom', '$mdp', '$sexe', '$filiere', '$email', '$adresse')";

    $insertion = mysqli_query($conn,$sql);

    echo "<a href='../Activite 5/Menu.html'><button>Retourner</button></a>";

    mysqli_close($conn);
?>
