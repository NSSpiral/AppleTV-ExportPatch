/* Runtime dump - PLEditOverlayTextView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLEditOverlayTextView : UIView
{
    UIView * __backgroundView;
    UILabel * __textLabel;
}

@property (copy, nonatomic) NSString * text;
@property (readonly, nonatomic) UIView * _backgroundView;
@property (readonly, nonatomic) UILabel * _textLabel;

- (PLEditOverlayTextView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (PLEditOverlayTextView *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (UIView *)_backgroundView;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (UILabel *)_textLabel;
- (void)_commonPLEditOverlayTextViewInitialization;

@end
