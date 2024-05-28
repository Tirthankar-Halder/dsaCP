from itertools import chain as chn

board=[]
for i in range(10):
    r=input().split()
    if i%2==0:
        board.insert(0, r[::-1])
    else:
        board.insert(0, r)

flatBoard=list(chn.from_iterable(board))
inp=[int(i) for i in input().split()]
cur_pos=-1
snakes=0
ladders=0
flag=0

for move in inp:
    cur_pos+=move
    if flatBoard[cur_pos]=="End":
        flag=1
        print("Possible", snakes, ladders)
        break
    elif flatBoard[cur_pos][0]=="S" and flatBoard[cur_pos]!="Start":
        snakes+=1
        if(flatBoard[cur_pos][2:len(flatBoard[cur_pos])-1]=="Start") :
            cur_pos=0
        else:
            cur_pos=int(flatBoard[cur_pos][2:len(flatBoard[cur_pos])-1])-1
    elif flatBoard[cur_pos][0]=="L":
        ladders+=1
        cur_pos=int(flatBoard[cur_pos][2:len(flatBoard[cur_pos])-1])-1

if flag==0:
    print("Not possible", snakes, ladders, cur_pos+1)