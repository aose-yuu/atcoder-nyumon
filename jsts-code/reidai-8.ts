function main(): void {
  const line1: string = 'AtCoder';
  // const line1: string = 'AcycliC';
  const S: string = line1;
  const flag: boolean = isAC(S);
  console.log(flag ? 'AC' : 'WA');
}

function isAC(str: string): boolean {
  if (str[0] !== 'A') return false;
  if ((str.slice(2, -1).match(/C/g) || []).length !== 1) return false;
  if ((str.match(/[A-Z]/g) || []).length !== 2) return false;
  return true;
}

main()
