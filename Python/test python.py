#test 1 : affichage de suite
#test 2 : creer une liste et changer les variables a l'interieur 
#test 3 : les conditions et addition ou soustraction d'une valeur
#test 4 : creer un mot de passe avec un nombre d'intervalle

#test 1 :

for num_c in range(1, 6):
    #afficher une suite de nombre dans un intervalle
    print("c'est le", num_c)

#test 2 :
    
num_k = ["olm", "mp", "pm", "ml"]
#afficher toute la liste
print(num_k)
#afficher un nom via son numero dans la liste
print(num_k[2])   
#afficher le nom via la fin de la liste (ex: -1 = ml, -2 =pm)
print(num_k[len(num_k) -1])  
#remplacer un nom dans la liste
num_k[2] = "jip"
#afficher toute la liste avec la modification
print(num_k)
#afficher un nom via son numero dans la liste changee
print(num_k[2]) 

#test 3 :

#premier test d'affichage de condition (changer valeur pour les test)
ok = 15
om = 25

#j'affcihe la valeur de "ok" 1 
print ("ok1 =", ok) 
print ("om =", om)

#ici on peut soustraire la valeur "ok" par "om"
ok -= om

#ici j'ajoute la valeur 35 Ã  "ok"
ok +=30

#j'affiche la valeur de "ok" version 2 donc avec le +30
print ("ok2 =", ok)
#par la suite seul "ok2" sera pris en compte car derniere valeur de "ok"

#en fonction des variables (en inferieur)
if ok < om :
    print ("ok en-dessous de om")
else:
    print("ok au-dessus de om")

#en fonctions d'un nombre (en inferieur)
if ok < 18 :
    print ("ok en-dessous de 18")
else:
    print("ok au-dessus de 18")
    
#en fonction des variables (en superieur)
if ok > om :
    print ("ok au-dessus de om")
else:
    print("ok en-dessous de om")
        
#en fonctions d'un nombre (en superieur)
if ok > 18 :
    print ("ok au-dessus de 18")
else:
    print("ok en-dessous de 18")

#en fonction des variables (équivalent)
if ok == om :
    print ("ok equivalent à om")
else:
    print("ok pas equivalent à om")

#en fonctions d'un nombre (équivalent)
if ok == 18 :
    print ("ok equivalent à 18")
else:
    print("ok pas equivalent à 18")

#test 4 :

#j'affiche un text et via "input" j'active le fait de pouvoir ecrire dedans
MDP = input ("saisir un code ")
#ici le "len" sert Ã  lire la variable mot de passe et savoir la longueur du text
MDP_len = len(MDP)

#je mets une condition si le MDP saisit est inferieur ou egal Ã  7 de longueur
if MDP_len <= 7:
    print("code incorrect")
elif 8 < MDP_len < 13 :
    print("code respectable")
else :
    print("code correct")

#ici j'affiche la longueur insere dans la variable MDP
print ("nombre de valeur saisi =", MDP_len)

