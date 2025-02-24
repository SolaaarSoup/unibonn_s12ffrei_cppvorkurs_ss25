/*
Pseudocode zu verschiedenen Sortieralgorithmen:

1. InsertionSort:
   for i = 1 to n-1 do
       key = A[i]
       j = i - 1
       while j >= 0 and A[j] > key do
           A[j+1] = A[j]
           j = j - 1
       end while
       A[j+1] = key
   end for

2. MinSort:
   for i = 0 to n-2 do
       minIndex = i
       for j = i+1 to n-1 do
           if A[j] < A[minIndex] then
               minIndex = j
           end if
       end for
       swap A[i] and A[minIndex]
   end for

3. BubbleSort:
   repeat
       swapped = false
       for i = 0 to n-2 do
           if A[i] > A[i+1] then
               swap A[i] and A[i+1]
               swapped = true
           end if
       end for
   until not swapped

4. MergeSort:
   function mergeSort(A):
       if length(A) > 1 then
           mid = length(A) / 2
           left = A[0 .. mid-1]
           right = A[mid .. end]
           mergeSort(left)
           mergeSort(right)
           merge left and right into A
       end if

5. QuickSort:
   function quickSort(A, low, high):
       if low < high then
           pivotIndex = partition(A, low, high)
           quickSort(A, low, pivotIndex-1)
           quickSort(A, pivotIndex+1, high)
       end if

   function partition(A, low, high):
       pivot = A[high]
       i = low - 1
       for j = low to high-1 do
           if A[j] <= pivot then
               i = i + 1
               swap A[i] and A[j]
           end if
       end for
       swap A[i+1] and A[high]
       return i + 1
*/

#include <iostream>
#include <algorithm>    // Für shuffle() und swap()
#include <random>       // Für default_random_engine
#include <chrono>       // Für Zeitmessung
#include <cstdlib>      // Für exit()

using namespace std;
using namespace std::chrono;



int main() {

    /*
    Zu Beginn erstellen wir ein sehr großes Array und füllen es mit den Zahlen 1 bis n
    Anschließend permutieren wir dies damit wir etwas zum sortieren haben
    Zum Testen können Sie ein kleineres Arry nehmen.
    */
    const int n = 10000000; //Benchmarkgröße
    //const int n = 1000; //Testgröße
    
    // Array initialisieren (Werte 1 bis n)
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    // Array permutieren mit konstantem Seed
    default_random_engine engine(42); // Konstanter Seed
    shuffle(arr, arr + n, engine);


    /*
    Oben sind mehrere Pseudocodes genannt von Sortier Algorithmen
    Implementieren Sie (mindestens) einen davon und messen Sie die Laufzeit
    Die schnellste Laufzeit gewinnt einen Preis
    */
    
    // Hier ist noch ein Check, ob Ihr Verfahren Funktioniert
    if (is_sorted(arr, arr + n)) {
        cout << "Das Array ist sortiert." << endl;
    } else {
        cout << "Das Array ist NICHT sortiert." << endl;
    }
    
    // Speicherfreigabe
    delete[] arr;
    return 0;
}
