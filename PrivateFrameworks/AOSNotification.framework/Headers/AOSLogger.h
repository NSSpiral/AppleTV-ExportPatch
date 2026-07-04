/* Runtime dump - AOSLogger
 * Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@interface AOSLogger : NSObject
{
    char _isInternalBuild;
    char _logLevelsMaxedOut;
    char _logLocationIndicatorSent;
}

@property (nonatomic) char isInternalBuild;
@property (nonatomic) char logLevelsMaxedOut;
@property (nonatomic) char logLocationIndicatorSent;

+ (AOSLogger *)sharedInstance;

- (AOSLogger *)init;
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
