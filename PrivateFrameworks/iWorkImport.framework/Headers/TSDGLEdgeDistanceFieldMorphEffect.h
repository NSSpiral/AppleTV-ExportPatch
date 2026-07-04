/* Runtime dump - TSDGLEdgeDistanceFieldMorphEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLEdgeDistanceFieldMorphEffect : NSObject
{
    char _didTeardown;
    struct CGRect _outgoingTextBounds;
    struct CGRect _incomingTextBounds;
    struct CGAffineTransform _outgoingTextureEdgeInsetsAdjustmentMatrix;
    struct CGAffineTransform _incomingTextureEdgeInsetsAdjustmentMatrix;
    struct ? _textureAdjustment;
    char _didSetupTextureAdjustment;
    char _isTextStyleIdenticalExceptSize;
    TSDGLTextureInfo * _outgoingTextureInfo;
    TSDGLTextureInfo * _incomingTextureInfo;
    TSDGLShader * _shader;
}

@property (readonly, nonatomic) TSDGLTextureInfo * outgoingTextureInfo;
@property (readonly, nonatomic) TSDGLTextureInfo * incomingTextureInfo;
@property (readonly, nonatomic) TSDGLShader * shader;
@property (nonatomic) char isTextStyleIdenticalExceptSize;

+ (void)willBeginUsingShaders;
+ (void)didEndUsingShaders;

- (char)isTextStyleIdenticalExceptSize;
- (void)setIsTextStyleIdenticalExceptSize:(char)arg0;
- (struct CGContext *)newContextFromTexture:(NSObject *)arg0;
- (struct CGRect)p_actualPixelBoundsOfTexturedRectangle:(id)arg0;
- (TSDGLEdgeDistanceFieldMorphEffect *)initWithOutgoingTextureName:(unsigned int)arg0 outgoingTextureSize:(struct CGSize)arg1 outgoingTextBounds:(struct CGRect)arg2 outgoingColor:(struct CGSize)arg3 incomingTextureName:(NSString *)arg4 incomingTextureSize:(struct ?)arg5 incomingTextBounds:(unsigned int)arg6 incomingColor:(struct CGSize)arg7 GLState:(struct CGRect)arg8 motionBlur:(struct CGSize)arg9 motionBlurIgnoreTextureOpacity:(id)arg10;
- (struct CGAffineTransform)p_affineTransformWithTextureAdjustment:(struct ?)arg0 textureSize:(struct CGSize)arg1;
- (float)p_errorFromApplyingTextureAdjustment:(struct ?)arg0 toOutgoingValue:(float)arg1 incomingValue:(float)arg2 sample:(unsigned int)arg3 sampleCount:(unsigned int)arg4;
- (struct ?)textureMatchingTextureAdjustment;
- (char)p_fillScanlineCenters:(struct CGPoint *)arg0 scanlineMinMaxZeroes:(struct CGPoint *)arg1 samples:(unsigned int)arg2 fromTexture:(unsigned int)arg3 textureSize:(struct CGSize)arg4;
- (float)p_errorFromApplyingTextureAdjustment:(struct ?)arg0 toOutgoingScanlineCenters:(struct CGPoint *)arg1 outgoingScanlineZeroes:(struct CGPoint *)arg2 incomingScanlineCenters:(struct CGPoint *)arg3 incomingScanlineZeroes:(struct CGPoint *)arg4 samples:(unsigned int)arg5;
- (void)setupShaderWithMorphPercent:(float)arg0 MVPMatrix:(struct CATransform3D)arg1 outgoingTextureMatrix:(struct CGAffineTransform)arg2 incomingTextureMatrix:(struct CGAffineTransform)arg3;
- (TSDGLEdgeDistanceFieldMorphEffect *)initWithOutgoingTR:(id)arg0 incomingTR:(id)arg1 GLState:(NSObject *)arg2 motionBlur:(char)arg3 motionBlurIgnoreTextureOpacity:(char)arg4;
- (void)setupIfNecessary;
- (void)setupShaderWithMorphPercent:(float)arg0 MVPMatrix:(struct CATransform3D)arg1 generateTextureMatrices:(char)arg2;
- (TSDGLTextureInfo *)outgoingTextureInfo;
- (TSDGLTextureInfo *)incomingTextureInfo;
- (void)dealloc;
- (TSDGLShader *)shader;
- (void)teardown;

@end
