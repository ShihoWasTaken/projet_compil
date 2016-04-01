Kenny GUIOUGOU
M1 Info

I) Spécifications
Toutes les options ont été implémentés à part:
- gestion des erreurs de parsing
- application de la rotation dans Qt

II) Syntaxe image et boucles
Pour afficher une image la syntaxe est:
Image(x,y,nom_de_l_image)
Exemple:
Image(0,0,pikachu.jpg)

Les boucles peuvent afficher un cercle, une ligne ou un rectangle.
Seule la syntaxe sur une seule ligne est disponible pour déclarer une figure dans une boucle.
Pour afficher une boucle la syntaxe est:
boucler{
	Rectangle(x,y,lenght,with)(iterations,decalage_x,decalage_y){couleur,epaisseur,remplissage,rotation,opacite}
}

Exemple:
boucler{
	Rectangle(500, 30, 20, 100)(5,30,5){#255,160,122, 1, plein, 90°, 80%}
	Cercle(500, 300, 50)(5,80,0){jaune, 5, plein, 90°, 70%}
}

III) Utilisation
Lancez les commandes:
$ ./script.sh
$ ./Projet\ 2015-2016

Le parseur lira les données du fichier forme.txt.
Si le parseur rencontre une grammaire inconnue, il s'arrêtera.