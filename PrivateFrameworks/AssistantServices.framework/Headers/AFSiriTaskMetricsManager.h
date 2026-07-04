/* Runtime dump - AFSiriTaskMetricsManager
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriTaskMetricsManager : NSObject
{
    NSObject<OS_dispatch_queue> * _duetQueue;
    CDSession * _coreDuetSession;
}

+ (AFSiriTaskMetricsManager *)sharedManager;

- (AFSiriTaskMetricsManager *)init;
- (void).cxx_destruct;
- (char)_parseCoreDuetAttributeValue:(id)arg0 aceId:(id *)arg1 duration:(double *)arg2;
- (void)registerPunchoutIdentifier:(NSString *)arg0;
- (void)retrieveMetricsFromPreviousPunchout:(id)arg0;
- (void)deleteRegisteredIdentifiers;

@end
