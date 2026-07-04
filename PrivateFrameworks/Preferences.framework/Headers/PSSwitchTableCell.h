/* Runtime dump - PSSwitchTableCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSwitchTableCell : PSControlTableCell
{
    UIActivityIndicatorView * _activityIndicator;
}

@property (nonatomic) char loading;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setValue:(NSObject *)arg0;
- (void)prepareForReuse;
- (char)loading;
- (char)canReload;
- (void)reloadWithSpecifier:(PSSpecifier *)arg0 animated:(char)arg1;
- (PSSwitchTableCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (void)refreshCellContentsWithSpecifier:(PSSpecifier *)arg0;
- (void)setCellEnabled:(char)arg0;
- (id)newControl;
- (id)controlValue;
- (void)setLoading:(char)arg0;

@end
