/* Runtime dump - FTMessageDelivery
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate>
{
    unsigned int _retries;
    NSNumber * _protocolVersion;
    FTMessageQueue * _queue;
    NSString * _userAgent;
    unsigned int _maxConcurrentMessages;
    char _retryInAirplaneMode;
    char _logToRegistration;
    IMTimer * _timer;
}

@property (copy) NSString * userAgent;
@property (copy) NSNumber * protocolVersion;
@property (readonly) char hasQueuedItems;
@property (readonly) char busy;
@property char retryInAirplaneMode;
@property char logToRegistration;
@property (readonly) IDSBaseMessage * currentMessage;
@property (readonly) NSArray * queuedMessages;
@property (readonly) NSArray * allMessages;
@property (readonly) int maxMessageSize;
@property (readonly) int maxLargeMessageSize;
@property unsigned int maxConcurrentMessages;

+ (FTMessageDelivery *)alloc;
+ (FTMessageDelivery *)_errorForTDMessageDeliveryStatus:(int)arg0 userInfo:(NSDictionary *)arg1;
+ (Class)HTTPMessageDeliveryClass;
+ (Class)APNSMessageDeliveryClass;

- (void)dealloc;
- (FTMessageDelivery *)init;
- (void)invalidate;
- (NSOperationQueue *)_queue;
- (NSNumber *)protocolVersion;
- (void)setProtocolVersion:(NSNumber *)arg0;
- (void)networkStateChanged;
- (void)_clearRetryTimer;
- (NSArray *)queuedMessages;
- (char)logToRegistration;
- (char)_sendMessageAsynchronously:(id)arg0 error:(id *)arg1;
- (void)_retryTimerHit:(id)arg0;
- (int)maxMessageSize;
- (void)queue:(FTMessageQueue *)arg0 hitTimeoutForMessage:(NSString *)arg1;
- (void)_informDelegateAboutMessage:(NSString *)arg0 error:(NSError *)arg1 result:(NSObject *)arg2 resultCode:(int)arg3;
- (IDSBaseMessage *)currentMessage;
- (NSArray *)allMessages;
- (char)hasQueuedItems;
- (void)cancelMessage:(NSString *)arg0;
- (void)_setRetryTimer:(double)arg0;
- (int)maxLargeMessageSize;
- (void)_signMessage:(NSString *)arg0 useDataSignatures:(char)arg1 body:(id /* block */)arg2 queryString:(NSString *)arg3 intoDictionary:(NSDictionary *)arg4;
- (void)setLogToRegistration:(char)arg0;
- (unsigned int)maxConcurrentMessages;
- (void)setMaxConcurrentMessages:(unsigned int)arg0;
- (char)retryInAirplaneMode;
- (void)setRetryInAirplaneMode:(char)arg0;
- (void)setUserAgent:(NSString *)arg0;
- (char)sendMessage:(NSString *)arg0;
- (NSString *)userAgent;
- (char)busy;

@end
