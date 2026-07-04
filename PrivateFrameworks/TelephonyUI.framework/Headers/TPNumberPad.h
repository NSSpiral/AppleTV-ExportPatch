/* Runtime dump - TPNumberPad
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPNumberPad : UIControl
{
    NSMutableArray * _buttons;
    char _numberButtonsEnabled;
}

@property (nonatomic) char numberButtonsEnabled;
@property (retain) NSArray * buttons;
@property (nonatomic) float buttonBackgroundAlpha;

- (void)buttonDown:(id)arg0;
- (void)buttonUp:(id)arg0;
- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (void)buttonTapped:(id)arg0;
- (NSArray *)buttons;
- (void)setButtons:(NSArray *)arg0;
- (void)buttonLongPressed:(id)arg0;
- (void)replaceButton:(id)arg0 atIndex:(unsigned int)arg1;
- (void)setNumberButtonsEnabled:(char)arg0;
- (TPNumberPad *)initWithButtons:(NSArray *)arg0;
- (char)numberButtonsEnabled;
- (void)_addButton:(UIButton *)arg0;
- (void)_layoutGrid;
- (float)_backgroundAlphaOfButton:(id)arg0;
- (void)_setBackgroundAlphaOnButton:(id)arg0 alpha:(float)arg1;
- (void)buttonCancelled:(id)arg0;
- (void)buttonLongPressedViaGesture:(NSObject *)arg0;
- (float)buttonBackgroundAlpha;
- (void)setButtonBackgroundAlpha:(float)arg0;

@end
