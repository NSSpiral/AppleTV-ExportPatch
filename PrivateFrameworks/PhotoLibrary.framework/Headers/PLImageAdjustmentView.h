/* Runtime dump - PLImageAdjustmentView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLImageAdjustmentView : UIView <UIGestureRecognizerDelegate>
{
    PLCropModel * _cropModel;
    UIImageView * _imageView;
    PLCropOverlayLayer * _overlayLayer;
    <PLImageAdjustmentViewDelegate> * _delegate;
    UIImage * _editedImage;
    struct UIEdgeInsets _cropInsets;
    int _gestureCount;
    struct CGAffineTransform _originalTransform;
    struct CGRect _imageCropRect;
    struct CGRect _previousImageCropRect;
    float _cropAngle;
    float _previousCropAngle;
    float _photoViewScale;
    float _sourceAspectRatio;
    unsigned int _currentCropAction;
    NSTimer * _manualCropTimer;
    float _autoCropScale;
    double _animationDuration;
    id _isCropMode;
    id _isAdjustingCropRect;
    id _isAnimating;
    id _canRotate;
    id _needsRecenterImage;
    id _delegateWillCropImage;
    id _delegateDidCropImage;
    id _delegateDidTouchImage;
}

@property (retain, nonatomic) UIImage * editedImage;
@property (nonatomic) <PLImageAdjustmentViewDelegate> * delegate;
@property (nonatomic) struct UIEdgeInsets cropInsets;
@property (nonatomic) char cropMode;
@property (nonatomic) struct CGSize aspectRatio;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_updateGestureRecognizers;
- (PLImageAdjustmentView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<PLImageAdjustmentViewDelegate> *)arg0;
- (void)layoutSubviews;
- (<PLImageAdjustmentViewDelegate> *)delegate;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (char)gestureRecognizer:(UIGestureRecognizer *)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)reset;
- (void)commitAnimations;
- (UIImageView *)imageView;
- (void)_updateImageView;
- (void)setCropMode:(char)arg0;
- (float)rotationAngle;
- (void)setRotationAngle:(float)arg0;
- (struct CGRect)cropRect;
- (void)beginAnimation:(double)arg0;
- (struct CGRect)overlayCropRect;
- (char)isCropMode;
- (void)setCropInsets:(struct UIEdgeInsets)arg0;
- (char)isDisplayingProgressIndicators;
- (void)removeProgressIndicators;
- (void)setEditedImage:(UIImage *)arg0;
- (void)replaceEditedImage:(UIImage *)arg0;
- (void)setCropRect:(struct CGRect)arg0 cropAngle:(struct CGSize)arg1;
- (struct CGRect)previousCropRect;
- (float)cropAngle;
- (float)previousCropAngle;
- (struct CGPoint)convertPointToImage:(struct CGPoint)arg0;
- (void)displayProgressIndicatorAtLocation:(struct CGPoint)arg0;
- (void)removeProgressIndicatorAtLocation:(struct CGPoint)arg0;
- (void)showIndicatorAtPointInImage:(struct CGPoint)arg0 duration:(double)arg1;
- (UIImage *)editedImage;
- (char)_isInCropGesture;
- (void)_updateOverlayCropRect;
- (struct CGRect)_maxOverlayCropRect;
- (void)rotate:(SCNActionRotate *)arg0;
- (void)scale:(SCNActionScale *)arg0;
- (void)crop:(struct CGRect)arg0;
- (void)_beginCropGesture:(NSObject *)arg0;
- (void)_endCropGesture:(NSObject *)arg0;
- (int)cropActionForPoint:(struct CGPoint)arg0;
- (void)_performCropAction:(int)arg0 location:(struct CGPoint)arg1;
- (void)_cropTimer:(NSObject *)arg0;
- (char)_updateCropAngle;
- (char)_updateCropRect;
- (struct CGPoint)convertPointFromImage:(struct CGPoint)arg0;
- (void)setNeedsRecenterImage;
- (float)computeScaleToFillRelativeToPointInImage:(struct CGPoint)arg0;
- (struct UIEdgeInsets)cropInsets;
- (float)_imageScale;
- (float)_minimumImageScale;
- (PLCropOverlayLayer *)overlayLayer;
- (void)setAspectRatio:(struct CGSize)arg0;
- (struct CGSize)aspectRatio;
- (void)pan:(float)arg0;
- (void)touch:(UITouch *)arg0;

@end
