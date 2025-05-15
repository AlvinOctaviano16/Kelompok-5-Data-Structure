from collections import deque

def stone_pile_game(test_cases):
    results = []
    for N, A in test_cases:
        dq = deque(A)
        turn = 1  

        while len(dq) > 1:
            if turn == 1:
                dq.append(dq.popleft())
                if len(dq) > 1:
                    dq.popleft()
            else:
                dq.append(dq.popleft())
                dq.append(dq.popleft())
                if len(dq) > 1:
                    dq.popleft()
            turn = 1 - turn  

        last_player = 0 if turn == 1 else 1
        results.append((last_player, dq[0]))
    
    return results
