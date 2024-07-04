def solution(bandage, health, attacks):
    con = 0
    i = 0
    left = health
    T = attacks[len(attacks)-1][0]
    for t in range(0,T+1):
        if t != attacks[i][0]:
            if left == health:
                continue
            elif left < health:
                left += bandage[1]
                con += 1
                if (con == bandage[0]):
                    left += bandage[2]
                    con = 0
                if left > health:
                    left = health
        else:
            left -= attacks[i][1]
            i += 1
            con = 0
            if left <= 0:
                return -1
    return left
                        
                
        
    