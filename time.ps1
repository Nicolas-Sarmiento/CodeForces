$start = Get-Date
g++ ./HelpMath.cpp
$end = Get-Date
$duration = $end - $start
Write-Output "Tiempo de compilación: $duration"
