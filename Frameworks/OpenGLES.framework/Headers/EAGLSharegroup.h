/* Runtime dump - EAGLSharegroup
 * Image: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

@interface EAGLSharegroup : NSObject
{
    struct _EAGLSharegroupPrivate * _private;
    NSString * debugLabel;
}

@property (copy, nonatomic) NSString * debugLabel;

- (void)setDebugLabel:(NSString *)arg0;
- (unsigned int)APIs;
- (EAGLSharegroup *)initWithAPI:(unsigned int)arg0 sharedWithCompute:(char)arg1;
- (void)loadGLIPlugin:(struct __GLDPixelFormatRec *)arg0 sharedWithCompute:(unsigned int)arg1;
- (void)dealloc;
- (EAGLSharegroup *)init;
- (EAGLSharegroup *)initWithAPI:(unsigned int)arg0;
- (NSString *)debugLabel;
- (struct __GLISharedRec *)getGLIShared;

@end
