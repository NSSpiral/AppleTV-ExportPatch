/* Runtime dump - CAMFocusAttachmentView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFocusAttachmentView : UIView
{
    UILabel * __label;
    struct UIEdgeInsets _textInsets;
}

@property (nonatomic) struct UIEdgeInsets textInsets;
@property (retain, nonatomic) UILabel * _label;

- (CAMFocusAttachmentView *)initWithFrame:(struct CGRect)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setText:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setTextInsets:(struct UIEdgeInsets)arg0;
- (UILabel *)_label;
- (void)set_label:(UILabel *)arg0;
- (struct UIEdgeInsets)textInsets;

@end
