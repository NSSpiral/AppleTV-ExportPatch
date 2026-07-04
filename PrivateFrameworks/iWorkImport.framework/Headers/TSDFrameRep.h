/* Runtime dump - TSDFrameRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFrameRep : NSObject
{
    TSDFrame * mFrame;
    NSArray * mImages;
    NSArray * mMasks;
    TSDBitmapImageProvider * mAdornment;
    CALayer * mMaskLayer;
    char mShouldEnableBlendMode;
}

- (TSDFrameRep *)initWithTSDFrame:(NSObject *)arg0;
- (void)applyMaskForRectWithCoverage:(struct CGRect)arg0 toContext:(struct CGSize)arg1;
- (void)blendMaskBeforeRenderingImageInContext:(struct CGContext *)arg0;
- (void)frameRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1 withTotalScale:(id)arg2;
- (struct CGImage *)newFrameForMask:(char)arg0 size:(struct CGSize)arg1 forCALayer:(char)arg2 viewScale:(float)arg3;
- (void)p_drawFrameIntoRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1 withImages:(id)arg2 atViewScale:(struct CGContext *)arg3 isMask:(NSObject *)arg4;
- (void)p_addUnreplicatedLayerForIndex:(unsigned int)arg0 toLayer:(CALayer *)arg1 maskLayer:(CAShapeLayer *)arg2;
- (void)p_addEdgeLayerForIndex:(unsigned int)arg0 toLayer:(CALayer *)arg1 maskLayer:(CAShapeLayer *)arg2;
- (void)p_setUnreplicatedLayerWithIndex:(unsigned int)arg0 sublayers:(NSArray *)arg1 maskLayers:(id)arg2 toRect:(struct CGRect)arg3;
- (void)p_setRepeatingLayerWithIndex:(unsigned int)arg0 sublayers:(NSArray *)arg1 maskLayers:(id)arg2 toRect:(struct CGRect)arg3 start:(struct CGSize)arg4 end:(id)arg5;
- (struct CGImage *)p_newRenderedFrameForMask:(char)arg0 size:(struct CGSize)arg1 forCALayer:(char)arg2 viewScale:(float)arg3;
- (void)p_drawTiles:(id)arg0 inContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 start:(struct CGSize)arg3 end:(id)arg4 vertical:(float)arg5;
- (UIImage *)p_createRepeatingLayerWithImage:(struct CGImage *)arg0 vertical:(char)arg1 screenScale:(float)arg2;
- (void)p_adjustRepeatingLayer:(id)arg0 withImageRect:(struct CGRect)arg1 start:(struct CGSize)arg2 end:(id)arg3 vertical:(float)arg4;
- (CALayer *)applyToCALayer:(id)arg0 withRepLayer:(AXReplayer *)arg1 maskLayer:(CAShapeLayer *)arg2 viewScale:(float)arg3;
- (void)updateCALayer:(id)arg0 toRect:(struct CGRect)arg1 withRepLayer:(struct CGSize)arg2 maskLayer:(CAShapeLayer *)arg3 viewScale:(float)arg4 maskLayerTransform:(NSObject *)arg5;
- (void)dealloc;
- (struct CGRect)frame;

@end
