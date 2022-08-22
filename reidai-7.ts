function main(): void {
  const line1: string = '3';
  const line2: string = '2 7 4';
  const N: number = Number(line1);
  const array: Array<number> = line2.split(' ').map(x => Number(x));

  array.sort((a, b) => b - a);

  let result: number = 0;
  for (let i = 0; i < N; ++i) {
    i % 2 ? result -= array[i] : result += array[i];
  }
  console.log(result);
}

main()
