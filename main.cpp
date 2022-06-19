#include "kelompok3.cpp"
#include "Kelompok3.h"

using namespace std;

int main(int argc, char const *argv[])
{

    node *A = new node;
    A->judul = "5 CM";
    A->penulis = "Donny Dhirgantoro";

    node *B = new node;
    B->judul = "Ayat-Ayat Cinta";
    B->penulis = "?";
    node *C = new node;
    C->judul = "Bumi Manusia";
    C->penulis = "P. Ananta Toer";
    node *D = new node;
    D->judul = "Cantik Itu Luka";
    D->penulis = "Eka Kurniawan";
    node *E = new node;
    E->judul = "Laskar Pelangi";
    E->penulis = "Andrea Hirata";
    node *F = new node;
    F->judul = "Negeri 5 Menara";
    F->penulis = "Ahmad Fuadi";

    LinkedList daftarbukuku;

    daftarbukuku.insertNode(A, 1);
    daftarbukuku.insertNode(B, 2);
    daftarbukuku.insertNode(C, 3);
    daftarbukuku.insertNode(D, 4);
    daftarbukuku.printList();

    daftarbukuku.insertNode(E, 2);
    daftarbukuku.printList();

    daftarbukuku.insertNode(F, 1);
    daftarbukuku.printList();

    daftarbukuku.removeNode(6);
    daftarbukuku.printList();

    daftarbukuku.removeNode(1);
    daftarbukuku.printList();

    daftarbukuku.removeNode(3);
    daftarbukuku.printList();

    return 0;
}
