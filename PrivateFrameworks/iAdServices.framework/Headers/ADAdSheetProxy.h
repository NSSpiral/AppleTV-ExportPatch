/* Runtime dump - ADAdSheetProxy
 * Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADAdSheetProxy : NSObject
{
    <ADAdSheetProxyDelegate> * _delegate;
    char _serviceLaunchThrottled;
    char _waitingForAdSheet;
    char _openApplicationInProgress;
    int _unexpectedTerminationCount;
    NSMutableSet * _launchAssertions;
    NSObject<OS_dispatch_queue> * _proxyQueue;
    double _lastLaunchTimestamp;
    double _nextScheduledLaunch;
}

@property (weak, nonatomic) <ADAdSheetProxyDelegate> * delegate;
@property (readonly, nonatomic) char serviceLaunchThrottled;
@property (nonatomic) char waitingForAdSheet;
@property (nonatomic) char openApplicationInProgress;
@property (nonatomic) double lastLaunchTimestamp;
@property (nonatomic) int unexpectedTerminationCount;
@property (readonly, nonatomic) double remainingLaunchBackoff;
@property (nonatomic) double nextScheduledLaunch;
@property (retain, nonatomic) NSMutableSet * launchAssertions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * proxyQueue;

+ (ADAdSheetProxy *)sharedInstance;

- (void)setDelegate:(<ADAdSheetProxyDelegate> *)arg0;
- (ADAdSheetProxy *)init;
- (<ADAdSheetProxyDelegate> *)delegate;
- (void)resetAdSheetThrottle;
- (void)considerLaunchingAdSheet;
- (void)takeLaunchAssertion:(id)arg0;
- (void)releaseLaunchAssertion:(id)arg0;
- (char)serviceLaunchThrottled;
- (void)_adSheetAvailable;
- (NSObject<OS_dispatch_queue> *)proxyQueue;
- (NSMutableSet *)launchAssertions;
- (void)_considerLaunchingAdSheet;
- (void)setUnexpectedTerminationCount:(int)arg0;
- (void)setLastLaunchTimestamp:(double)arg0;
- (int)unexpectedTerminationCount;
- (double)lastLaunchTimestamp;
- (char)openApplicationInProgress;
- (char)waitingForAdSheet;
- (double)remainingLaunchBackoff;
- (double)nextScheduledLaunch;
- (void)setNextScheduledLaunch:(double)arg0;
- (void)setOpenApplicationInProgress:(char)arg0;
- (void)setWaitingForAdSheet:(char)arg0;
- (void)reportAdSheetUnexpectedTermination;
- (void)setLaunchAssertions:(NSMutableSet *)arg0;

@end
