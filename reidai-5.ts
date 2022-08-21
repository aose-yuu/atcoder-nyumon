function main(): void {
  const lines: string = '14 2 4';
  const [N, A, B] = lines.split(' ').map(x => Number(x));
  console.log(N, A, B);
  let sumDigits: number = 0;
  for (let i: number = 1; i <= N; ++i) {
    const x: number = calcNumDigits(i);
    if (A <= x && x <= B) sumDigits += i;
  }
  console.log(sumDigits);
}

function calcNumDigits(n: number): number {
  let sumDigits: number = 0;
  while (n > 0) {
    sumDigits += n % 10;
    n = Math.floor(n / 10);
  }
  return sumDigits;
}

main()
