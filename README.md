# DateTime.h ⌚
Libreria scritta in C++ che introduce l'oggetto DateTime utilizzato in C#

# Funzionalità 💻

Per dichiare l'oggetto datetime, occorre scrivere:
```
DateTime dt;
```
In questo modo, si dichiara un oggetto DateTime con data 1/1/0001

E' anche possibile dichiare l'oggetto passando come parametro il giorno, il mese e l'anno

```
DateTime dt(23,2,2025);
```

Dopo la dichiarazione, è possibile usare le funzioni setDay, setMonth e setYear per modificare il campo corrispondente.
```
dt.setDay(2);
dt.setMonth(3);
dt.setYear(2005);
```

E' possibile anche richiedere il giorno/mese/anno dell'oggetto con getDay/getMonth/getYear.

```
int d = dt.getDay();
int m = dt.getMonth();
int y = dt.getYear();
```

Inoltre si può ottenere la data del computer. 

```
DateTime dt = DateTime::now();
```

E infine, utilizzando la funzione apposita, si può convertire in stringa la data.


```
std::string s = dt.ToString();
```


# DISCLAIMER!!!! ‼️
La libreria è ancora in fase di sviluppo e ho solo inserito le funzioni principali, in seguito, se ho tempo, aggiungerò altre funzioni. Inoltre, nonostante sia molto piccola come libreria, può comunque contenere bug o implementazioni migliorabili, dato che sto ancora prendendo dimestichezza con C++.


# Info 📁

Librerie Usate:
```
<iostream>
<ctime>
<string>
```

Per qualsiasi problema / consiglio, utilizzare la scheda issues apposita.
