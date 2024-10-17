int selisih(int a, int b) {
    if (a > b) {
        return a - b;
    } else {
         b - a;
    }
}

int denda_pada_hari(int hari) {
    return 1000 * selisih(jantan[hari], betina[hari]);
}
//c. return abs(a - b);
