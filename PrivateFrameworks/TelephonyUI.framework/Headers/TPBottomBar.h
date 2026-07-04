/* Runtime dump - TPBottomBar
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPBottomBar : UIView
{
    int _orientation;
    int _style;
}

+ (float)defaultHeight;
+ (float)defaultHeightForStyle:(int)arg0;
+ (float)defaultHeightForOrientation:(int)arg0;
+ (float)defaultHeightForStyle:(int)arg0 orientation:(int)arg1;
+ (int)fullscreenStyle;
+ (int)overlayStyle;

- (TPBottomBar *)initWithFrame:(struct CGRect)arg0;
- (TPBottomBar *)init;
- (int)orientation;
- (TPBottomBar *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (TPBottomBar *)initWithDefaultSize;
- (void)setOrientation:(int)arg0;
- (TPBottomBar *)initWithDefaultSizeForOrientation:(int)arg0;
- (void)setOrientation:(int)arg0 updateFrame:(char)arg1;

@end
