/* Runtime dump - CAMetalLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMetalLayer : CALayer
{
    struct _CAMetalLayerPrivate * _priv;
    char _presentsWithTransaction;
}

@property unsigned long maximumDrawableCount;
@property (retain) <MTLDevice> * device;
@property unsigned int pixelFormat;
@property char framebufferOnly;
@property struct CGSize drawableSize;
@property char presentsWithTransaction;

+ (CAMetalLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;

- (void)layerDidBecomeVisible:(char)arg0;
- (char)shouldArchiveValueForKey:(NSString *)arg0;
- (void)_didCommitLayer:(struct Transaction *)arg0;
- (char)presentsWithTransaction;
- (char)presentsWithTransaction;
- (unsigned long)maximumDrawableCount;
- (id)nextDrawable;
- (void)setDevice:(<MTLDevice> *)arg0;
- (void)setDrawableSize:(struct CGSize)arg0;
- (struct CGSize)drawableSize;
- (void)setFramebufferOnly:(char)arg0;
- (char)framebufferOnly;
- (id)newDrawable;
- (void)setPresentsWithTransaction:(char)arg0;
- (void)setPresentsWithTransaction:(char)arg0;
- (void)setMaximumDrawableCount:(unsigned long)arg0;
- (void)dealloc;
- (CAMetalLayer *)init;
- (void)didChangeValueForKey:(NSString *)arg0;
- (void)_display;
- (unsigned int)pixelFormat;
- (void)setPixelFormat:(unsigned int)arg0;
- (<MTLDevice> *)device;

@end
