/* Runtime dump - PSBadgedTableCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBadgedTableCell : PSTableCell
{
    UIImageView * _badgeImageView;
    UILabel * _badgeNumberLabel;
    int _badgeInt;
}

+ (NSObject *)reuseIdentifierForClassAndType:(int)arg0;
+ (float)badgePadding;
+ (UIColor *)badgeNumberLabelHighlightedTextColor;
+ (UIColor *)badgeNumberLabelTextColor;
+ (UIImage *)unreadBubbleImage;
+ (UIImage *)unreadBubbleHighlightedImage;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setHighlighted:(char)arg0 animated:(char)arg1;
- (void)setSelected:(char)arg0 animated:(char)arg1;
- (PSBadgedTableCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (void)refreshCellContentsWithSpecifier:(PSSpecifier *)arg0;
- (void)badgeWithInteger:(int)arg0;
- (void)resetLocale;

@end
