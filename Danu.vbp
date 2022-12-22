Rem prosedur nilai
Sub nilai()

Rem mengisi value suatu range/sel
Sheet1.Range("A1").Value = 1
Sheet1.Range("A2").Value = 2
Sheet1.Range("A3").Value = 3
Sheet1.Range("A4").Value = 4
Sheet1.Range("A5").Value = 5

End Sub

Rem prosedur2
Sub nilai2()

'deklarasi
Dim i As Integer

'metode
For i = 1 To 5
    'Debug.Print i //-> untuk print di immediate windows (ctrl+G)
    Sheet1.Cells(i, 1).Value = i
Next i

End Sub

Rem prosedur3
Sub jlhbuah()

'deklarasi
Dim i As Integer
Dim last As Integer

'metode
last = Sheet1.Range("A1").CurrentRegion.Rows.Count

For i = 2 To last
    If Sheet1.Cells(i, 1).Value = "anggur" Then
    
    Total = Total + Sheet1.Cells(i, 2).Value
    
    End If
Next i

    'MsgBox (Total) //-> untuk print dalam bentuk message box
    
End Sub

Rem prosedur4
Sub jlhbuah2()

'deklarasi
Dim i As Integer
Dim last As Integer

'metode
last = Sheet1.Range("A1").CurrentRegion.Rows.Count

For i = 2 To last
    If Sheet1.Cells(i, 2).Value = "" Then
        MsgBox ("ada nilai kosong")
        Exit For
    End If
Next i

End Sub

Rem prosedur nilai5
Sub nilai3()

Rem deklarasi
Dim i As Integer
Rem Dim last As Integer

Rem metode
For i = 1 To 10 Step 2
    Sheet2.Cells(i, 1).Value = i
Next i

End Sub

Rem prosedur nilai6
Sub nilai4()

Rem deklarasi
Dim i As Integer, j As Integer

For i = 1 To Workbooks.Count
    For j = 1 To Workbooks(i).Worksheets.Count
        Debug.Print Workbooks(i).Name + ": " + Worksheets(j).Name
    Next j
Next i
End Sub

