function main() {
    var line1 = 'AtCoder';
    // const line1: string = 'AcycliC';
    var S = line1;
    var flag = isAC(S);
    console.log(flag ? 'AC' : 'WA');
}
function isAC(str) {
    if (str[0] !== 'A')
        return false;
    if ((str.slice(2, -1).match(/C/g) || []).length !== 1)
        return false;
    if ((str.match(/[A-Z]/g) || []).length !== 2)
        return false;
    return true;
}
main();
