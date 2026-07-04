/* Runtime dump - SCNJitterer
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNJitterer : NSObject
{
    char _enabled;
    unsigned int _state;
    unsigned int _iteration;
    char _jitteringSupported;
    char _restartSourceIsSuspended;
    <SCNJittererDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _restartSource;
}

@property (nonatomic) char enabled;

+ (void)initialize;

- (void)restart;
- (void)stopIfNeeded;
- (void)jitter;
- (void)delegateWillDie;
- (char)isAborting;
- (void)dealloc;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void)update;
- (SCNJitterer *)initWithDelegate:(<SCNJittererDelegate> *)arg0;

@end
