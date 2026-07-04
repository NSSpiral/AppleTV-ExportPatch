/* Runtime dump - UIKBSplitImageView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBSplitImageView : UIView
{
    UIImageView * _fullView;
    UIImageView * _splitLeft;
    UIImageView * _splitRight;
    NSString * _currentFilterType;
}

@property (nonatomic) NSString * filterType;

- (UIKBSplitImageView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setAlpha:(float)arg0;
- (char)_shouldInheritScreenScaleAsContentScaleFactor;
- (NSString *)filterType;
- (void)setFilterType:(NSString *)arg0;
- (void)setImage:(UIImage *)arg0 splitLeft:(UIImageView *)arg1 splitRight:(UIImageView *)arg2 keyplane:(UIKBTree *)arg3;
- (void)insertSubviewAtBottom:(id)arg0;
- (void)setImage:(UIImage *)arg0 cachedWidth:(float)arg1 keyplane:(UIKBTree *)arg2;
- (void)clearImages;

@end
