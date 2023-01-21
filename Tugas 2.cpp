#include <iostream>
#define MAX 6

using namespace std;
int front = 0;
int back = 0;

string dataantrian[MAX];

bool isFullArray() { //cek antrian penuh atau tidak
    if(back==MAX) 
        return true;
    else 
        return false;
}
bool isEmptyArray() { // cek antrian kosong atau tidak
    if(back==0) 
        return true;
    else 
        return false;
}

void enqueueArray(string data) { // penambahan data antrian
    //di cek dlu full apa ga
    if(isFullArray()) {
        cout << "Antrian sudah Penuh" << endl;
    }
    else {
        if(isEmptyArray()) {
        dataantrian[0] = data;
        back++;
        front++;
        }
        else {
        dataantrian[back] = data;
        back++; 
        }
    }
}

int countArray(){ // count
    if(isEmptyArray()) {
        return 0;
    }
    else if(isFullArray()) {
        return MAX;
    }
    else return back;
        
}

//display
void viewArray() {
    cout << " ==============================="<< endl;
    cout << "     Data Antrian Kelompok 5    " << endl;
    cout << " ==============================="<<endl;
    if(isEmptyArray()) {
            cout << "Antrian Kosong" << endl; 
    }
    else {
        for(int i = 0; i<MAX; i++) {
        
        //jika ruang tidak kosong
            if(dataantrian[i] != "") {
                cout << " Nomor Antrian " << i+1 << " : " << dataantrian[i] <<endl;
            }
        //jika ruang kosong
            else {
                cout << " Nomor Antrian " << i+1 << " : "<< "(kosong)" <<endl;
            }
        }
    }
    cout << " jumlah antrian : " << countArray() << " data." << endl;
    cout << endl << endl;
}

void dequeueArray() { //menghapus data depan
    if(isEmptyArray()) {
        cout << "Antrian Kosong" << endl; 
    }
    else {
       for(int i=0; i<back; i++) {
            dataantrian[i] = dataantrian[i+1];
       }
       back--;
    }
}

 //cleare queue
void destroyArray() {
    if(isEmptyArray()) {
        cout << "Antrian Kosong" << endl; 
    }
    else {
       for(int i=0; i<back; i++) {
            dataantrian[i] = "";
       }
       front=0;
       back=0;
    }
}

int main() {

    enqueueArray("Adinne Islamiyati");
    enqueueArray("Ramadanti Indah Safitri");
    enqueueArray("Muhammad Izzat Jauhari");
    enqueueArray("Iqbal Khadavi");
    enqueueArray("Iqbal Khadavi");
    viewArray();

    dequeueArray();
    viewArray();
    
    dequeueArray();
    viewArray();
    
}
