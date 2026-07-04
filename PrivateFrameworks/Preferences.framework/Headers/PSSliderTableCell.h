/* Runtime dump - PSSliderTableCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSliderTableCell : PSControlTableCell
{
    UIView * _disabledView;
}

- (void)dealloc;
- (void)layoutSubviews;
- (void)setValue:(NSObject *)arg0;
- (NSString *)titleLabel;
- (void)prepareForReuse;
- (char)canReload;
- (PSSliderTableCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (void)refreshCellContentsWithSpecifier:(PSSpecifier *)arg0;
- (void)setCellEnabled:(char)arg0;
- (id)newControl;
- (id)controlValue;

@end
