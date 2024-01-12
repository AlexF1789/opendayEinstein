# Secondo programma in linguaggio Python (IRROBUSTITO)

# a differenza della versione meno robusta questo programma previene alcuni errori quali una lista di voti
# senza elementi al suo interno e controlla che il voto inserito sia un valore numerico (onde evitare errori
# nel successivo calcolo della media)

def aggiungi_voto(voto,lista):
    try:
        lista.append(float(voto))
    except ValueError:
        print("Attenzione! Il voto inserito non è stato considerato nella media perché non è numerico!\n")

def calcola_media(lista):
    # funzione che calcola la media di una lista passata in input come parametro
    try:
        num_elementi = len(lista)
        somma_elementi = 0

        for elemento in lista:
            somma_elementi += elemento

        media = somma_elementi / num_elementi
        return media
    except ZeroDivisionError:
        return -1.0


# creiamo una lista all'interno della quale salveremo i voti
voti = []

# chiediamo in input il primo voto all'utente
voto = input("Inserisci un voto (riga vuota per terminare): ")
while voto!='':
    aggiungi_voto(voto,voti)
    voto = input("Inserisci un voto (riga vuota per terminare): ")

print(f'La media dei voti inseriti è {calcola_media(voti):.2f}')