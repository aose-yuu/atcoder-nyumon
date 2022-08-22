function main() {
    var line1 = '3';
    var line2 = '2 7 4';
    var N = Number(line1);
    var array = line2.split(' ').map(function (x) { return Number(x); });
    array.sort(function (a, b) { return b - a; });
    var result = 0;
    for (var i = 0; i < N; ++i) {
        i % 2 ? result -= array[i] : result += array[i];
    }
    console.log(result);
}
main();
