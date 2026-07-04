/* Runtime dump - CAMImageWell
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMImageWell : UIButton
{
    int _cameraOrientation;
    UIView * __containerView;
    UIImageView * __thumbnailImageView;
    UIImageView * __maskImageView;
    NSMutableArray * __dimmingViewQueue;
    NSString * __uuid;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic) int cameraOrientation;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (readonly, nonatomic) UIView * _containerView;
@property (readonly, nonatomic) UIImageView * _thumbnailImageView;
@property (readonly, nonatomic) UIImageView * _maskImageView;
@property (readonly, nonatomic) NSMutableArray * _dimmingViewQueue;
@property (retain, nonatomic) NSString * _uuid;

- (CAMImageWell *)initWithFrame:(struct CGRect)arg0;
- (CAMImageWell *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (struct UIEdgeInsets)alignmentRectInsets;
- (NSString *)_uuid;
- (struct CGSize)intrinsicContentSize;
- (UIView *)_containerView;
- (void).cxx_destruct;
- (void)_setUuid:(id)arg0;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)tappableEdgeInsets;
- (int)cameraOrientation;
- (UIImage *)_maskImage;
- (void)setThumbnailImage:(UIImage *)arg0 animated:(char)arg1;
- (void)recoverFromFailedThumbnailUpdate;
- (void)prepareForThumbnailUpdateFromCapture;
- (void)setThumbnailImage:(UIImage *)arg0 uuid:(NSString *)arg1 animated:(char)arg2;
- (void)setCameraOrientation:(int)arg0 animated:(char)arg1;
- (void)_commonCAMImageWellInitialization;
- (void)_updateThumbnailTransformFromCameraOrientation;
- (void)_removeFirstDimmingView;
- (void)_performEmitAnimationWithImage:(UIImage *)arg0 orientation:(int)arg1 withCompletionBlock:(id /* block */)arg2;
- (struct CGAffineTransform)_affineTransformForImageOrientation:(int)arg0;
- (void)setCameraOrientation:(int)arg0;
- (UIImageView *)_thumbnailImageView;
- (UIImageView *)_maskImageView;
- (NSMutableArray *)_dimmingViewQueue;

@end
