/* Runtime dump - KNAnimationContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationContext : NSObject
{
    struct CGRect mSlideRect;
    struct CGRect mUnscaledSlideRect;
    float mViewScale;
    CALayer * mBaseLayer;
    float mFOVInRadians;
    struct CATransform3D mSlideProjectionMatrix;
    float mPixelAspectRatio;
    KNAnimationRegistryWithFallbacks * mRegistry;
    TSDCapabilities * mCapabilities;
    char mBaseLayerVisible;
    struct CGColorSpace * mColorSpace;
}

@property (readonly, nonatomic) KNAnimationRegistryWithFallbacks * registry;
@property (readonly, nonatomic) struct CGRect slideRect;
@property (readonly, nonatomic) struct CGRect unscaledSlideRect;
@property (readonly, nonatomic) CALayer * baseLayer;
@property (readonly, nonatomic) char baseLayerVisible;
@property (readonly, nonatomic) float fieldOfViewInRadians;
@property (readonly, nonatomic) struct CATransform3D slideProjectionMatrix;
@property (nonatomic) float pixelAspectRatio;
@property (readonly, nonatomic) float viewScale;
@property (readonly, nonatomic) float showScale;
@property (readonly, nonatomic) TSDCapabilities * capabilities;
@property (nonatomic) struct CGColorSpace * colorSpace;

- (float)viewScale;
- (KNAnimationContext *)initWithShowSize:(struct CGSize)arg0 viewScale:(float)arg1 baseLayer:(CALayer *)arg2 isBaseLayerVisible:(char)arg3;
- (float)showScale;
- (struct CGRect)unscaledSlideRect;
- (CALayer *)baseLayer;
- (void)updateGeometryToFitBaseLayerAtViewScale:(float)arg0;
- (float)fieldOfViewInRadians;
- (char)isBaseLayerVisible;
- (void)setPixelAspectRatio:(float)arg0;
- (struct CATransform3D)slideProjectionMatrix;
- (void)setColorSpace:(struct CGColorSpace *)arg0;
- (struct CGColorSpace *)colorSpace;
- (void)dealloc;
- (float)pixelAspectRatio;
- (TSDCapabilities *)capabilities;
- (KNAnimationRegistryWithFallbacks *)registry;
- (struct CGRect)slideRect;

@end
