int main() {
    int* ptr = new int[10];
    delete[] ptr;// if this is not here. Memory leakage starts

    ptr = new int[20];
    delete[] ptr;

    return 0;
}