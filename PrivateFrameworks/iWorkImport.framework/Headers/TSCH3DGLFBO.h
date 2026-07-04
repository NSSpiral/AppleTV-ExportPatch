/* Runtime dump - TSCH3DGLFBO
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLFBO : TSCH3DGLFramebuffer
{
    TSCH3DFBOLoader * mLoader;
    TSCH3DResource * mResource;
    char mPreserveProtectedResourceAfterDestroy;
}

@property (nonatomic) char preserveProtectedResourceAfterDestroy;

+ (NSString *)FBOFromContext:(NSObject *)arg0 size:(struct tvec2<int> *)arg1 attributes:(struct FramebufferAttributes *)arg2 colorAllocator:(struct FramebufferAttributes)arg3 depthAllocator:(<TSCH3DRenderBufferAllocator> *)arg4 resource:(NSObject *)arg5;
+ (NSString *)FBOFromContext:(NSObject *)arg0 size:(struct tvec2<int> *)arg1 attributes:(struct tvec2<int>)arg2 textureAttributes:(struct FramebufferAttributes *)arg3 resource:(struct FramebufferAttributes)arg4;
+ (NSString *)FBOFromContext:(NSObject *)arg0 size:(struct tvec2<int> *)arg1 attributes:(struct tvec2<int>)arg2 textureAttributes:(struct FramebufferAttributes *)arg3 resource:(struct FramebufferAttributes)arg4 FBOClass:(struct FramebufferAttributes *)arg5 RTTRenderbufferAllocatorBlock:(struct FramebufferAttributes)arg6;

- (void)disableSamplingInSession:(NSObject *)arg0;
- (char)bindInSession:(NSObject *)arg0;
- (char)activateInsideSession:(NSObject *)arg0;
- (char)validForSession:(NSObject *)arg0;
- (void)bindColorbufferInSession:(NSObject *)arg0;
- (NSObject *)GLHandleForSession:(NSObject *)arg0;
- (void)destroyResourcesInSession:(NSObject *)arg0;
- (void)protectInSession:(NSObject *)arg0 unprotectOnFail:(char)arg1;
- (void)discardBuffers;
- (void)unprotectInSession:(NSObject *)arg0 clearOnFailProtection:(char)arg1;
- (char)isProtectedInSession:(NSObject *)arg0;
- (char)isTexturable;
- (unsigned int)estimatedMemroyInBytes;
- (void)discardColorBuffer;
- (void)discardDepthBuffer;
- (TSCH3DGLFBO *)initFromContext:(NSObject *)arg0 size:(struct tvec2<int> *)arg1 attributes:(struct FramebufferAttributes *)arg2 colorAllocator:(struct FramebufferAttributes)arg3 depthAllocator:(<TSCH3DRenderBufferAllocator> *)arg4 resource:(NSObject *)arg5;
- (char)preserveProtectedResourceAfterDestroy;
- (NSObject *)FBOHandleForSession:(NSObject *)arg0;
- (struct SessionLoadResourceResult)loadInsideSession:(NSObject *)arg0;
- (void)setPreserveProtectedResourceAfterDestroy:(char)arg0;
- (void)dealloc;
- (struct tvec2<int>)size;
- (NSString *)description;
- (unsigned int)type;
- (RUILoader *)loader;

@end
