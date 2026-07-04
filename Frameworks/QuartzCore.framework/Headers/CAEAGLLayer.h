/* Runtime dump - CAEAGLLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAEAGLLayer : CALayer <EAGLDrawable>
{
    struct _CAEAGLNativeWindow * _win;
}

@property (readonly) struct _EAGLNativeWindowObject * nativeWindow;
@property char asynchronous;
@property (copy) NSDictionary * drawableProperties;

+ (CAEAGLLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;

- (char)isAsynchronous;
- (void)layerDidBecomeVisible:(char)arg0;
- (char)shouldArchiveValueForKey:(NSString *)arg0;
- (char)_deferrsDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(struct Transaction *)arg0;
- (struct _EAGLNativeWindowObject *)nativeWindow;
- (void)discardContents;
- (void)dealloc;
- (void)didChangeValueForKey:(NSString *)arg0;
- (void)_display;
- (NSDictionary *)drawableProperties;
- (void)setDrawableProperties:(NSDictionary *)arg0;
- (void)setAsynchronous:(char)arg0;

@end
