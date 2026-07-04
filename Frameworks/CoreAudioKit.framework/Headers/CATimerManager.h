/* Runtime dump - CATimerManager
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CATimerManager : NSObject
{
    id timerSource;
}

@property (nonatomic) id timerSource;

+ (NSObject *)getWeakReferenceOfObject:(NSObject *)arg0;

- (CATimerManager *)init;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (NSObject<OS_dispatch_source> *)timerSource;
- (void)setTimerSource:(NSObject *)arg0;

@end
