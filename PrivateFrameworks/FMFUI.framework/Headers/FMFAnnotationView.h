/* Runtime dump - FMFAnnotationView
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFAnnotationView : MKAnnotationView
{
    char _isRotating;
    char _wantsRotation;
    int _annotationSize;
    CAShapeLayer * _shapeLayer;
    CAShapeLayer * _circleLayer;
    CAShapeLayer * _markerOval;
    CAShapeLayer * _markerCenter;
    CAShapeLayer * _tailLayer;
    CALayer * _centerImageLayer;
    float _futureRotationAmount;
}

@property (nonatomic) int annotationSize;
@property (retain, nonatomic) CAShapeLayer * shapeLayer;
@property (retain, nonatomic) CAShapeLayer * circleLayer;
@property (retain, nonatomic) CAShapeLayer * markerOval;
@property (retain, nonatomic) CAShapeLayer * markerCenter;
@property (retain, nonatomic) CAShapeLayer * tailLayer;
@property (retain, nonatomic) CALayer * centerImageLayer;
@property (nonatomic) char isRotating;
@property (nonatomic) char wantsRotation;
@property (nonatomic) float futureRotationAmount;

+ (NSString *)circlePath;

- (void)setIsRotating:(char)arg0;
- (char)isRotating;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)prepareForReuse;
- (float)animationDuration;
- (CAShapeLayer *)shapeLayer;
- (void).cxx_destruct;
- (void)setShapeLayer:(CAShapeLayer *)arg0;
- (NSString *)smallBezierPath;
- (NSObject *)shadowOpacityForSize:(int)arg0;
- (void)setMarkerOval:(CAShapeLayer *)arg0;
- (id)markerOvalPathSmall;
- (void)setMarkerCenter:(CAShapeLayer *)arg0;
- (id)markerCenterPathSmall;
- (void)setCenterImageLayer:(CALayer *)arg0;
- (struct CGRect)centerImageFrameForSize:(NSObject *)arg0;
- (void)setCircleLayer:(CAShapeLayer *)arg0;
- (id)smallCircle;
- (NSObject *)lineWidthForSize:(int)arg0;
- (void)setTailLayer:(CAShapeLayer *)arg0;
- (id)smallTail;
- (int)annotationSize;
- (UIImage *)fallbackPersonImage;
- (id)clipImageToCircle:(id)arg0;
- (CALayer *)centerImageLayer;
- (void)setAnnotationSize:(int)arg0;
- (void)sizeAnnotationView;
- (NSString *)markerOvalPath;
- (id)shutterCircle;
- (NSObject *)shutterLineWidthForSize:(int)arg0;
- (NSString *)largeBezierPath;
- (id)largeTail;
- (id)largeCircle;
- (NSString *)markerCenterPath;
- (FMFAnnotationView *)initWithAnnotation:(NSObject *)arg0 reuseIdentifier:(NSString *)arg1 tintColor:(UIColor *)arg2;
- (struct CGRect)hitRectForSize;
- (void)setPersonImage:(UIImage *)arg0;
- (void)setAnnotationSize:(float)arg0 animated:(char)arg1;
- (void)updateAnnotationShutter;
- (CAShapeLayer *)circleLayer;
- (CAShapeLayer *)markerOval;
- (CAShapeLayer *)markerCenter;
- (CAShapeLayer *)tailLayer;
- (char)wantsRotation;
- (void)setWantsRotation:(char)arg0;
- (float)futureRotationAmount;
- (void)setFutureRotationAmount:(float)arg0;

@end
