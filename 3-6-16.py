# 0: down, 1: right, 2: up, 3: left, 4:right-down, 5: right-up, 6: left-up, 7: left-down
DX = [0, 1, 0, -1, 1, 1, -1, -1]
DY = [1, 0, -1, 0, 1, -1, -1, 1]

def main():
    H, W = map(int, input().split())
    S = [input() for i in range(H)]
    result = [[0 if v == '.' else '#' for v in row] for row in S]

    for i in range(H):
        for j in range(W):
            if S[i][j] != '.':
                continue

            for dx, dy in zip(DX, DY):
                ni, nj = i + dx, j + dy

                if ni < 0 or ni >= H or nj < 0 or nj >= W:
                    continue

                if S[ni][nj] == '#':
                    result[i][j] += 1

    for row in result:
        print(*row, sep='')

if __name__ == '__main__':
    main()
