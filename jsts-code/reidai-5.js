function main() {
    var lines = '14 2 4';
    var _a = lines.split(' ').map(function (x) { return Number(x); }), N = _a[0], A = _a[1], B = _a[2];
    console.log(N, A, B);
    var sumDigits = 0;
    for (var i = 1; i <= N; ++i) {
        var x = calcNumDigits(i);
        if (A <= x && x <= B)
            sumDigits += i;
    }
    console.log(sumDigits);
}
function calcNumDigits(n) {
    var sumDigits = 0;
    while (n > 0) {
        sumDigits += n % 10;
        n = Math.floor(n / 10);
    }
    return sumDigits;
}
main();
