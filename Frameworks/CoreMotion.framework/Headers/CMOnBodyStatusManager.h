/* Runtime dump - CMOnBodyStatusManager
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOnBodyStatusManager : NSObject
{
    struct CLConnectionClient * fLocationdConnection;
    char fSubscribedToOnBodyStatusDetection;
    NSObject<OS_dispatch_queue> * fOnBodyStatusQueue;
    id fOnBodyStatusHandler;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
}

+ (char)isOnBodyStatusDetectionAvailable;
+ (CMOnBodyStatusManager *)sharedOnBodyStatusManager;

- (void)stopWatchdogCheckinsPrivate;
- (void)startWatchdogCheckinsPrivate;
- (void)startOnBodyStatusDetectionPrivateToQueue:(NSObject *)arg0 withParameters:(NSDictionary *)arg1 handler:(id /* block */)arg2;
- (void)stopOnBodyStatusDetectionPrivate;
- (void)startOnBodyStatusDetectionToQueue:(NSObject *)arg0 withParameters:(NSDictionary *)arg1 handler:(id /* block */)arg2;
- (void)stopOnBodyStatusDetection;
- (void)setPropertiesWithDictionary:(NSDictionary *)arg0;
- (char)validateParameters:(NSDictionary *)arg0;
- (void)dealloc;
- (CMOnBodyStatusManager *)init;
- (void)connect;
- (void)disconnect;

@end
