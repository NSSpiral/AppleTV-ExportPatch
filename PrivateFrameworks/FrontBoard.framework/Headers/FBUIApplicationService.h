/* Runtime dump - FBUIApplicationService
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationService : NSObject
{
    <FBUIApplicationServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <FBUIApplicationServiceDelegate> * delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;

+ (FBUIApplicationService *)sharedInstance;

- (void)dealloc;
- (void)setDelegate:(<FBUIApplicationServiceDelegate> *)arg0;
- (<FBUIApplicationServiceDelegate> *)delegate;
- (FBUIApplicationService *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)handleApplication:(id)arg0 setBadgeValue:(NSString *)arg1;
- (void)handleApplication:(id)arg0 getBadgeValueWithCompletion:(id /* block */)arg1;
- (void)handleApplicationProcess:(NSObject *)arg0 requestBrightness:(float)arg1 completion:(id /* block */)arg2;
- (char)handleApplicationProcess:(NSObject *)arg0 setNextWakeInterval:(double)arg1;

@end
