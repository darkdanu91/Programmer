procedure EnQueue(input/output Q: Antrian, input X: TInfo)
    //-algorithm
    if emptyQ(Q) then 
        Q.head ← 1 
        Q.tail ← 1 
        Q.arrQ[Q.tail] ← X 
    else 
        if Q.tail < nMax then 
            Q.tail ← Q.tail+1 
            Q.arrQ[Q.tail] ← X 
        else 
            write("overflow")
        endif 
    endif
