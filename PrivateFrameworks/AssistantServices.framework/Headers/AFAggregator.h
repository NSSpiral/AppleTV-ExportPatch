/* Runtime dump - AFAggregator
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAggregator : NSObject
{
    unsigned int _type;
    double _startTime;
    char _hasActiveRequest;
    char _sessionIsRetrying;
    char _retryPrefersWWAN;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) char hasActiveRequest;

+ (void)logSiriSpeechRequestStarted;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestFailedWithError:(NSError *)arg0;
+ (void)logSiriRequestSucceeded;
+ (void)logDictationStarted;
+ (void)logDictationCancelled;
+ (void)logDictationFailedWithError:(NSError *)arg0;
+ (void)logDictationSucceeded;
+ (NSString *)_fullAggDKeyWithPrefix:(NSString *)arg0 error:(NSError *)arg1;
+ (void)logRequestCompletedWithDuration:(double)arg0;
+ (void)missedAppContextForRequest;
+ (void)missedAlertContextForRequest;
+ (void)logRequestCancelAfterSeconds:(double)arg0;
+ (void)logPingTimeout;
+ (NSObject *)_stringForGatekeeperType:(unsigned int)arg0;
+ (void)logTimeToBeepWithDuration:(double)arg0;
+ (void)logHomeButtonPressToActivationDuration:(double)arg0;
+ (void)logStarkGatekeeperDismissedManuallyForType:(unsigned int)arg0;
+ (void)logStarkGatekeeperAppearedForType:(unsigned int)arg0;

- (void)recordFailure:(int)arg0 forConnectionType:(unsigned int)arg1;
- (void)recordSuccessForConnectionType:(unsigned int)arg0 isWarm:(char)arg1 forTimeInterval:(double)arg2;
- (void)recordSessionRetrySuccess;
- (void)connectionDidFail;
- (void)connectionDidDrop;
- (void)beginSessionRetryPreferringWWAN:(char)arg0;
- (void)startWaitingForSpeechResponse;
- (void)speechResponseReceived;
- (void)speechResponseFailure;
- (char)hasActiveRequest;
- (void)setHasActiveRequest:(char)arg0;
- (unsigned int)connectionType;
- (void)setConnectionType:(unsigned int)arg0;

@end
