https://replit.com/@MUHAMMAD-DANUD1/Program-Semester-2-Modul9

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

-----------------------

procedure DeQueue(input/output Q: Antrian, output X: TInfo)
    //-declare
    k: integer
    
    //-algorithm
    X ← Q.arrQ[Q.head]
    if (Q.tail ≠ Q.head) then
        for k ← 2 to q.tail do 
            Q.arrQ[k-1] ← Q.arrQ[k]
        endfor
        Q.tail ← Q.tail-1
    else 
        Q.tail ← 0
        Q.head ← 0
    endif

