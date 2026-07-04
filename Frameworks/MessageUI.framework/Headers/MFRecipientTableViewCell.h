/* Runtime dump - MFRecipientTableViewCell
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecipientTableViewCell : UITableViewCell
{
    MFRecipientTableViewCellTitleView * _titleView;
    MFRecipientTableViewCellDetailView * _detailView;
    MFComposeRecipient * _recipient;
    UIImageView * _cellImageView;
    UIColor * _tintColor;
    char _shouldVerticallyCenterTitleLabel;
    char _shouldHighlightCompleteMatches;
    char _shouldDimIrrelevantInformation;
}

@property (nonatomic) char shouldHighlightCompleteMatches;
@property (nonatomic) char shouldDimIrrelevantInformation;

+ (float)heightWithRecipient:(MFComposeRecipient *)arg0 width:(float)arg1;
+ (UIColor *)_defaultTintColor;
+ (float)_deviceSpecificLayoutMargin;
+ (float)_realDetailButtonAccessoryMargin;
+ (float)_constrainedWidthForTitleViewWithAccessoryWidth:(float)arg0 containerWidth:(float)arg1;
+ (float)_constrainedWidthForDetailViewWithAccessoryWidth:(float)arg0 containerWidth:(float)arg1;
+ (MFRecipientTableViewCell *)_attributedStringRepresentationOfCompleteMatchesForRecipient:(id)arg0 constrainedToWidth:(float)arg1 overflowRecipients:(id *)arg2 useHighlighting:(id)arg3;
+ (NSString *)_tintedAttributedString:(NSString *)arg0 toColor:(UIColor *)arg1 shouldDim:(char)arg2;
+ (MFRecipientTableViewCell *)_copyAttributedStringRepresentationOfGroupRecipient:(id)arg0 withSortedRecipientList:(NSArray *)arg1;
+ (MFRecipientTableViewCell *)_attributedStringRepresentationOfPartialEmailMatchForSingleRecipient:(id)arg0 useHighlighting:(char)arg1;
+ (NSString *)identifier;
+ (float)height;
+ (MFRecipientTableViewCell *)cellForRecipient:(id)arg0;

- (void)setRecipient:(MFComposeRecipient *)arg0;
- (void)setShouldHighlightCompleteMatches:(char)arg0;
- (void)setShouldDimIrrelevantInformation:(char)arg0;
- (struct CGRect)_frameForTitleView;
- (struct CGRect)_frameForDetailView;
- (char)shouldHighlightCompleteMatches;
- (void)setTintColor:(UIColor *)arg0 animated:(char)arg1;
- (void)setCellImage:(UIImage *)arg0 highlightedImage:(UIImage *)arg1;
- (char)shouldDimIrrelevantInformation;
- (void)setOpaque:(char)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (void)layoutSubviews;
- (MFRecipientTableViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (UIColor *)tintColor;
- (MFComposeRecipient *)recipient;

@end
