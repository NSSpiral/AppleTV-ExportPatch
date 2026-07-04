/* Runtime dump - PLExpandableImageView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLExpandableImageView : PLExpandableView
{
    PLImageView * _imageView;
    int _imageID;
    struct CGSize _originalSize;
    float _originalWidth;
    float _originalAngle;
    struct CGPoint _anchorPoint;
    float _imageRotationAngle;
    float _pinchWidth;
    float _pinchAngle;
    float _pinchScale;
    struct CGRect _initialExpandingFrame;
    struct CGRect _originalBounds;
    float _currentAngle;
    struct CGSize _centerOffset;
    PLManagedAsset * _photo;
    struct ? _exImageFlags;
}

@property (copy, nonatomic) NSString * name;
@property (readonly, nonatomic) struct CGSize imageSize;
@property (retain, nonatomic) PLVideoView * videoView;
@property (readonly, nonatomic) char showsPlaceholder;
@property (nonatomic) char borderAndAccessoriesVisible;
@property (retain, nonatomic) PLManagedAsset * photo;

+ (float)imageBorderWidth;

- (PLVideoView *)videoView;
- (void)setVideoView:(PLVideoView *)arg0;
- (PLExpandableImageView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (_UIPageViewControllerContentView *)_contentView;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (UIImage *)image;
- (void)setCenter:(struct CGPoint)arg0;
- (struct CGSize)imageSize;
- (PLImageView *)imageView;
- (void)setTransitionProgress:(float)arg0;
- (float)transitionProgress;
- (PLManagedAsset *)photo;
- (void)setPhoto:(PLManagedAsset *)arg0;
- (void)stateDidChangeFrom:(int)arg0;
- (void)beginTrackingPinch:(id)arg0;
- (float)continueTrackingPinch:(id)arg0;
- (float)completeTrackingPinch:(id)arg0 toState:(int)arg1 duration:(double)arg2;
- (void)finishTransition;
- (float)_expansionFraction;
- (void)setBorderAndAccessoriesVisible:(char)arg0;
- (PLExpandableImageView *)initWithFrame:(struct CGRect)arg0 frameStyle:(struct CGSize)arg1 withBorder:(NSString *)arg2;
- (PLExpandableImageView *)initWithFrame:(struct CGRect)arg0 frameStyle:(struct CGSize)arg1;
- (void)_setOriginalSize:(struct CGSize)arg0;
- (float)_borderAlphaForExpansionFraction:(float)arg0;
- (void)_updatePinchWidthAndScaleWithLeftPoint:(struct CGPoint)arg0 rightPoint:(struct CGPoint)arg1;
- (void)_updateBorderAndAccessoriesAlpha;
- (void)setSize:(struct CGSize)arg0 angle:(float)arg1;
- (struct CGSize)_newSizeFromSize:(struct CGSize)arg0;
- (float)_currentScale;
- (float)_expandedScale;
- (struct CGRect)_snappedExpandedFrame;
- (void)_bounceToPlace:(id)arg0 finished:(id /* block */)arg1 context:(void *)arg2;
- (void)_bounceBack:(id)arg0 finished:(id /* block */)arg1 context:(void *)arg2;
- (void)setTransformAndCenterForFrame:(struct CGRect)arg0;
- (char)isBorderAndAccessoriesVisible;
- (void)setImage:(UIImage *)arg0 isFullscreen:(char)arg1;
- (void)setPosterImage:(UIImage *)arg0 regionOfInterest:(struct CGRect)arg1;
- (void)setFullSizeImageJPEGData:(NSData *)arg0 size:(struct CGSize)arg1 orientation:(int)arg2;
- (char)showsPlaceholder;
- (void)setShowsPlaceholder:(char)arg0;
- (void)setShadowEnabled:(char)arg0;
- (char)isShadowEnabled;
- (void)setTextBadgeString:(NSString *)arg0;
- (void)renderSnapshotInContext:(struct CGContext *)arg0;
- (struct CGRect)frameOfImage;
- (float)imageRotationAngle;
- (char)isBeingManipulated;

@end
