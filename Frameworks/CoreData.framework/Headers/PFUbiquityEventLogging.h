/* Runtime dump - PFUbiquityEventLogging
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityEventLogging : NSObject
{
    NSMutableSet * _logEvents;
    int _logLevel;
}

@property int logLevel;

+ (PFUbiquityEventLogging *)sharedEventLogger;
+ (void)initialize;

- (void)logEvent:(NSObject *)arg0 ID:(NSObject *)arg1 message:(NSString *)arg2;
- (NSObject *)createEventTrackingID:(int)arg0;
- (NSObject *)createCustomEventTrackingID:(NSObject *)arg0;
- (void)beginEvent:(NSObject *)arg0;
- (void)logEventData:(NSData *)arg0 message:(NSString *)arg1;
- (void)diagnostic:(id)arg0 message:(NSString *)arg1;
- (void)debug:(CDDebug *)arg0 message:(NSString *)arg1;
- (void)info:(NSDictionary *)arg0 message:(NSString *)arg1;
- (void)warning:(TSKWarning *)arg0 message:(NSString *)arg1;
- (void)error:(NSError *)arg0 message:(NSString *)arg1;
- (void)fatal:(id)arg0 message:(NSString *)arg1;
- (void)endEvent:(NSObject *)arg0;
- (id)incompleteEvents;
- (void)setLogLevel:(int)arg0;
- (void)dealloc;
- (PFUbiquityEventLogging *)init;
- (int)logLevel;

@end
