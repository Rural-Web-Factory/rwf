<?php

$serveur = 'localhost';
$login = 'root';
$password = '';

$date = $pseudo =$email = "";



function securisation($donnees){
    $donnees = trim($donnees);
    $donnees = stripslashes($donnees);
    $donnees = strip_tags($donnees);
    return $donnees;

}

$date = securisation($_POST['date']);

$pseudo = securisation($_POST['pseudo']);
$email = securisation($_POST['email']);
date_default_timezone_set('Europe/Paris');
$annee= date('Y');

    try{
    $connexion = new PDO("mysql:host=$serveur;dbname=motoko", $login, $password);
    $connexion -> setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    $requete = $connexion ->prepare( /* préparation de la requete SQL */
        "INSERT INTO zelda(date, email, pseudo)
        VALUES(:date, :email, :pseudo)" /* création de marqueurs (nom précédé de deux points) */
    );

     /* la méthode "bindParam" sert a lier les marqueurs à des variables */
    $requete-> bindParam(':date', $date);
    $requete-> bindParam(':email', $email);
    $requete-> bindParam(':pseudo', $pseudo);




        if (($annee-$date) >= 10) {
            $requete->execute(); /* execution de la requete*/
        header('location:zelda_accueil.php');
        } else {
            $requete->execute();
        header('location:restrictions.html');}

}
catch (PDOException $e){
    echo 'echec : ' .$e->getmessage();
}



         ?>
