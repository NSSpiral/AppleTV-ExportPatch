/* Runtime dump - CNContactStyle
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactStyle : NSObject
{
    char _usesOpaqueBackground;
    UIColor * _textColor;
    UIColor * _placeholderTextColor;
    UIColor * _backgroundColor;
    UIColor * _separatorColor;
    UIColor * _sectionBackgroundColor;
    UIColor * _selectedCellBackgroundColor;
    int _separatorStyle;
    int _barStyle;
    int _separatorBackdropOverlayBlendMode;
    int _keyboardAppearance;
}

@property (retain, nonatomic) UIColor * textColor;
@property (readonly, nonatomic) UIColor * placeholderTextColor;
@property (retain, nonatomic) UIColor * backgroundColor;
@property (retain, nonatomic) UIColor * separatorColor;
@property (retain, nonatomic) UIColor * sectionBackgroundColor;
@property (retain, nonatomic) UIColor * selectedCellBackgroundColor;
@property (nonatomic) int separatorStyle;
@property (nonatomic) int barStyle;
@property (nonatomic) char usesOpaqueBackground;
@property (nonatomic) int separatorBackdropOverlayBlendMode;
@property (nonatomic) int keyboardAppearance;

- (UIColor *)sectionBackgroundColor;
- (void)setSectionBackgroundColor:(UIColor *)arg0;
- (UIColor *)selectedCellBackgroundColor;
- (void)setSelectedCellBackgroundColor:(UIColor *)arg0;
- (void)setUsesOpaqueBackground:(char)arg0;
- (void)setSeparatorBackdropOverlayBlendMode:(int)arg0;
- (char)usesOpaqueBackground;
- (int)separatorBackdropOverlayBlendMode;
- (UIColor *)placeholderTextColor;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIColor *)backgroundColor;
- (CNContactStyle *)init;
- (void)setTextColor:(UIColor *)arg0;
- (void)setBarStyle:(int)arg0;
- (int)barStyle;
- (UIColor *)separatorColor;
- (void)setSeparatorStyle:(int)arg0;
- (void)setSeparatorColor:(UIColor *)arg0;
- (int)separatorStyle;
- (UIColor *)textColor;
- (int)keyboardAppearance;
- (void)setKeyboardAppearance:(int)arg0;

@end
