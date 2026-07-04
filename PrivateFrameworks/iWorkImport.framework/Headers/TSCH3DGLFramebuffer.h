/* Runtime dump - TSCH3DGLFramebuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLFramebuffer : TSCH3DFramebuffer <TSCH3DPipelineLinkable>
{
    TSCH3DGLContext * mContext;
    char mHasSetDefaultStates;
}

@property (readonly, nonatomic) TSCH3DGLContext * context;
@property (readonly, nonatomic) char isTexturable;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)framebufferWithContext:(TSCH3DGLContext *)arg0 size:(struct tvec2<int> *)arg1 attributes:(struct tvec2<int>)arg2;

- (id)resolvingFramebuffer;
- (char)isTexturable;
- (void)setColorMask:(struct tvec4<bool> *)arg0;
- (void)setDepthMask:(unsigned char)arg0;
- (void)setDepthFunction:(int)arg0;
- (void)clean;
- (void)wipe:(struct tvec4<float> *)arg0;
- (TSCH3DGLFramebuffer *)initWithContext:(TSCH3DGLContext *)arg0 size:(struct tvec2<int> *)arg1 attributes:(struct tvec2<int>)arg2;
- (NSObject *)output;
- (void)setClearDepth:(float)arg0;
- (void)dealloc;
- (NSString *)description;
- (TSCH3DGLContext *)context;
- (void)clear:(unsigned int)arg0;
- (void)setClearColor:(struct tvec4<float> *)arg0;

@end
