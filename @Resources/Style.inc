[Rainmeter]
Update=1000
BackgroundMode=1

@include1=#@#Variables.inc

[ChameleonDesktop]
Measure=Plugin
Plugin=Chameleon
Type=Desktop
CropX=#PosX#
CropY=#PosY#
CropW=#LumWidth#
CropH=#LumHeight#

[FontLuminance]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Luminance
IfCondition=FontLuminance > 0.5
IfTrueAction=[!SetVariable colorText "FFFFFF"][!UpdateMeter *][!Redraw]
IfFalseAction=[!SetVariable colorText "FFFFFF"][!UpdateMeter *][!Redraw]
IfCondition2=FontLuminance > 0.5
IfTrueAction2=[!SetVariable fontEffectColor "00000080"][!UpdateMeter *][!Redraw]
IfFalseAction2=[!SetVariable fontEffectColor "00000080"][!UpdateMeter *][!Redraw]

[Variables]
fontName="Accidental Presidency"

[styleTitle]
;SolidColor=255,0,255,255
FontSize=38
FontColor=#colorText#

StringEffect=Border
FontEffectColor=#fontEffectColor#

MeasureName=FontLuminance
DynamicVariables=1

FontFace=#fontName#
AntiAlias=1

Padding=-5,0,0,0

[styleSmallTitle]
;SolidColor=255,128,128,255
FontSize=18
FontColor=#colorText#

StringEffect=Border
FontEffectColor=#fontEffectColor#

MeasureName=FontLuminance
DynamicVariables=1

FontFace=#fontName#
AntiAlias=1

[styleValue]
;SolidColor=255,128,128,255
FontSize=18
FontColor=#colorText#

StringEffect=Border
FontEffectColor=#fontEffectColor#

MeasureName=FontLuminance
DynamicVariables=1

FontFace=#fontName#
AntiAlias=1

StringAlign=Right
X=162
Y=0
