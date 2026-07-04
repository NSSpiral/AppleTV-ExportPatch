/* Runtime dump - MFRecipientTableViewCellDetailView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecipientTableViewCellDetailView : UIView <MFTinting>
{
    UIColor * _tintColor;
    char _labelIsHidden;
    char _shouldDim;
    char _highlighted;
    UILabel * _labelLabel;
    UILabel * _detailLabel;
}

@property (readonly, nonatomic) UILabel * labelLabel;
@property (readonly, nonatomic) UILabel * detailLabel;
@property (nonatomic) char highlighted;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char shouldDim;

+ (MFRecipientTableViewCellDetailView *)defaultStringAttributes;
+ (NSDictionary *)highlightedStringAttributes;
+ (NSDictionary *)groupStringAttributes;
+ (NSDictionary *)labelStringAttributes;
+ (float)lineHeight;

- (UILabel *)labelLabel;
- (UILabel *)detailLabel;
- (void)setTintColor:(UIColor *)arg0 animated:(char)arg1;
- (void)setShouldDim:(char)arg0;
- (char)shouldDim;
- (void)_recalculateLabelColors;
- (MFRecipientTableViewCellDetailView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (void)layoutSubviews;
- (UIColor *)tintColor;
- (void)setHighlighted:(char)arg0;
- (char)highlighted;

@end
