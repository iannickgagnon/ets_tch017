# Chapitre 1 — Logique booléenne

## Construire un ordinateur à partir de rien (ou presque)

Un ordinateur moderne est une machine complexe : processeur, mémoire vive, périphériques d'entrées et de sorties, carte graphique, système d’exploitation, langage de programmation, compilateur, etc. Pourtant, derrière cette complexité se cache une idée étonnamment simple : **un ordinateur manipule de l’information représentée par des valeurs binaires (vrai/faux, 1/0, allumé/éteint, etc.) aussi appelées booléennes**. Ainsi, nous commençons par présenter des éléments de **logique booléenne** pour apprendre à manipuler les manipuler.

Dans ce cours, nous ne nous limiterons pas à décrire les composantes d’un ordinateur, mais allons progressivement les construire. Nous commencerons avec des éléments très simples, puis nous les combinerons pour former des circuits de plus en plus puissants. 

>[!NOTE]
> Le contenu présenté est adapté de la deuxième édition du livre intitulé _The Elements of Computing Systems_ de Noam Nisan et Shimon Schocken. Le site web de référence est le suivant: [https://www.nand2tetris.org/](https://www.nand2tetris.org/).

## Pourquoi commencer par la logique booléenne?

La logique booléenne est le langage de base des circuits numériques. Elle permet de représenter et de manipuler deux valeurs : vrai ou faux, 1 ou 0, activé ou désactivé. Ces valeurs peuvent sembler limitées, mais elles suffisent à construire les opérations fondamentales d’un ordinateur.

À partir de portes logiques simples, il devient possible de créer :

* des circuits qui prennent des décisions;
* des circuits qui effectuent des calculs;
* des circuits qui mémorisent de l’information;
* des unités capables d’exécuter des instructions;
* éventuellement, une machine programmable complète.

Autrement dit, la logique booléenne est le premier niveau d’abstraction entre le monde physique de l’électronique et le monde symbolique du logiciel.

## L’idée centrale : l’abstraction

Un thème important de ce cours sera l’abstraction. Une abstraction permet d’utiliser un système sans devoir constamment penser à tous les détails internes de son fonctionnement.

Par exemple, lorsqu’on utilise une addition dans un programme, on ne pense généralement pas aux circuits électroniques qui la réalisent. Lorsqu’on écrit une instruction en assembleur, on ne pense pas nécessairement aux portes logiques qui réagiront à cette instruction. Chaque niveau cache une partie des détails du niveau précédent.

Dans ce chapitre, nous allons construire les premières abstractions matérielles du cours. Nous verrons comment définir des portes logiques à partir de leur comportement, puis comment les combiner pour obtenir des circuits plus élaborés.

## De la porte NAND aux autres portes logiques

L’approche que nous suivrons repose sur une idée particulièrement élégante : il est possible de construire toutes les portes logiques nécessaires à partir d’un seul type de porte, la porte **NAND**.

La porte NAND est dite universelle parce qu’elle permet de recréer les autres opérations booléennes fondamentales, comme NOT, AND et OR. Une fois ces portes disponibles, nous pourrons construire des circuits plus complexes sans toujours revenir à la porte NAND elle-même.

Cette stratégie illustre bien la puissance de l’abstraction : une fois qu’un composant fonctionne correctement, on peut l’utiliser comme une brique de construction fiable pour créer le niveau suivant.

## Ce que nous construirons dans ce chapitre

Dans ce chapitre, nous construirons une première bibliothèque de circuits combinatoires. Un circuit combinatoire est un circuit dont la sortie dépend uniquement de ses entrées actuelles. Il ne possède pas encore de mémoire.

Nous verrons notamment comment construire :

* des portes logiques élémentaires;
* des variantes de ces portes sur plusieurs bits;
* des multiplexeurs, qui permettent de sélectionner une valeur parmi plusieurs possibilités;
* des démultiplexeurs, qui dirigent une valeur vers une sortie choisie.

Ces circuits peuvent sembler modestes au départ, mais ils serviront de fondation pour les chapitres suivants. Les opérations arithmétiques, la mémoire, le processeur et l’architecture complète de la machine dépendront directement de ces premières briques.

## Objectifs d’apprentissage

À la fin de ce chapitre, vous devriez être en mesure de :

1. expliquer le rôle de la logique booléenne dans la construction d’un ordinateur;
2. représenter des fonctions booléennes à l’aide de tables de vérité;
3. comprendre pourquoi la porte NAND peut servir de brique universelle;
4. construire des portes logiques simples à partir de NAND;
5. combiner des portes logiques pour créer des circuits plus complexes;
6. distinguer le comportement externe d’un circuit de son implémentation interne;
7. utiliser l’abstraction pour raisonner sur des systèmes numériques.
