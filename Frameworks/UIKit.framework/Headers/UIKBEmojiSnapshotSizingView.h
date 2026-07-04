/* Runtime dump - UIKBEmojiSnapshotSizingView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBEmojiSnapshotSizingView : UIView
{
    struct CGSize _snapshotSize;
    UIView * _snapshotView;
}

@property (readonly, nonatomic) UIView * snapshotView;

- (void)dealloc;
- (void)layoutSubviews;
- (UIKBEmojiSnapshotSizingView *)initWithSnapshotView:(UIView *)arg0;
- (UIView *)snapshotView;

@end
