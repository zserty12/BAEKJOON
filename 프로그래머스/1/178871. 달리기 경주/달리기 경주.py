def solution(players, callings):
    dic = {}
    for i in range(0,len(players)):
        dic[players[i]] = i+1
    for i in range(0,len(callings)):
        rank = dic[callings[i]]
        dic[callings[i]] -= 1
        dic[players[rank-2]] += 1
        players[rank-1], players[rank-2] = players[rank-2], players[rank-1]       
        
    return players