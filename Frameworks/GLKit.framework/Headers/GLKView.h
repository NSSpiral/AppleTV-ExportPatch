/* Runtime dump - GLKView
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKView : UIView <NSCoding>
{
    char _inDraw;
    char _shouldDeleteFramebuffer;
    char _enableSetNeedsDisplay;
    NSMutableDictionary * _drawableProperties;
    unsigned int _resolveFramebuffer;
    unsigned int _resolveColorRenderbuffer;
    unsigned int _multisampleFramebuffer;
    unsigned int _multisampleColorRenderbuffer;
    unsigned int _depthRenderbuffer;
    unsigned int _stencilRenderbuffer;
    unsigned int _depthStencilRenderbuffer;
    float _viewContentScaleFactor;
    <GLKViewDelegate> * _delegate;
    EAGLContext * _context;
    int _drawableWidth;
    int _drawableHeight;
    int _drawableColorFormat;
    int _drawableDepthFormat;
    int _drawableStencilFormat;
    int _drawableMultisample;
    /* block */ id * _drawRectIMP;
    struct CGRect _viewBounds;
}

@property (nonatomic) <GLKViewDelegate> * delegate;
@property (retain, nonatomic) EAGLContext * context;
@property (readonly, nonatomic) int drawableWidth;
@property (readonly, nonatomic) int drawableHeight;
@property (nonatomic) int drawableColorFormat;
@property (nonatomic) int drawableDepthFormat;
@property (nonatomic) int drawableStencilFormat;
@property (nonatomic) int drawableMultisample;
@property (readonly) UIImage * snapshot;
@property (nonatomic) char enableSetNeedsDisplay;
@property (nonatomic) char inDraw;
@property (retain, nonatomic) NSMutableDictionary * drawableProperties;
@property (nonatomic) char shouldDeleteFramebuffer;
@property (nonatomic) unsigned int resolveFramebuffer;
@property (nonatomic) unsigned int resolveColorRenderbuffer;
@property (nonatomic) unsigned int multisampleFramebuffer;
@property (nonatomic) unsigned int multisampleColorRenderbuffer;
@property (nonatomic) unsigned int depthRenderbuffer;
@property (nonatomic) unsigned int stencilRenderbuffer;
@property (nonatomic) unsigned int depthStencilRenderbuffer;
@property (nonatomic) struct CGRect viewBounds;
@property (nonatomic) float viewContentScaleFactor;
@property (nonatomic) /* block */ id * drawRectIMP;

+ (Class)layerClass;

- (void)_createFramebuffer;
- (void)_setFramebuffer:(char *)arg0;
- (void)_display:(char)arg0;
- (GLKView *)initWithFrame:(struct CGRect)arg0 context:(struct CGSize)arg1;
- (void)deleteDrawable;
- (int)drawableColorFormat;
- (void)setDrawableColorFormat:(int)arg0;
- (int)drawableDepthFormat;
- (void)setDrawableDepthFormat:(int)arg0;
- (int)drawableStencilFormat;
- (void)setDrawableStencilFormat:(int)arg0;
- (int)drawableMultisample;
- (void)setDrawableMultisample:(int)arg0;
- (void)bindDrawable;
- (void)setEnableSetNeedsDisplay:(char)arg0;
- (char)enableSetNeedsDisplay;
- (char)inDraw;
- (void)setInDraw:(char)arg0;
- (char)shouldDeleteFramebuffer;
- (void)setShouldDeleteFramebuffer:(char)arg0;
- (unsigned int)resolveFramebuffer;
- (void)setResolveFramebuffer:(unsigned int)arg0;
- (unsigned int)resolveColorRenderbuffer;
- (void)setResolveColorRenderbuffer:(unsigned int)arg0;
- (unsigned int)multisampleFramebuffer;
- (void)setMultisampleFramebuffer:(unsigned int)arg0;
- (unsigned int)multisampleColorRenderbuffer;
- (void)setMultisampleColorRenderbuffer:(unsigned int)arg0;
- (unsigned int)depthRenderbuffer;
- (void)setDepthRenderbuffer:(unsigned int)arg0;
- (unsigned int)stencilRenderbuffer;
- (void)setStencilRenderbuffer:(unsigned int)arg0;
- (unsigned int)depthStencilRenderbuffer;
- (void)setDepthStencilRenderbuffer:(unsigned int)arg0;
- (struct CGRect)viewBounds;
- (void)setViewBounds:(struct CGRect)arg0;
- (float)viewContentScaleFactor;
- (void)setViewContentScaleFactor:(float)arg0;
- (/* block */ id *)drawRectIMP;
- (void)setDrawRectIMP:(/* block */ id *)arg0;
- (void)_deleteFramebuffer;
- (void)_resolveAndDiscard;
- (char)_presentFramebuffer;
- (GLKView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (GLKView *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<GLKViewDelegate> *)arg0;
- (void)layoutSubviews;
- (void)setContentScaleFactor:(float)arg0;
- (<GLKViewDelegate> *)delegate;
- (void)display;
- (EAGLContext *)context;
- (char)_canDrawContent;
- (UIImage *)snapshot;
- (char)_controlsOwnScaleFactor;
- (void)setContext:(EAGLContext *)arg0;
- (void)displayLayer:(MDDisplayLayer *)arg0;
- (int)drawableWidth;
- (int)drawableHeight;
- (NSMutableDictionary *)drawableProperties;
- (void)_initCommon;
- (void)setDrawableProperties:(NSMutableDictionary *)arg0;

@end
