/* Runtime dump - MFCaptionLabel
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFCaptionLabel : UIView
{
    char _needsLabelUpdate;
    void * _addressBook;
    NSArray * _toRecipients;
    NSArray * _ccRecipients;
    NSArray * _bccRecipients;
    UILabel * _recipientLabel;
    UIButton * _moreButton;
}

@property (nonatomic) void * addressBook;
@property (retain, nonatomic) NSArray * toRecipients;
@property (retain, nonatomic) NSArray * ccRecipients;
@property (retain, nonatomic) NSArray * bccRecipients;
@property (readonly, nonatomic) struct CGPoint baselinePoint;
@property (retain, nonatomic) NSString * text;
@property (retain, nonatomic) UIFont * font;
@property (readonly, nonatomic) UILabel * recipientLabel;
@property (readonly, nonatomic) UIButton * moreButton;

+ (MFCaptionLabel *)_propertiesThatNeedLabelUpdates;
+ (MFCaptionLabel *)defaultFont;

- (MFCaptionLabel *)initWithAddressBook:(void *)arg0;
- (void)setAddressBook:(void *)arg0;
- (NSArray *)toRecipients;
- (NSArray *)ccRecipients;
- (void)setToRecipients:(NSArray *)arg0;
- (void)setCcRecipients:(NSArray *)arg0;
- (void)setBccRecipients:(NSArray *)arg0;
- (NSArray *)bccRecipients;
- (id)_stringAtIndexForCombinedRecipientLists:(unsigned int)arg0;
- (void)_setNeedsLabelUpdate;
- (UILabel *)recipientLabel;
- (UIButton *)moreButton;
- (MFCaptionLabel *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setFont:(UIFont *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)sizeToFit;
- (void)_updateLabel;
- (UIFont *)font;
- (NSObject *)viewForBaselineLayout;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (struct CGPoint)baselinePoint;
- (void)clear;
- (void *)addressBook;

@end
