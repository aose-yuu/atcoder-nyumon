const INF: number = 1 << 30;

function main(): void {
  const line1: string = '3';
  const line2: string = '8 12 40';
  const N: number = Number(line1);
  const A: Array<number> = line2.split(' ').map(x => Number(x));

  let result: number = INF;
  for (let i = 0; i < N; ++i) {
    const x: number = howManyTimes(A[i]);
    result = Math.min(result, x);
  }
  console.log(result);
}

function howManyTimes(a: number): number {
  let count: number = 0;
  while (true) {
    if (a % 2) break;
    a = Math.floor(a / 2);
    ++count;
  }
  return count;
}

main()
