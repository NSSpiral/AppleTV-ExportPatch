/* Runtime dump - FTNetworkSupport
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTNetworkSupport : NSObject
{
    Class _APSConnectionClass;
    APSConnection * _apsConnection;
    NSTimer * _reliabilityAttemptTimer;
    char _enableCriticalReliability;
    char _criticalReliabilityEnabledState;
}

@property (readonly, nonatomic) char allowAnyNetwork;
@property (readonly, nonatomic) char validNetworkEnabled;
@property (readonly, nonatomic) char validNetworkActive;
@property (readonly, nonatomic) char validNetworkReachable;
@property (readonly, nonatomic) char wiFiActiveAndReachable;
@property (readonly, nonatomic) char willSearchForNetwork;
@property (readonly, nonatomic) char dataActiveAndReachable;
@property (readonly, nonatomic) char networkEnabled;
@property (readonly, nonatomic) char networkActive;
@property (readonly, nonatomic) char networkReachable;
@property (nonatomic) char enableCriticalReliability;

+ (FTNetworkSupport *)sharedInstance;

- (char)validNetworkReachable;
- (void)_clearReliabilityTimeoutInterval;
- (void)_tryToEnableReliability;
- (void)setEnableCriticalReliability:(char)arg0;
- (void)_createAPSConnectionIfNeeded;
- (void)_reallySetCriticalReliability:(char)arg0;
- (char)validNetworkEnabled;
- (char)validNetworkActive;
- (void)_setReliabilityTimeoutInterval;
- (char)wiFiActiveAndReachable;
- (char)willSearchForNetwork;
- (char)dataActiveAndReachable;
- (char)networkEnabled;
- (char)networkActive;
- (char)networkReachable;
- (char)enableCriticalReliability;
- (char)allowAnyNetwork;

@end
