/* Runtime dump - MFSecureMIMEPersonHeaderView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFSecureMIMEPersonHeaderView : UIView
{
    UIView * _backgroundView;
    UIView * _signedLabel;
    UIView * _secureLabel;
    UIView * _warningLabel;
    UILabel * _label;
    NSArray * _buttons;
    id _editing;
}

@property (copy, nonatomic) NSString * signedLabelText;
@property (copy, nonatomic) NSString * secureLabelText;
@property (copy, nonatomic) NSString * warningLabelText;
@property (copy, nonatomic) NSString * explanationText;
@property (copy, nonatomic) NSArray * buttons;
@property (nonatomic) char editing;

+ (NSDictionary *)_explanationLabelDefaultAttributes;

- (void)setSecureLabelText:(NSString *)arg0;
- (void)setWarningLabelText:(NSString *)arg0;
- (void)setExplanationText:(NSString *)arg0;
- (NSString *)_signedLabel;
- (void)_setText:(NSString *)arg0 forLabel:(NSString *)arg1;
- (NSString *)_secureLabel;
- (NSString *)_warningLabel;
- (void)_insert:(char)arg0 subview:(_UIVisualEffectSubview *)arg1;
- (float)heightThatFitsSubview:(id)arg0 padding:(float)arg1;
- (float)heightThatFitsMainLabel:(struct CGSize)arg0;
- (float)heightThatFitsButtons;
- (float)heightOfBottomMargin;
- (float)widthForSizingToFitSize:(struct CGSize)arg0;
- (char)showsButtons;
- (void)setSignedLabelText:(NSString *)arg0;
- (NSString *)signedLabelText;
- (NSString *)secureLabelText;
- (NSString *)warningLabelText;
- (NSString *)explanationText;
- (MFSecureMIMEPersonHeaderView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (struct CGSize)intrinsicContentSize;
- (char)editing;
- (void)setEditing:(char)arg0;
- (NSArray *)buttons;
- (void)setButtons:(NSArray *)arg0;

@end
