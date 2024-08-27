#include <iostream>

using namespace std;

int main()
{

    //const int size = 10;
    //int ededler[size];

    //srand(time(0));

    //for (int i = 0; i < size; ++i) {
    //    ededler[i] = rand() % 51 - 30;
    //    cout << ededler[i] << " ";
    //}
    //cout << endl;

    //int sum = 0;
    //bool musbet = false;

    //for (int i = 0; i < size; ++i) {
    //    if (ededler[i] > 0) {
    //        musbet = true;
    //    }
    //    else if (musbet) {
    //        sum += ededler[i];
    //    }
    //}

    //if (musbet) cout << "Birinci musbet ededden sonra gelen ededlerin cemi: " << sum << endl;
    //else cout << "Massivde musbet eded yoxdu." << endl;
    //
    //return 0;





    //const int size = 20;
    //int ededler[size];

    //srand(time(0));

    //for (int i = 0; i < size; ++i) 
    //{
    //    ededler[i] = rand() % 101 - 50;
    //    cout << ededler[i] << " ";
    //}
    //cout << endl;

    //int maxElement = ededler[0];
    //int minElement = ededler[0];
    //int maxIndex = 0;
    //int minIndex = 0;

    //for (int i = 1; i < size; ++i) 
    //{
    //    if (ededler[i] > maxElement)
    //    {
    //        maxElement = ededler[i];
    //        maxIndex = i;
    //    }
    //    if (ededler[i] < minElement) 
    //    {
    //        minElement = ededler[i];
    //        minIndex = i;
    //    }
    //}

    //cout << "Max eded: " << maxElement << " indeks: " << maxIndex << endl;
    //cout << "Min eded: " << minElement << " indeks: " << minIndex <<endl;

    //return 0;





    //const int size = 10;
    //double ededler[size];

    //cout << "10 eded kesrli eded daxil edin";
    //for (int i = 0; i < size; ++i) {
    //    cin >> ededler[i];
    //}

    //int count = 0;
    //for (int i = 0; i < size; ++i) {
    //    double number = ededler[i];

    //    if (number == (int)number) {
    //        count++;
    //    }
    //}

    //cout << "Kesr hissesi olmayan ededler: " << count << endl;

    //return 0;








    //const int size = 20;
    //int array[size];

    //srand(time(0));

    //for (int i = 0; i < size; ++i) {
    //    array[i] = rand() % 199 + 2;
    //}

    //cout << "Sade sayilar: ";
    //for (int i = 0; i < size; ++i)
    //{
    //    int num = array[i];
    //    bool sade = true;

    //    if (num <= 1) sade = false;
    //    else
    //    {
    //        for (int j = 2; j * j <= num; ++j) 
    //        {
    //            if (num % j == 0) 
    //            {
    //                sade = false;
    //                break;
    //            }
    //        }
    //    }

    //    if (sade) cout << num << " ";
    //}
    //cout << endl;

    //return 0;






    //const int size = 10;
    //int array[size];
    //srand(time(0));
    //cout << "Random massivler: ";
    //for (int i = 0; i < size; ++i) {
    //    array[i] = rand() % 100;
    //    cout << array[i] << " ";
    //}
    //cout << endl;

    //for (int i = 0; i < size / 2; ++i) {
    //    int temp = array[i];
    //    array[i] = array[size - 1 - i];
    //    array[size - 1 - i] = temp;
    //}

    //cout << "Massivin ters cevirilmis : ";
    //for (int i = 0; i < size; ++i) {
    //    cout << array[i] << " ";
    //}
    //cout << endl;

    //return 0;





    //const int size = 10;
    //int array[size];

    //srand(time(0));

    //cout << "massivin original hali: ";
    //for (int i = 0; i < size; ++i) {
    //    array[i] = rand() % 100;
    //    cout << array[i] << " ";
    //}
    //cout << endl;

    //for (int i = 0; i < size - 1; i += 2) {
    //    if (i + 1 < size) {
    //        int temp = array[i];
    //        array[i] = array[i + 1];
    //        array[i + 1] = temp;
    //    }
    //}

    //cout << "qonsu elementlerin yerlerin deyisdikden sonraki hali: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << array[i] << " ";
    //}
    //cout << endl;

    //return 0;

    


    //const int size_a = 5;
    //const int size_b = 5;
    //const int size_c = 10;

    //int A[size_a];
    //int B[size_b];
    //int C[size_c];

    //srand(time(0));

    //cout << "A nin massivi: ";
    //for (int i = 0; i < size_a; ++i) {
    //    A[i] = rand() % 100;
    //    cout << A[i] << " ";
    //}
    //cout << endl;

    //cout << "B nin massivi: ";
    //for (int i = 0; i < size_b; ++i) {
    //    B[i] = rand() % 100;
    //    cout << B[i] << " ";
    //}
    //cout << endl;

    //for (int i = 0; i < size_a; ++i) {
    //    C[2 * i] = A[i];
    //    C[2 * i + 1] = B[i];
    //}

    //cout << "C nin massivi: ";
    //for (int i = 0; i < size_c; ++i) {
    //    cout << C[i] << " ";
    //}
    //cout << endl;

    //return 0;






    //const int size = 10;
    //int numune[size] = {-3, 4, 0, -1, 5, 0, -2, 8, 0, -7};
    //int destination[size];
    //
    //int menfiIndex = 0;
    //int sifirIndex = 0;
    //int musbetIndex = 0;

    //int menfi[size];
    //int sifir[size];
    //int musbet[size];

    //for (int i = 0; i < size; ++i) {
    //    if (numune[i] < 0) {
    //        menfi[menfiIndex++] = numune[i];
    //    } else if (numune[i] == 0) {
    //       sifir[sifirIndex++] = numune[i];
    //    } else {
    //        musbet[musbetIndex++] = numune[i];
    //    }
    //}

    //int index = 0;
    //for (int i = 0; i < menfiIndex; ++i) {
    //    destination[index++] =menfi[i];
    //}
    //for (int i = 0; i <sifirIndex; ++i) {
    //    destination[index++] = sifir[i];
    //}
    //for (int i = 0; i < musbetIndex; ++i) {
    //    destination[index++] = musbet[i];
    //}

    //cout << "Source dizi: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << numune[i] << " ";
    //}
    //cout << endl;

    //cout << "Destination dizi: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << destination[i] << " ";
    //}
    //cout << endl;

    //return 0;

}


