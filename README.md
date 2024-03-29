# Verif-Projet-Perfect

## Sujet 4 Calcul de la fonction perfect

La fonction perfect renvoie une valeur vraie ou fausse selon que le nombre n est parfait ou non. Un nombre n est parfait, si la somme de ses diviseurs différents de lui est égal à ce nombre. Par exemple, 28 est parfait. On pourra construire une suite p ∈ 0..n → N : p(i) est l’ensemble des diviseurs de n plus petits que i. Il faudra aussi définir une suite calculant la somme des diviseurs. Le modèle Event-B devra donc développer par raffinement un algorithme séquentiel calculant cette fonction. Pour réaliser ce développement, il faudra définir les suites permettant de calculer cette fonction. Il faudra appliquer les règles de transformation pour dériver un algorithme C analysable par Frama-c ; Le développement servira aussi de mine d’informations pour produire un invariant et une preuve du contrat en Frama-c.

frama-c:
```
> frama-c perfect.c -save parse.sav
> frama-c -load parse.sav -eva -save eva.save
> cat eva.save
ou
> frama-c-gui -load eva.save
```
