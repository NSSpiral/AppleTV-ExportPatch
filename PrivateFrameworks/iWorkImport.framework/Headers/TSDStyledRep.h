/* Runtime dump - TSDStyledRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDStyledRep : TSDRep
{
    CALayer * mShadowLayer;
    CALayer * mReflectionLayer;
    struct CGPoint mOriginalReflectionLayerPositionInScaledCanvas;
    char mIsUpdatingReflectionOpacity;
    TSDMutableReflection * mDynamicReflection;
    char mIsUpdatingShadow;
    TSDShadow * mDynamicShadow;
    struct ? mFlags;
}

@property (readonly, nonatomic) CALayer * shadowLayer;
@property (readonly, nonatomic) CALayer * reflectionLayer;
@property (readonly, nonatomic) TSDReflection * reflection;
@property (readonly, nonatomic) float opacity;
@property (readonly, nonatomic) TSDShadow * shadow;

- (NSString *)textureForContext:(NSObject *)arg0;
- (void)setTextureAttributes:(NSDictionary *)arg0;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(char)arg1 withStroke:(char)arg2 withOpacity:(char)arg3 forAlphaOnly:(char)arg4 drawChildren:(char)arg5;
- (char)canDrawShadowInOneStepWithChildren:(char)arg0;
- (NSObject *)styledLayout;
- (char)shouldShowShadow;
- (char)shouldShowReflection;
- (void)calculateTextureClipBounds:(struct CGRect *)arg0 andOffset:(struct CGSize)arg1 withTransform:(struct CGAffineTransform)arg2 andRectOnCanvas:(struct CGPoint *)arg3 textureContext:(struct CGAffineTransform *)arg4 isUsingImageTexture:(struct CGRect *)arg5;
- (void)drawGradientWithAlphaOverReflection:(struct CGContext *)arg0 applyingOpacity:(char)arg1 reflectionSize:(struct CGSize)arg2;
- (struct CGImage *)newFrameMaskForViewScale:(float)arg0 frameRect:(struct CGRect *)arg1;
- (NSDictionary *)styledInfo;
- (struct CGRect)clipRectWithoutEffects;
- (struct CGRect)rectWithEffectsAppliedToRect:(NSObject *)arg0;
- (struct CGRect)p_rectWithEffectsAppliedToRect:(NSObject *)arg0 additionalTransform:(SEL)arg1 includeShadow:(struct CGRect)arg2 includeReflection:(struct CGSize)arg3;
- (struct CGRect)reflectionLayerFrameInRoot;
- (void)drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg0 withTransparencyLayer:(char)arg1 applyingOpacity:(char)arg2 drawChildren:(char)arg3;
- (void)drawInContextWithoutEffectsForAlphaOnly:(struct CGContext *)arg0;
- (void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(struct CGContext *)arg0;
- (struct CGImage *)newShadowImageWithSize:(struct CGSize)arg0 shadow:(TSDShadow *)arg1 drawSelector:(SEL)arg2 unflipped:(char)arg3;
- (void)p_drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg0 withTransparencyLayer:(char)arg1 applyingOpacity:(char)arg2 shouldClipGradient:(char)arg3 withBlock:(id /* block */)arg4;
- (struct CGImage *)newShadowImageWithSize:(struct CGSize)arg0 unflipped:(char)arg1 withChildren:(char)arg2;
- (struct CGImage *)p_newReflectionImageWithSize:(struct CGSize)arg0 applyOpacity:(char)arg1 viewScale:(float)arg2 withBlock:(id /* block */)arg3;
- (void)drawReflectionInContext:(struct CGContext *)arg0 withTransparencyLayer:(char)arg1 applyingOpacity:(char)arg2 shouldClipGradient:(char)arg3 withBlock:(id /* block */)arg4;
- (void)drawShadowInContext:(struct CGContext *)arg0 withChildren:(char)arg1 withDrawableOpacity:(char)arg2;
- (void)drawReflectionInContext:(struct CGContext *)arg0 drawChildren:(char)arg1;
- (struct CGRect)p_clipRectInRootForTransform:(NSObject *)arg0 includeShadow:(SEL)arg1 includeReflection:(struct CGAffineTransform)arg2;
- (void)p_drawReflectionInContext:(struct CGContext *)arg0;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg0;
- (void)drawInContextWithoutEffectsOrChildren:(struct CGContext *)arg0;
- (CALayer *)shadowLayer;
- (CALayer *)reflectionLayer;
- (struct CGRect)clipRect;
- (void)dealloc;
- (NSString *)description;
- (float)opacity;
- (CALayer *)actionForLayer:(CALayer *)arg0 forKey:(NSString *)arg1;
- (void)drawInContext:(struct CGContext *)arg0;
- (TSDShadow *)shadow;
- (TSDReflection *)reflection;
- (char)isInvisible;

@end
