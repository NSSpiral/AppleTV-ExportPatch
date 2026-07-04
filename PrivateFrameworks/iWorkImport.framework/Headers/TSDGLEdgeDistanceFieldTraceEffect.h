/* Runtime dump - TSDGLEdgeDistanceFieldTraceEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLEdgeDistanceFieldTraceEffect : NSObject
{
    char _canDraw;
    char _didTeardown;
    int _traceTextureMaxValue;
    struct CGAffineTransform _textureEdgeInsetsAdjustmentMatrix;
    NSArray * _strokeLineSegment;
    struct __CFArray * _zeroesArray;
    struct CGSize _bufferSize;
    char _isValid;
    TSDGLTextureInfo * _edgeDistanceFieldTextureInfo;
    TSDGLTextureInfo * _traceTextureInfo;
    TSDGLShader * _shader;
    struct CGPoint _randomStrokePoint;
}

@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) TSDGLTextureInfo * edgeDistanceFieldTextureInfo;
@property (readonly, nonatomic) TSDGLTextureInfo * traceTextureInfo;
@property (readonly, nonatomic) TSDGLShader * shader;
@property (readonly, nonatomic) struct CGPoint randomStrokePoint;
@property (readonly, nonatomic) NSArray * strokeLineSegment;

+ (void)willBeginUsingShaders;
+ (void)didEndUsingShaders;

- (char)p_generateTraceTextureInfoWithStrokeWidth:(float)arg0 clockwise:(char)arg1;
- (TSDGLTextureInfo *)edgeDistanceFieldTextureInfo;
- (TSDGLTextureInfo *)traceTextureInfo;
- (id)p_houghTransformWithZeroes:(struct __CFArray *)arg0 bufferSize:(struct CGSize)arg1;
- (struct CGPoint)p_normalizedPointInTexturedRectangleFrameFromPoint:(struct CGPoint)arg0 inBufferSize:(struct CGSize)arg1;
- (void)p_fillFloatBuffer:(float *)arg0 withRGBAData:(char *)arg1 bufferSize:(struct CGSize)arg2;
- (void)p_addNearbyPixelsToArray:(struct __CFArray *)arg0 pixel:(struct CGPoint)arg1 edgeDataBuffer:(float *)arg2 dataBuffer:(char *)arg3 tempDataBuffer:(char *)arg4 localMaximumLookupBuffer:(char *)arg5 bufferSize:(struct CGSize)arg6;
- (TSDGLEdgeDistanceFieldTraceEffect *)initWithTR:(float)arg0 strokeWidth:(float)arg1 downsampleScale:(float)arg2 clockwise:(char)arg3 GLState:(NSObject *)arg4;
- (void)setupShaderWithPercent:(float)arg0 MVPMatrix:(struct CATransform3D)arg1 opacity:(float)arg2 color:(struct ?)arg3 strokeFadeHardnessLeading:(float)arg4 strokeFadeHardnessTrailing:(float)arg5;
- (NSArray *)strokeLineSegment;
- (struct CGPoint)randomStrokePoint;
- (void)dealloc;
- (NSString *)description;
- (char)isValid;
- (TSDGLShader *)shader;
- (void)teardown;

@end
