/* Runtime dump - BRCSyncOperationThrottleParams
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncOperationThrottleParams : NSObject
{
    double minWait;
    double maxWait;
    double ratioOnSuccess;
    double ratioOnFailure;
    double ratioOnQuotaErrorClear;
    double inactivityKickbackDelay;
    double inactivityKickbackRatio;
}

@property (nonatomic) double minWait;
@property (nonatomic) double maxWait;
@property (nonatomic) double ratioOnSuccess;
@property (nonatomic) double ratioOnQuotaErrorClear;
@property (nonatomic) double ratioOnFailure;
@property (nonatomic) double inactivityKickbackDelay;
@property (nonatomic) double inactivityKickbackRatio;

- (char)check;
- (double)minWait;
- (double)inactivityKickbackDelay;
- (double)inactivityKickbackRatio;
- (double)ratioOnSuccess;
- (double)ratioOnQuotaErrorClear;
- (double)ratioOnFailure;
- (double)maxWait;
- (double)doubleForKey:(NSString *)arg0 inParams:(BRCSyncOperationThrottleParams *)arg1 defaults:(SBFWallpaperDefaults *)arg2;
- (void)setupWithParams:(NSMutableDictionary *)arg0 defaults:(SBFWallpaperDefaults *)arg1;
- (BRCSyncOperationThrottleParams *)initWithParams:(NSMutableDictionary *)arg0 defaults:(SBFWallpaperDefaults *)arg1;
- (void)setMinWait:(double)arg0;
- (void)setMaxWait:(double)arg0;
- (void)setRatioOnSuccess:(double)arg0;
- (void)setRatioOnFailure:(double)arg0;
- (void)setRatioOnQuotaErrorClear:(double)arg0;
- (void)setInactivityKickbackDelay:(double)arg0;
- (void)setInactivityKickbackRatio:(double)arg0;

@end
