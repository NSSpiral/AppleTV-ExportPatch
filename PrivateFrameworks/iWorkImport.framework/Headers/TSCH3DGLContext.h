/* Runtime dump - TSCH3DGLContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLContext : TSCH3DContext <TSCHUnretainedParent>
{
    struct RenderState mState;
    NSMutableDictionary * mExtensionsNamesDict;
    NSMutableDictionary * mVirtualScreenToCapabilitiesMap;
    NSIndexSet * mEnabledArrays;
    struct BufferStates mBufferStates;
    struct GLSingleState mBufferArraysStates;
    struct TextureUnitStates mTextureUnitStates;
    struct box<glm::detail::tvec2<int> > mViewport;
    NSMutableIndexSet * mChangeMask;
    char mIsSharable;
    NSMutableSet * mChildrenContexts;
    TSCH3DGLContext * mSharedContext;
    TSCH3DGLVersion * mVersion;
}

@property (readonly, nonatomic) char isSharable;
@property (readonly, nonatomic) NSSet * childrenContexts;
@property (readonly, nonatomic) TSCH3DGLVersion * version;

- (NSString *)sharedContext;
- (void)clearParent;
- (NSSet *)childrenContexts;
- (void)viewport:(struct box<glm::detail::tvec2<int> > *)arg0;
- (void)bindTextureHandleValue:(unsigned int)arg0 is3DTexture:(char)arg1;
- (void)invalidateTextureHandleValue:(unsigned int)arg0;
- (char)isSharable;
- (struct BufferStates *)bufferStates;
- (void)addChangeFlag:(int)arg0;
- (struct GLSingleState *)bufferArraysStates;
- (void)setEnabledVertexArrays:(id)arg0;
- (void)enableVertexArrays:(id)arg0;
- (void)activateTextureUnit:(unsigned int)arg0;
- (char)hasChangeFlag:(int)arg0;
- (void)removeChangeFlag:(int)arg0;
- (void)addShaderChangeFlag;
- (TSCH3DGLContext *)initWithSharedContext:(NSObject *)arg0;
- (void)p_addChildContext:(NSObject *)arg0;
- (id)capabilitiesForExtensions:(id)arg0;
- (NSObject *)p_keyForScreen:(int)arg0;
- (void)p_cacheCapabilitiesForKey:(NSString *)arg0;
- (void)p_removeChildContext:(NSObject *)arg0;
- (NSObject *)sharedID;
- (void)dealloc;
- (TSCH3DGLContext *)init;
- (NSString *)description;
- (struct RenderState)state;
- (void)setState:(struct RenderState *)arg0;
- (void).cxx_construct;
- (TSCH3DGLVersion *)version;
- (char)supportsCapability:(NSObject *)arg0;
- (void)enableSharing;

@end
