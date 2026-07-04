/* Runtime dump - BLRetouchEffectLayer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchEffectLayer : BLRetouchLayer
{
    struct CGRect _area;
    char _startFilled;
    NSMutableArray * _brushStrokes;
    char _strokeInProgress;
    struct ? _samplePixel;
    float _edgeDetectSize;
    struct CGContext * _edgeDetectContextRef;
    struct CGContext * _layerMask;
    float _amount;
}

@property (nonatomic) struct CGContext * layerMask;
@property (nonatomic) struct CGRect area;
@property (nonatomic) float amount;
@property (copy, nonatomic) NSMutableArray * brushStrokes;
@property (readonly, nonatomic) char strokeInProgress;

- (void)dealloc;
- (BLRetouchEffectLayer *)init;
- (void)setEnabled:(char)arg0;
- (void)setAmount:(float)arg0;
- (float)amount;
- (char)hasLayerMask;
- (void)setArea:(struct CGRect)arg0;
- (struct CGRect)area;
- (struct CGContext *)newContextForRect:(struct CGRect)arg0 inDestRect:(struct CGSize)arg1 andScale:(id)arg2;
- (NSData *)layerData;
- (void)setLayerData:(NSData *)arg0;
- (struct CGContext *)newContextWithEffect:(struct CGContext *)arg0;
- (void)releaseMask;
- (NSMutableArray *)brushStrokes;
- (void)setBrushStrokes:(NSMutableArray *)arg0;
- (char)hasAmount;
- (struct CGContext *)layerMask;
- (struct CGRect)maskFrame;
- (void)fillMaskWithValue:(float)arg0;
- (void)performFill;
- (char)isAffectingOutput;
- (struct CGImage *)newImageFromContextWithEffect:(struct CGContext *)arg0;
- (struct CGContext *)edgeDetectContextRefForSize:(float)arg0;
- (struct CGRect)doDrawBrushAtLocation:(NSObject *)arg0 opacity:(SEL)arg1 erase:(struct CGPoint)arg2 magicEdges:(float)arg3 brushSize:(char)arg4 brushSoftness:(char)arg5 firstPoint:(float)arg6;
- (struct CGRect)drawBrushAtLocation:(NSObject *)arg0 opacity:(SEL)arg1 erase:(struct CGPoint)arg2 magicEdges:(float)arg3 brushSize:(char)arg4 brushSoftness:(char)arg5;
- (void)strokeDidFinish;
- (char)solidBrush;
- (struct CGImage *)newMaskImage;
- (void)clearMask;
- (void)fillMask;
- (void)setLayerMask:(struct CGContext *)arg0;
- (char)strokeInProgress;
- (struct CGRect)imageFrame;

@end
