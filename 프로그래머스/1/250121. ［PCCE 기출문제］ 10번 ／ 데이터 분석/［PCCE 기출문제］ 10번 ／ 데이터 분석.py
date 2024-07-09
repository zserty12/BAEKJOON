def solution(data, ext, val_ext, sort_by):
    dic = {"code":0,"date":1,"maximum":2,"remain":3}
    idx_1 = dic[ext]
    res = []
    for i in range(0,len(data)):
        if data[i][idx_1] < val_ext:
            res.append(data[i])
    res.sort(key = lambda x:x[dic[sort_by]])
    return res