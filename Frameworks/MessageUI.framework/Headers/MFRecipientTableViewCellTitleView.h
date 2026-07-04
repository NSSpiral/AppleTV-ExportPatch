/* Runtime dump - MFRecipientTableViewCellTitleView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecipientTableViewCellTitleView : UIView <MFTinting>
{
    NSAttributedString * _deselectedAttributedString;
    UIColor * _tintColor;
    char _shouldDim;
    char _highlighted;
    UILabel * _titleLabel;
}

@property (readonly, nonatomic) UILabel * titleLabel;
@property (nonatomic) char highlighted;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char shouldDim;

+ (MFRecipientTableViewCellTitleView *)defaultStringAttributes;
+ (NSDictionary *)highlightedStringAttributes;
+ (NSDictionary *)regularStringAttributes;
+ (float)height;

- (void)setTintColor:(UIColor *)arg0 animated:(char)arg1;
- (void)setShouldDim:(char)arg0;
- (char)shouldDim;
- (MFRecipientTableViewCellTitleView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIColor *)tintColor;
- (void)setHighlighted:(char)arg0;
- (UILabel *)titleLabel;
- (char)highlighted;

@end
