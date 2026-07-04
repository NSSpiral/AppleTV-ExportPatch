/* Runtime dump - EAGLContext
 * Image: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

@interface EAGLContext : NSObject
{
    struct _EAGLContextPrivate * _private;
    NSString * debugLabel;
}

@property (readonly) unsigned int API;
@property (readonly) EAGLSharegroup * sharegroup;
@property (copy, nonatomic) NSString * debugLabel;
@property (nonatomic) char multiThreaded;

+ (void)tsd_setCurrentContext:(NSObject *)arg0;
+ (EAGLContext *)currentContext;
+ (char)setCurrentContext:(NSManagedObjectContext *)arg0;

- (id)tsd_initForShadow;
- (EAGLContext *)initForBrushes;
- (unsigned int)API;
- (void)setDebugLabel:(NSString *)arg0;
- (struct EAGLMacroContext *)getMacroContextPrivate;
- (char)isMultiThreaded;
- (struct EAGLMacroContext *)GetMacroContextPrivate;
- (char)setBlockFence:(id)arg0 onQueue:(/* block */ id)arg1;
- (EAGLContext *)initWithAPI:(unsigned int)arg0 sharedWithCompute:(char)arg1;
- (id)commonInitWithAPI:(unsigned int)arg0 properties:(NSDictionary *)arg1;
- (unsigned int)getParameter:(unsigned int)arg0 to:(int *)arg1;
- (void)setMultiThreaded:(char)arg0;
- (void)sendNotification:(unsigned int)arg0 forTransaction:(unsigned int)arg1 onLayer:(unsigned int)arg2;
- (void)swapNotification:(struct __IOMobileFramebuffer *)arg0 forTransaction:(unsigned int)arg1 onLayer:(unsigned int)arg2;
- (EAGLContext *)initWithAPI:(unsigned int)arg0 properties:(NSDictionary *)arg1;
- (void)dealloc;
- (EAGLContext *)initWithAPI:(unsigned int)arg0;
- (char)renderbufferStorage:(unsigned int)arg0 fromDrawable:(GQHPagesFloatingDrawable *)arg1;
- (char)presentRenderbuffer:(unsigned int)arg0;
- (char)attachImage:(unsigned int)arg0 toCoreSurface:(struct __IOSurface *)arg1 invertedRender:(char)arg2;
- (NSString *)debugLabel;
- (EAGLContext *)initWithAPI:(unsigned int)arg0 sharegroup:(EAGLSharegroup *)arg1;
- (EAGLSharegroup *)sharegroup;
- (unsigned int)setParameter:(unsigned int)arg0 to:(int *)arg1;
- (char)texImageIOSurface:(struct __IOSurface *)arg0 target:(unsigned int)arg1 internalFormat:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 format:(unsigned int)arg5 type:(unsigned int)arg6 plane:(unsigned int)arg7 invert:(char)arg8;

@end
