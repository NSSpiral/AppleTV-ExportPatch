/* Runtime dump - ABSectionListVibrantHeaderView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABSectionListVibrantHeaderView : ABSectionListHeaderView
{
    _UIBackdropView * _backdrop;
    UIView * _plusDView;
    char _wantsPlusDLayer;
}

@property (nonatomic) char wantsPlusDLayer;

- (void)setBackdropGroupName:(NSString *)arg0;
- (void)setWantsPlusDLayer:(char)arg0;
- (char)wantsPlusDLayer;
- (ABSectionListVibrantHeaderView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFloating:(char)arg0;

@end
