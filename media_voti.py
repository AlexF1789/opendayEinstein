# Secondo programma in linguaggio Python

# questo programma calcola la media di un numero indefinito di voti inseriti dall'utente


# creiamo una lista all'interno della quale salveremo i voti
voti = []

# chiediamo in input il primo voto all'utente
voto = input("Inserisci un voto (riga vuota per terminare): ")
while voto!='':
    voti.append(float(voto))
    voto = input("Inserisci un voto (riga vuota per terminare): ")

media = sum(voti) / len(voti)

print(f'La media dei voti inseriti è {media:.2f}')