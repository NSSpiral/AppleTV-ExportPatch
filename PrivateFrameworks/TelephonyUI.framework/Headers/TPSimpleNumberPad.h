/* Runtime dump - TPSimpleNumberPad
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPSimpleNumberPad : TPNumberPad
{
    UIButton * _deleteButton;
    char _showsDeleteButton;
    <TPSimpleNumberPadDelegate> * _delegate;
}

@property <TPSimpleNumberPadDelegate> * delegate;
@property (nonatomic) char showsDeleteButton;

+ (TPSimpleNumberPad *)_numberPadCharacters;

- (void)setShowsDeleteButton:(char)arg0;
- (void)buttonUp:(id)arg0;
- (TPSimpleNumberPad *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<TPSimpleNumberPadDelegate> *)arg0;
- (<TPSimpleNumberPadDelegate> *)delegate;
- (void)setNumberButtonsEnabled:(char)arg0;
- (TPSimpleNumberPad *)initWithButtons:(NSArray *)arg0;
- (void)_deleteButtonClicked:(id)arg0 withEvent:(Event *)arg1;
- (void)_updateDeleteButton;
- (char)showsDeleteButton;

@end
