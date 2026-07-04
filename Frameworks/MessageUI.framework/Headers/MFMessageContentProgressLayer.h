/* Runtime dump - MFMessageContentProgressLayer
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageContentProgressLayer : UIView
{
    UIActivityIndicatorView * _progressIndicator;
    UILabel * _loadingText;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) struct UIEdgeInsets edgeInsets;

- (MFMessageContentProgressLayer *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct UIEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(struct UIEdgeInsets)arg0;

@end
