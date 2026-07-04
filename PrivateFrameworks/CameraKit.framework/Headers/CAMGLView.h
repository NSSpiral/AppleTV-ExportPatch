/* Runtime dump - CAMGLView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMGLView : UIView
{
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    CAEAGLLayer * _glLayer;
    PLGLLayerDelegate * _glLayerDelegate;
    char _disableLayoutForGLLayer;
    char __atomicRetainedBacking;
    char __shouldDeleteFramebuffer;
    char __disableLayoutForGLLayerInternal;
    int _drawableWidth;
    int _drawableHeight;
    id _renderNotifyBlock;
    EAGLContext * __atomicContext;
    struct CGSize __atomicFixedSize;
}

@property (retain, nonatomic) EAGLContext * context;
@property (nonatomic) struct CGSize fixedSize;
@property (nonatomic) char retainedBacking;
@property (readonly, retain, nonatomic) CAEAGLLayer * glLayer;
@property (nonatomic) char disableLayoutForGLLayer;
@property int drawableWidth;
@property int drawableHeight;
@property (copy, nonatomic) id renderNotifyBlock;
@property (retain) EAGLContext * _atomicContext;
@property char _atomicRetainedBacking;
@property struct CGSize _atomicFixedSize;
@property char _shouldDeleteFramebuffer;
@property (nonatomic) char _disableLayoutForGLLayerInternal;

- (CAMGLView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setContentScaleFactor:(float)arg0;
- (void)setContentMode:(int)arg0;
- (EAGLContext *)context;
- (void)setContext:(EAGLContext *)arg0;
- (void).cxx_destruct;
- (void)setRenderNotifyBlock:(id /* block */)arg0;
- (void)setRetainedBacking:(char)arg0;
- (void)forceDestroyGLResources;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg0 ciContext:(CIContext *)arg1 mirrorRendering:(char)arg2;
- (CAEAGLLayer *)glLayer;
- (void)renderWithBlock:(id /* block */)arg0;
- (int)drawableWidth;
- (int)drawableHeight;
- (void)_configureLayer;
- (void)_deleteFramebufferInContext:(NSObject *)arg0;
- (char)retainedBacking;
- (char)_atomicRetainedBacking;
- (void)_setAtomicRetainedBacking:(char)arg0;
- (void)_setShouldDeleteFramebuffer:(char)arg0;
- (EAGLContext *)_atomicContext;
- (void)_setAtomicContext:(NSObject *)arg0;
- (struct CGSize)_atomicFixedSize;
- (void)_setAtomicFixedSize:(struct CGSize)arg0;
- (struct CGSize)fixedSize;
- (void)_setDisableLayoutForGLLayerInternal:(char)arg0;
- (void)setDrawableWidth:(int)arg0;
- (void)setDrawableHeight:(int)arg0;
- (char)_shouldDeleteFramebuffer;
- (void)_createFramebufferInContext:(NSObject *)arg0;
- (char)_setFramebuffer:(char *)arg0 context:(EAGLContext *)arg1;
- (void)_handleRenderNotifyBlock;
- (id /* block */)renderNotifyBlock;
- (char)isDisabledLayoutForGLLayer;
- (char)_isDisabledLayoutForGLLayerInternal;
- (void)_layoutGLLayer;
- (void)setFixedSize:(struct CGSize)arg0;
- (void)setDisableLayoutForGLLayer:(char)arg0;

@end
