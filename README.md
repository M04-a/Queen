# N Queens Problem
Proiect MAP


Codul furnizat implementează algoritmul de rezolvare a problemei N-reginelor (N-Queens). Această problemă constă în plasarea a N regine pe o tablă de șah de dimensiune NxN, astfel încât niciuna dintre ele să nu se atace reciproc. Atunci când este găsită o soluție validă, este afișată tabla cu reginele plasate și se numără soluțiile găsite în total.

place(int pos): 
-această funcție verifică dacă o regină plasată într-o poziție specifică (pos) nu se atacă cu reginele deja plasate; 
-funcția parcurge reginele deja plasate și verifică condițiile pentru o poziție validă

afisare(int n):
-funcția afișează o soluție validă pe ecran;
-caracterele "Q" reprezintă reginele, iar punctele reprezintă pozițiile libere;
![image](https://github.com/M04-a/Queen/assets/148650433/524b6498-5de5-4750-988d-6392e87fd0b0)


queen(int n):
-funcția folosește o abordare de tip backtracking pentru a încerca diferite poziții pentru fiecare regină până când găsește o soluție sau epuizează toate posibilitățile.

main():
-setează dimensiunea tablei de șah (n) la 8, apoi apelează funcția queen(n) pentru a rezolva problema;
-la final, afișează numărul total de soluții găsite.


DOCUMENTATIE:
[GEEKSFORGEEKS](https://www.geeksforgeeks.org/execution-of-c-program-using-docker-environment/),
[YOUTUBE - DOCKER TUTORIAL](https://www.youtube.com/watch?v=uYpeaN9sYVw&t=368s),
[JAVAPOINT](https://www.javatpoint.com/n-queens-problems)
