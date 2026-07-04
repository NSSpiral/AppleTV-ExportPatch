/* Runtime dump - TPNumberPadDarkStyleButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPNumberPadDarkStyleButton : TPNumberPadButton

+ (TPNumberPadDarkStyleButton *)imageForCharacter:(unsigned int)arg0;
+ (TPNumberPadDarkStyleButton *)imageForCharacter:(unsigned int)arg0 highlighted:(char)arg1;
+ (float)highlightCrossfadeNormalBeginTime;
+ (float)highlightCrossfadeHighlightBeginTime;
+ (float)highlightCrossfadeNormalFadeDuration;
+ (float)highlightCrossfadeHighlightFadeDuration;
+ (float)unhighlightCrossfadeNormalBeginTime;
+ (float)unhighlightCrossfadeHighlightBeginTime;
+ (float)unhighlightCrossfadeNormalFadeDuration;
+ (float)unhighlightCrossfadeHighlightFadeDuration;

- (UIColor *)defaultColor;

@end
