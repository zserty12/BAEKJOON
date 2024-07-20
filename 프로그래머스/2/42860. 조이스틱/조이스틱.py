def solution(name):
    spell_cnt = 0
    pos_cnt = len(name)-1
    for i, spell in enumerate(name):
        spell_cnt += min(ord(spell)-ord('A'), ord('Z')-ord(spell)+1)
        
        idx = i+1
        while idx < len(name) and name[idx] == 'A':
            idx += 1
        pos_cnt = min([pos_cnt,2*i+len(name)-idx,2*(len(name)-idx)+i])
    return spell_cnt+pos_cnt
            