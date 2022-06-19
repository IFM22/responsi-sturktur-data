//pemanggilan atau import library dan file header
#include "Kelompok3.h"
#include <iostream>
#include <cstdlib>

//pemanggilan fungsi objek dari penggunaan namespace std
using namespace std;

LinkedList::LinkedList()
{ //method khusus yang akan dieksekusi pada saat pembuatan objek (instance).
    head = new node();
    head->judul = "head (no judul data)";
    head->penulis = "head (no penulis data)";
    head->next = NULL;
    listLength = 0;
    cout << "\t\t TUGAS RESPONSI " << endl;
    cout << "\t\t   KELOMPOK 3"<<endl;
    cout <<"\t\tDAFTAR LIST BUKU"<<endl;
    cout << "----------------------------------------------------";
}

//Setter menambahkan node ke daftar pada posisi tertentu.
//Mengambil posisi node dan daftar sebagai parameter.
//Posisi harus antara 1 dan jumlah node data.
//Mengembalikan true jika operasi berhasil.
bool LinkedList::insertNode(node *newNode, int position)
{ //setter atau pengirim akan menambahkan ke node tertentu
    if ((position <= 0) || (position > listLength + 1))
    { // fungsi setter mengembalikan false jika operasi yang dilakukan salah
        cout << "Error" << endl;
        return false;
    }
    if (!head->next)
    { //pengecekkan data apakah data selanjutnya kosong atau ada datanya
        head->next = newNode;
        listLength++;
        cout << endl;
        cout << "Sukses        = Ditambahkan " << newNode->judul << " ke posisi " << position << ".\n";
        cout << "listLength    = " << listLength << endl;
        return true;
    }

    int count = 0;
    node *p = head;
    node *q = head;
    while (q)
    { //melakukan penelusuran data yang ada pada node yang dilakukan penelusuran data tersebut
        if (count == position)
        { ///pengecekan data apabila data sama dengan nilai iterasi atau pengulangan yang dilakukan
            p->next = newNode;
            newNode->next = q;
            listLength++;
            cout << endl;
            cout << "Sukses     =  Ditambahkan " << newNode->judul << " ke posisi " << position << ".\n";
            cout << "listLength = " << listLength << endl;
            return true;
        }
        p = q;
        q = p->next;
        count++;
    }

    if (count == position)
    { ///pengecekan data apabila data sama dengan nilai iterasi atau pengulangan yang dilakukan
        p->next = newNode;
        newNode->next = q;
        listLength++;
        cout << endl;
        cout << "Sukses        = Ditambahkan " << newNode->judul << " ke posisi " << position << ".\n";
        cout << "listLength    = " << listLength << endl;
        return true;
    }
	
	cout << endl;
    cout << "Error" << endl;
    return false;
}

//Setter menghapus node dengan posisi yang diberikan.
//Mengembalikan true jika operasi berhasil.
bool LinkedList::removeNode(int position)
{ //fungsi setter dari menghapus data berdasarkan posisi yang didapatkan
    if ((position <= 0) || (position > listLength + 1))
    {
        cout << "Error" << endl;
        return false;
    }
    if (!head->next)
    {
        cout << "Error" << endl;
        return false;
    }

    int count = 0;
    node *p = head;
    node *q = head;
    while (q)
    {
        if (count == position)
        {
            p->next = q->next;
            cout <<endl;
            cout << "Judul yang dihapus   = " << q->judul << endl;
            cout << "Penulis yang dihapus = " << q->penulis << endl;
            delete q;
            listLength--;
            cout << "Sukses               = posisi " << position << " telah di hapus" << endl;
            cout << "listLength           = " << listLength << endl;
            return true;
        }
        p = q;
        q = p->next;
        count++;
    }

    cout << "Error" << endl;
    return false;
}

//Mencetak setiap node dalam daftar dalam urutan berturut-turut,
//mulai dari kepala dan berakhir di ekor.
//Mencetak data daftar ke konsol.
void LinkedList::printList()
{ //fungsi untuk menampilakan data berdasarkan penelusuran data yang dilakukan
    int count = 0;

    cout << "\n-----------------------------------------------\n";
    cout << "               Daftar List Buku                \n";

    node *p = head;
    node *q = head;

    while (q)
    {
        p = q;
        cout << "-----------------------------------------------\n";
        cout << "\t posisi   : " << count << "\n";
        cout << "\t Judul    : " << p->judul << "\n";
        cout << "\t Penulis  : " << p->penulis << "\n";
        cout << "-----------------------------------------------\n";
        q = p->next;
        count++;
    }
}

//Destructor untuk mengalokasikan memori yang digunakan oleh daftar.
LinkedList::~LinkedList()
{ //fungsi untuk dealokasi memori program yang berjalan
    node *p = head;
    node *q = head;
    while (q)
    {
        p = q;
        q = p->next;
        delete p;
    }
    
    cout << endl;
    cout << "Sukses = daftar list buku telah dihapus" << endl;
}
