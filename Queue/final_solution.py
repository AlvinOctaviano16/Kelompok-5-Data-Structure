from collections import deque

def stone_pile_game(test_cases):
    results = []
    for N, A in test_cases:
        dq = deque(A)

        if len(dq) == 1:
            results.append((1, dq[0]))
            continue

        turn = 1
        last_player = -1

        while len(dq) > 1:
            if turn == 1:
                dq.append(dq.popleft())
                if len(dq) == 1:
                    last_player = 1
                    break
                dq.popleft()
                last_player = 1
            else:
                dq.append(dq.popleft())
                if len(dq) == 1:
                    last_player = 0
                    break
                dq.append(dq.popleft())
                if len(dq) == 1:
                    last_player = 0
                    break
                dq.popleft()
                last_player = 0

            turn = 1 - turn

        results.append((last_player, dq[0]))
    
    return results

def main():
    T = int(input())
    test_cases = []
    for _ in range(T):
        N = int(input())
        A = list(map(int, input().strip().split()))
        test_cases.append((N, A))

    hasil = stone_pile_game(test_cases)
    for pemain, batu in hasil:
        print(pemain, batu)

main()
