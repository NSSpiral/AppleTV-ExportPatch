/* Runtime dump - TSCH3DGLMultisampleFramebuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLMultisampleFramebuffer : TSCH3DGLMixinFramebuffer <TSCH3DGLResolveFramebuffer>
{
    TSCH3DGLFramebufferMultisample * mMultisample;
    char mDisableDestroyAssertion;
}

@property (readonly, nonatomic) struct FramebufferAttributes resolveAttributes;
@property (nonatomic) char disableDestroyAssertion;

+ (struct FramebufferAttributes)resolveAttributesFromFramebufferAttribute:(struct FramebufferAttributes *)arg0;
+ (NSDictionary *)multisampleFramebufferWithFramebufferAttributes:(struct FramebufferAttributes *)arg0;

- (NSString *)resolveFramebufferContext;
- (char)activateResolveFramebufferInsideSession:(NSObject *)arg0;
- (struct tvec2<int>)resolveFramebufferSize;
- (void)disableSamplingInSession:(NSObject *)arg0;
- (char)resolveFramebufferValidForSession:(NSObject *)arg0;
- (NSObject *)resolveFramebufferHandleForSession:(NSObject *)arg0;
- (struct FramebufferAttributes)resolveFramebufferAttributes;
- (char)bindInSession:(NSObject *)arg0;
- (char)activateInsideSession:(NSObject *)arg0;
- (char)validForSession:(NSObject *)arg0;
- (TSCH3DGLMultisampleFramebuffer *)initWithFramebufferAttributes:(struct FramebufferAttributes *)arg0;
- (char)p_usingMultisample;
- (void)bindColorbufferInSession:(NSObject *)arg0;
- (char)disableDestroyAssertion;
- (void)destroyResourcesInSession:(NSObject *)arg0;
- (struct FramebufferAttributes)resolveAttributes;
- (id)resolvingFramebuffer;
- (void)setDisableDestroyAssertion:(char)arg0;
- (void)dealloc;

@end
