/* Runtime dump - PSSegmentTableCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSegmentTableCell : PSControlTableCell
{
    NSArray * _values;
    NSDictionary * _titleDict;
}

- (void)dealloc;
- (void)layoutSubviews;
- (void)setValue:(NSObject *)arg0;
- (NSString *)titleLabel;
- (void)setBackgroundView:(UIView *)arg0;
- (void)prepareForReuse;
- (char)canReload;
- (PSSegmentTableCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (void)refreshCellContentsWithSpecifier:(PSSpecifier *)arg0;
- (id)newControl;
- (id)controlValue;
- (void)setValues:(NSArray *)arg0 titleDictionary:(NSDictionary *)arg1;

@end
