[Rainmeter]
Update=1000
BackgroundMode=1

@include1=#@#Variables.inc

[ChameleonDesktop]
Measure=Plugin
Plugin=Chameleon
Type=Desktop

[Luminance]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Luminance
IfCondition=Luminance > 0.6
IfTrueAction=[!SetVariable colorText "000000"][!UpdateMeter *][!Redraw]
IfFalseAction=[!SetVariable colorText "FFFFFF"][!UpdateMeter *][!Redraw]

[Variables]
fontName="Accidental Presidency"

[styleTitle]
;SolidColor=255,0,255,255
FontSize=38
FontColor=#colorText#

MeasureName=Luminance
DynamicVariables=1

FontFace=#fontName#
AntiAlias=1

Padding=-5,0,0,0

[styleSmallTitle]
;SolidColor=255,128,128,255
FontSize=18
FontColor=#colorText#

MeasureName=Luminance
DynamicVariables=1

FontFace=#fontName#
AntiAlias=1

[styleValue]
;SolidColor=255,128,128,255
FontSize=18
FontColor=#colorText#

MeasureName=Luminance
DynamicVariables=1

FontFace=#fontName#
AntiAlias=1

StringAlign=Right
X=162
Y=0
