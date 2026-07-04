/* Runtime dump - FontSizeSliderCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface FontSizeSliderCell : PSSliderTableCell
{
    UILabel * _smallSizeLabel;
    UILabel * _largeSizeLabel;
    UILabel * _veryLargeSizeLabel;
}

- (void)dealloc;
- (void)layoutSubviews;
- (FontSizeSliderCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (id)newControl;

@end
