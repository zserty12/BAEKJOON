def solution(operations):
    queue = []
    for i in range(0,len(operations)):
        cmd, data = operations[i].split()
        if cmd == 'I':
            queue.append(int(data))
        elif cmd == 'D':
            if len(queue) == 0: continue
            if data == '1':
                queue.remove(max(queue))
            elif data == '-1':
                queue.remove(min(queue))
    if len(queue) == 0:
        return [0,0]
    else:
        return [max(queue), min(queue)]
        