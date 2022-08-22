var INF = 1 << 30;
function main() {
    var line1 = '3';
    var line2 = '8 12 40';
    var N = Number(line1);
    var A = line2.split(' ').map(function (x) { return Number(x); });
    var result = INF;
    for (var i = 0; i < N; ++i) {
        var x = howManyTimes(A[i]);
        result = Math.min(result, x);
    }
    console.log(result);
}
function howManyTimes(a) {
    var count = 0;
    while (true) {
        if (a % 2)
            break;
        a = Math.floor(a / 2);
        ++count;
    }
    return count;
}
main();
