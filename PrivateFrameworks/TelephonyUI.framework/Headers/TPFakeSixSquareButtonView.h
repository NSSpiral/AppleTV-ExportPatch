/* Runtime dump - TPFakeSixSquareButtonView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPFakeSixSquareButtonView : UIView
{
    char _onlyShowsFourButtons;
}

@property (nonatomic) char onlyShowsFourButtons;

- (TPFakeSixSquareButtonView *)initWithFrame:(struct CGRect)arg0;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)totalSize;
- (char)onlyShowsFourButtons;
- (void)_addButtonAtPosition:(int)arg0 withIcon:(UIImage *)arg1 title:(NSString *)arg2;
- (void)addButtons;
- (void)setOnlyShowsFourButtons:(char)arg0;

@end
