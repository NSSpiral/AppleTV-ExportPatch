/* Runtime dump - TSDGLBloomEffect
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLBloomEffect : NSObject
{
    struct CGSize _effectSize;
    struct CGSize _blurBufferSize;
    TSDGLFrameBuffer * _colorFramebuffer;
    TSDGLFrameBuffer * _blurFramebuffer;
    TSDGLDataBuffer * _dataBuffer;
    TSDGLDataBuffer * _blurTransferDataBuffer;
    TSDGLDataBuffer * _blurDataBuffer;
    TSDGLShader * _blurHorizontalShader;
    TSDGLShader * _blurVerticalShader;
    TSDGLShader * _bloomShader;
    TSDGLShader * _fboTransferShader;
    id _oldViewportRect;
    char _oldViewportRectInitialized;
}

- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg0;
- (void)bindFramebuffer;
- (void)p_setupShaders;
- (void)p_setupBuffers;
- (void)p_blurColorBufferWithPreviousFramebuffer:(int)arg0 GLState:(NSObject *)arg1;
- (TSDGLBloomEffect *)initWithEffectSize:(struct CGSize)arg0 blurScale:(float)arg1;
- (void)drawBloomEffectWithMVPMatrix:(struct CATransform3D)arg0 bloomAmount:(float)arg1 currentGLFramebuffer:(int)arg2 GLState:(NSObject *)arg3;
- (void)dealloc;
- (void)teardown;

@end
