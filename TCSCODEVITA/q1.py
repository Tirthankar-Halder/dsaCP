board=[]
for i in range(10):
    if i%2==0:
        board.extend(input().split())
    else: board.extend(input().split()[::-1])
board.reverse()
board.insert(0,'0')
inp=list(map(int, input().split()))

pos=0
sf=0
lf=0
trav=0
ind=len(inp)
while trav<ind:
    if "S(" in board[pos]:
        pos=int(board[pos][2:-1])
        sf+=1
        print("In snake")
    elif 'L(' in board[pos]:
        pos=int(board[pos][2:-1])
        lf+=1
        print("In ladder")
    else:
        print("In else")
        #print("i:",i)
        pos+=inp[trav]
        trav+=1
    print("pos:",pos)
if "S(" in board[pos]:
    pos=int(board[pos][2:-1])
    sf+=1
    print("In snake")
elif 'L(' in board[pos]:
    pos=int(board[pos][2:-1])
    lf+=1
    print("In ladder")
if pos==100:
    print("Possible",sf,lf,end="")
else:
    print("Not Possible",sf,lf,pos,end="")