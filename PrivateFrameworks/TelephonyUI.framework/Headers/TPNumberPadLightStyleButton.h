/* Runtime dump - TPNumberPadLightStyleButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPNumberPadLightStyleButton : TPNumberPadButton

+ (float)horizontalPadding;
+ (TPNumberPadLightStyleButton *)imageForCharacter:(unsigned int)arg0;
+ (TPNumberPadLightStyleButton *)imageForCharacter:(unsigned int)arg0 highlighted:(char)arg1;
+ (float)verticalPadding;
+ (float)highlightCrossfadeNormalBeginTime;
+ (float)highlightCrossfadeHighlightBeginTime;
+ (float)highlightCrossfadeNormalFadeDuration;
+ (float)highlightCrossfadeHighlightFadeDuration;
+ (float)unhighlightCrossfadeNormalBeginTime;
+ (float)unhighlightCrossfadeHighlightBeginTime;
+ (float)unhighlightCrossfadeNormalFadeDuration;
+ (float)unhighlightCrossfadeHighlightFadeDuration;
+ (char)usesTelephonyGlyphsWhereAvailable;

- (UIColor *)defaultColor;
- (TPNumberPadLightStyleButton *)initForCharacter:(unsigned int)arg0;

@end
