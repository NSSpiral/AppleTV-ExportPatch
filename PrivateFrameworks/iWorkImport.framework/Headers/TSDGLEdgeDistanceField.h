/* Runtime dump - TSDGLEdgeDistanceField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLEdgeDistanceField : NSObject
{
    unsigned int _inputTexture;
    struct CGSize _textureSize;
    struct CGSize _resultTextureSize;
    struct CGSize _squareSize;
    struct UIEdgeInsets _edgeInsets;
    float _downsampleScale;
    TSDGLFrameBuffer * _exteriorFramebuffer;
    TSDGLFrameBuffer * _interiorFramebuffer;
    TSDGLDataBuffer * _origDataBuffer;
    TSDGLDataBuffer * _rectDataBuffer;
    TSDGLDataBuffer * _squareDataBuffer;
    TSDGLState * _GLState;
    id _oldViewport;
}

+ (void)willBeginUsingShaders;
+ (void)didEndUsingShaders;
+ (NSObject *)distanceFieldTextureWithTexture:(unsigned int)arg0 textureSize:(struct CGSize)arg1 maxDistance:(int)arg2 edgeInsets:(struct UIEdgeInsets)arg3 downsampleScale:(float)arg4 floatTexture:(char)arg5 GLState:(TSDGLState *)arg6;

- (void)p_setupShaders;
- (TSDGLEdgeDistanceField *)initWithTexture:(unsigned int)arg0 textureSize:(struct CGSize)arg1 edgeInsets:(struct UIEdgeInsets)arg2 downsampleScale:(float)arg3 GLState:(TSDGLState *)arg4;
- (void)p_setupBuffers;
- (void)p_writeIntoSquareTexture;
- (void)p_seedTextureFromTexture:(unsigned int)arg0 invertSeed:(char)arg1;
- (void)p_floodTextureInFramebuffer:(id)arg0 maxDistance:(int)arg1;
- (unsigned int)p_combinedTextureWithCurrentGLFramebuffer:(int)arg0 floatTexture:(char)arg1;
- (unsigned int)p_gradientTextureFromCombinedTexture:(unsigned int)arg0 withCurrentGLFramebuffer:(int)arg1;
- (void)dealloc;
- (void)teardown;

@end
