#include <iostream>
using namespace std;

class SortingAlgorithm
{
public:
    virtual void sort() const = 0;
};

class Merge : public SortingAlgorithm
{
public:
    virtual void sort() const
    {
        cout << "Merge sort()" << endl;
    }
};

class Quick : public SortingAlgorithm
{
public:
    virtual void sort() const
    {
        cout << "Quick sort()" << endl;
    }
};

class Heap : public SortingAlgorithm
{
public:
    virtual void sort() const
    {
        cout << "Heap sort()" << endl;
    }
};

class SearchingAlgorithm
{
public:
    virtual void search() const = 0;
};

class Sequential : public SearchingAlgorithm
{
public:
    virtual void search() const
    {
        cout << "Sequential search()\n";
    }
};

class BinaryTree : public SearchingAlgorithm
{
public:
    virtual void search() const
    {
        cout << "BinaryTree search()\n";
    }
};

class HashTable : public SearchingAlgorithm
{
public:
    virtual void search() const
    {
        cout << "HashTable search()\n";
    }
};

class Collection
{
private:
    SortingAlgorithm *sortingAlgorithm;
    SearchingAlgorithm *searchingAlgorithm;

public:
    Collection() {}
    void set_sort(SortingAlgorithm *s)
    {
        sortingAlgorithm = s;
    }
    void set_search(SearchingAlgorithm *s)
    {
        searchingAlgorithm = s;
    }
    void sort() const
    {
        sortingAlgorithm->sort();
    }
    void search() const
    {
        searchingAlgorithm->search();
    }
};

int main()
{
    Merge merge;
    Quick quick;
    Heap heap;

    Sequential sequential;
    BinaryTree binaryTree;
    HashTable hashTable;

    Collection colA;
    colA.set_sort(&merge);
    colA.sort();

    Collection colB;
    colB.set_search(&binaryTree);
    colB.search();

    return 0;
}