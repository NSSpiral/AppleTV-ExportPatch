/* Runtime dump - TSCH3DGLFramebufferMultisample
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLFramebufferMultisample : NSObject <TSCHUnretainedParent>
{
    <TSCH3DGLResolveFramebuffer> * mParent;
    struct FramebufferAttributes mAttributes;
    TSCH3DGLFBO * mMultisampleFBO;
    char mResolved;
    char mMultisampleDisabled;
}

@property (readonly, nonatomic) char usingMultisample;
@property (readonly, nonatomic) char resolved;
@property (readonly, nonatomic) struct FramebufferAttributes attributes;

+ (NSObject *)multisampleWithParent:(NSObject *)arg0 framebufferAttributes:(struct FramebufferAttributes *)arg1;

- (TSCH3DGLFramebufferMultisample *)initWithParent:(NSObject *)arg0 framebufferAttributes:(struct FramebufferAttributes *)arg1;
- (char)p_supportsMultisample;
- (NSObject *)multisampleFBOResource;
- (struct FramebufferAttributes)p_clampedAttributes;
- (struct SessionLoadResourceResult)p_loadFramebufferInSession:(NSObject *)arg0;
- (char)usingMultisample;
- (char)p_createMultisampleFBOOnDemandInsideSession:(NSObject *)arg0 returningResolveFramebufferActivated:(char *)arg1;
- (void)disableSamplingInSession:(NSObject *)arg0;
- (void)clearParent;
- (char)bindInSession:(NSObject *)arg0;
- (char)activateInsideSession:(NSObject *)arg0;
- (char)validForSession:(NSObject *)arg0;
- (void)resolveInSession:(NSObject *)arg0;
- (char)resolved;
- (void)dealloc;
- (void).cxx_construct;
- (struct FramebufferAttributes)attributes;

@end
