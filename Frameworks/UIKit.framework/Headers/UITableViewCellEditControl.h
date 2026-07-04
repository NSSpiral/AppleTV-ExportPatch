/* Runtime dump - UITableViewCellEditControl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellEditControl : UIControl
{
    UITableViewCell * _cell;
    UIImageView * _imageView;
    _UITableViewCellEditControlMinusView * _minusView;
    UIImageView * _shadowView;
    id _style;
    id _rotated;
    id _rotating;
    id _hiding;
    id _reserved;
}

@property (nonatomic) char rotated;
@property (nonatomic) char hiding;

+ (struct CGSize)defaultSize;
+ (UIImage *)_multiSelectNotSelectedImage;
+ (UITableViewCellEditControl *)_deleteImageBackground:(float)arg0;
+ (struct CGRect)_minusRect;
+ (UIImage *)_deleteImage:(float)arg0;
+ (UIImage *)_insertImage:(float)arg0;
+ (UIImage *)_multiSelectHighlightedImage;
+ (UIImage *)_multiSelectSelectedImage;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (char)isRotating;
- (void)setHighlighted:(char)arg0;
- (void)_multiselectColorChanged;
- (void)setSelected:(char)arg0;
- (UIImage *)_currentImage;
- (void)_toggleRotateAnimationDidStop:(id)arg0 finished:(char)arg1;
- (void)setHiding:(char)arg0;
- (char)isHiding;
- (char)isRotated;
- (UIImage *)_shadowImage;
- (void)setRotated:(char)arg0;
- (void)setRotated:(char)arg0 animated:(char)arg1;
- (UITableViewCellEditControl *)initWithTableViewCell:(NSObject *)arg0 editingStyle:(int)arg1;
- (void)_updateImageView;
- (_UITableViewCellEditControlMinusView *)_minusView;
- (void)_toggleRotate;

@end
