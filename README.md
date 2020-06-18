# Lem-in - 42 Lyon

## Objectifs

• Le but du projet est de trouver le moyen le plus rapide de faire traverser la fourmilière par n fourmis.

• Pour arriver le premier, il faut trouver la meilleure combinaison de chemins, en essayant d'être le plus rapide possible. ATTENTION AU EMBOUTEILLAGE

• Au début du jeu, toutes les fourmis sont sur la salle indiquée par la commande
\##start. Le but est de les amener sur la salle indiquée par la commande ##end en
prenant le moins de tours possible. Chaque salle peut contenir une seule fourmi à
la fois (sauf ##start et ##end qui peuvent en contenir autant qu’il faut).

• On considère que les fourmis sont toutes dans la salle ##start au démarrage.

• Vous n’afficherez à chaque tour que les fourmis qui ont bougé.

• À chaque tour vous pouvez déplacer chaque fourmi une seule fois et ce suivant un
tube (la salle réceptrice doit être libre).

• Vous devez sortir le résultat sur la sortie standard sous la forme suivante :
nombre_de_fourmis

• Le nombre de fourmis à transporté est écrit en haut de la carte donné en paramètre.

1. les_salles
2. les_tubes
3. Lx-y Lz-w Lr-o ...

Où x, z, r sont des numéros de fourmis (allant de 1 à nombre_de_fourmis) et y,
w, o des noms de salles.

**Exemple 1 :**

[0]-[2]-[3]-\[1]

```
./lem-in < sujet1.map

3

##start

0 1 0

##end

1 5 0
2 9 0
3 13 0
0-2
2-3
3-1
L1-2
L1-3 L2-2
L1-1 L2-3 L3-2
L2-1 L3-3
L3-1

```

**Exemple 2 :**



	      [2]
        /  |  \
	[0]    |   [1]
 	   \   |  /
  	      [3]


```
./lem-in < sujet2.map
3
2 5 0
##start
0 1 2
##end
1 9 2
3 5 4
0-2
0-3
2-1
3-1
2-3
L1-3 L2-2
L1-1 L2-1 L3-3
L3-1
```

## Fonctions autorisées
◦ read
◦ write
◦ malloc
◦ free
◦ perror
◦ strerror
◦ exit

## Utilisation

#### Télécharger et compiler Lem-in
```
git clone https://github.com/hmichel42/Lemin.git ~/Lem_in
cd ~/Lem_in
make
```
#### Exécution
```
./lem-in < testmap
```
Le générateur de map fournit par l'école permet de générer des map de différentes tailles (voir usage). Ce projet a été réalisé sous MAC OS.

Pour plus d'informations, le sujet est disponible au format pdf.