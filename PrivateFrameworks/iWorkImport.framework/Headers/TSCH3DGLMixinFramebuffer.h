/* Runtime dump - TSCH3DGLMixinFramebuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLMixinFramebuffer : TSCH3DGLFramebuffer
{
    TSCH3DGLFramebuffer * mOriginal;
}

@property (retain, nonatomic) TSCH3DGLFramebuffer * original;

- (void)disableSamplingInSession:(NSObject *)arg0;
- (char)bindInSession:(NSObject *)arg0;
- (char)activateInsideSession:(NSObject *)arg0;
- (char)validForSession:(NSObject *)arg0;
- (TSCH3DGLFramebuffer *)original;
- (void)bindColorbufferInSession:(NSObject *)arg0;
- (NSObject *)GLHandleForSession:(NSObject *)arg0;
- (struct FramebufferAttributes *)framebufferAttributes;
- (void)destroyResourcesInSession:(NSObject *)arg0;
- (void)protectInSession:(NSObject *)arg0 unprotectOnFail:(char)arg1;
- (void)discardBuffers;
- (void)unprotectInSession:(NSObject *)arg0 clearOnFailProtection:(char)arg1;
- (char)isProtectedInSession:(NSObject *)arg0;
- (char)isTexturable;
- (void)setColorMask:(struct tvec4<bool> *)arg0;
- (void)setDepthMask:(unsigned char)arg0;
- (void)setDepthFunction:(int)arg0;
- (void)clean;
- (void)wipe:(struct tvec4<float> *)arg0;
- (unsigned int)estimatedMemroyInBytes;
- (void)discardColorBuffer;
- (void)discardDepthBuffer;
- (TSCH3DGLMixinFramebuffer *)initWithContext:(TSCH3DGLContext *)arg0 size:(struct tvec2<int> *)arg1 attributes:(struct tvec2<int>)arg2;
- (void)setOriginal:(TSCH3DGLFramebuffer *)arg0;
- (NSObject *)output;
- (void)setClearDepth:(float)arg0;
- (void)dealloc;
- (struct tvec2<int>)size;
- (NSString *)description;
- (unsigned int)type;
- (NSString *)context;
- (void)clear:(unsigned int)arg0;
- (void)setClearColor:(struct tvec4<float> *)arg0;

@end
