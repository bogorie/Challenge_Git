$User = Read-Host -Prompt 'Input the user name'
Write-Host "hola $User desde powershell"
echo "File version 1.0.1"
Write-Host "Equipo: Juan Pablo - Juan Camilo - Rie Kaneko - Andres Cocunubo"
(Get-WMIObject win32_operatingsystem).name

$User = Read-Host -Prompt 'Input the user name';
$SOVer = (Get-WMIObject win32_operatingsystem).version;
Write-Host "Welcome $User your operation system version is $SOVer";