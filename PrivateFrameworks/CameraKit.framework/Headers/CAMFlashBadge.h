/* Runtime dump - CAMFlashBadge
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFlashBadge : CAMBadgeView
{
    UIImage * __contentImage;
}

@property (retain, nonatomic) UIImage * _contentImage;

- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)_commonInit;
- (void).cxx_destruct;
- (UIImage *)_maskImage;
- (struct CGSize)_imageSize;
- (struct UIEdgeInsets)_imageInsets;
- (UIImage *)_contentImage;
- (void)set_contentImage:(UIImage *)arg0;

@end
