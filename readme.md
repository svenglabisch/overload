kompilieren:
	g++ main.cpp vector.cpp matrix.cpp
	g++ main2.cpp vector.cpp matrix.cpp
aufruf: 
	./a.out
Ausgabe:
	unterteilt ist diese in 2 datein, eine ohne direkte Ausgabe(main.cpp) und eine mit direkter Ausgabe(main2.cpp).
	beide tuen prinzipiel das selbe und durchlafen allerlei "test" bei denen saemtliche implimentierten operatoren ausgefuehrt werden
	und jeweils durch asserts ausgetestet, sodass auch ein blick in die main1.cpp zeigt dass saemtliche funktionen richtig funktionieren.
	Die main2.cpp gibt zusaetzlich ueber die dump() funktion und einem cout text aus. Im folgendem ist die readme in die einzelnen aufgaben        2-5 unterteilt um es leichter zu machen. Ebenfalls nicht zu erwaehnen ist, dass gg Funktionen vorher im header definiert wurden.
Nummer 2:
	Der Differenzierungsoperator prueft an dieser Stelle nur ob die angefragte Position innerhalb der Grenzen liegt und gibt ansonsten
	diese Stelle rurueck. Dies ist prinzipiel eqivalent zwischen Matrix und Vektor, wobei der rueckgabewert variiert.
Nummer 3:
	+/- operator vom Vector:
		prueft die grenzen und erstellt mithilfe des copy-constructors einen neuen Vector. Dieser wird in einer schleife auf
		den wert der Differenz/Summe der beiden eingegebenen Vectoren gesetzt und zurueckgegeben
	+/- operator der Matrix:
		prinzipiel das selbe, nur ist eine weitere Schleife von noeten um durch die gesamte Matrix zu itterieren. 
	= operator vom Vector:
		prueft die grenzen und ob beide Vectoren identisch sind, itteriert durch den Vector und setzt den Vector
		auf der linken seite der Eingabe auf die Werte des rechten und gibt diesen zurueck.
	= operator der Matrix:
		das selbe in gruen, itteriert aber wieder durch zwei schleifen hindurch
Nummer 4:
	Skalarprodukt:
		prueft die Grenzen, erzeugt einen double und berechnet diesen in einer geeineten Schleife, wobei der double d immer wieder 
		ueberschrieben wird, bis er am Ende zurueckgegeben wird
	Vector mit double:
		initialisiert einen Vector der selben groeße des eingangvectors und ueberschreibt diesem mit dem produkt aus Vectorkomponente 
		und dem gg double. Anschließend wird der neue Vector zurueckgegeben,
	Matrixprodukt:
		prueft die Grenzen und initialisiert einen neuen Vector der selben groeße. Anschließend wird in einer geeigneten Schleife
		jeweils eine zeile der Matrix mit der Spalte eines Vectors skalar multipliziert und auf das jeweilige Element des neuen 
		Vektors gegeben. Dieser wird anschließend zurueckgegeben
Nummer 5:
	Norm:
		Da beide wieder aehnlich sind, spare ich mir an dieser Stelle die differenzierung zwischen Matrix und Vector.
		es wird jedes Element in spalte und zeile mit sich selbst multipliziert und nacheinander auf einen double addiert.
		Anschließend wird die wurzel dieses doubles gezogen und zurueckgegeben.
Nummer 6:
	zu jedem "test" ein dump() mit entsprechendem cout;

Musterausgabe/die initialisierten werte werden jeweils in der test funktion initialisiert:
matrix subtration
matrix m
3
4
7
-3
matrix n
12
44
3
-1
matrix m-n
-9
-40
4
-2
matrix addition
matrix m
3
4
7
-3
matrix n
12
44
3
-1
matrix m+n
15
48
10
-4
vector subtration
vector x
1
4
vector y
1
12
vector x-y
0
-8
vector addition
vector x
1
4
vector y
1
12
vector x+y
2
16
vector skalar
vector x
1
4
vector y
8
12
skalar= 56
vector multiplikation double
vector x
1
4
mit dem double 2
2
8
matrix multiplikation vector
matrix
2
3
4
5
vector
matrix multiplikation vector
16
28
norm vom vektor
2
2
2
2
norm
4
norm vom matrix
2
2
2
2
norm
4
copyvonstructor vector
v=1
2
3

v1(aus v copiert)=1
2
3

copyvonstructor matrix
m=0
1
2
10
11
12
20
21
22

m2(aus m)=0
1
2
10
11
12
20
21
22

Matrix mit element[2][3]=7
0
0
0
0
0
7
0
0
0

