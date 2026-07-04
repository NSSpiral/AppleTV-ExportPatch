/* Runtime dump - FMDLogger
 * Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDLogger : NSObject
{
    char _logLevelsMaxedOut;
    char _logLocationIndicatorSent;
    char _isInternalBuild;
}

@property (nonatomic) char isInternalBuild;
@property (nonatomic) char logLevelsMaxedOut;
@property (nonatomic) char logLocationIndicatorSent;

+ (FMDLogger *)sharedInstance;

- (FMDLogger *)init;
- (void)logAtLevel:(int)arg0 facility:(char *)arg1 filename:(char *)arg2 lineNumber:(int)arg3 function:(char *)arg4 message:(NSString *)arg5;
- (void)maxOutLogging;
- (void)logSettingsDidChange;
- (char)logLevelsMaxedOut;
- (char)logLocationIndicatorSent;
- (void)setLogLocationIndicatorSent:(char)arg0;
- (void)setLogLevelsMaxedOut:(char)arg0;
- (void)setIsInternalBuild:(char)arg0;
- (char)isInternalBuild;

@end
