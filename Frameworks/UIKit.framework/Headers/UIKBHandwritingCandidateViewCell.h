/* Runtime dump - UIKBHandwritingCandidateViewCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingCandidateViewCell : UICollectionViewCell
{
    TIKeyboardCandidate * _candidate;
    struct ? _visualStyling;
    UILabel * _label;
    UILabel * _secondaryLabel;
    UIKBThemedView * _themedView;
}

@property (copy, nonatomic) TIKeyboardCandidate * candidate;
@property (nonatomic) struct ? visualStyling;
@property (retain, nonatomic) UILabel * label;
@property (retain, nonatomic) UILabel * secondaryLabel;
@property (retain, nonatomic) UIKBThemedView * themedView;
@property (readonly, nonatomic) struct UIEdgeInsets edgeInsets;

+ (float)widthForCandidate:(NSDate *)arg0 visualStyling:(struct ?)arg1;
+ (NSString *)labelFontForText:(NSString *)arg0;
+ (UIFont *)secondaryLabelFont;

- (UIKBHandwritingCandidateViewCell *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)didMoveToWindow;
- (void)reloadData;
- (struct UIEdgeInsets)edgeInsets;
- (void)setHighlighted:(char)arg0;
- (void)setSelected:(char)arg0;
- (void)setCandidate:(TIKeyboardCandidate *)arg0;
- (UILabel *)label;
- (void)setLabel:(UILabel *)arg0;
- (void)_setRenderConfig:(NSObject *)arg0;
- (void)setVisualStyling:(struct ?)arg0;
- (struct ?)visualStyling;
- (TIKeyboardCandidate *)candidate;
- (void)setThemedView:(UIKBThemedView *)arg0;
- (UIKBThemedView *)themedView;
- (void)updateLabels;
- (UILabel *)secondaryLabel;
- (void)setSecondaryLabel:(UILabel *)arg0;
- (void)updateThemedView;

@end
