/* Runtime dump - TSDGLLayerContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext>
{
    EAGLContext * mContext;
    unsigned int mRenderbuffer;
    unsigned int mFramebuffer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)createFramebufferFromLayer:(id)arg0;
- (void)presentRenderbuffer;
- (char)makeCurrentContext;
- (void)dealloc;
- (TSDGLLayerContext *)init;
- (char)isValid;
- (void)lock;
- (void)unlock;
- (void)teardown;

@end
