/* Runtime dump - UITextFieldRoundedRectBackgroundView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextFieldRoundedRectBackgroundView : UITextFieldBackgroundView
{
    UIImageView * _leftCap;
    UIImageView * _center;
    UIImageView * _rightCap;
    UIImageView * _progressFill;
}

- (void)dealloc;
- (void)layoutSubviews;
- (void)_updateImages;

@end
