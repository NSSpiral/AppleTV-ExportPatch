/* Runtime dump - FTMessageDelivery_HTTP
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate>
{
    IDSRemoteURLConnection * _remoteConnection;
    char _pendingRetryAfterAirplaneMode;
    double _retryTimeAfterAirplaneMode;
}

- (void)dealloc;
- (FTMessageDelivery_HTTP *)init;
- (void)invalidate;
- (void)networkStateChanged;
- (void)_clearRetryTimer;
- (char)_sendMessageAsynchronously:(id)arg0 error:(id *)arg1;
- (void)queue:(FTMessageQueue *)arg0 hitTimeoutForMessage:(NSString *)arg1;
- (void)cancelMessage:(NSString *)arg0;
- (void)_serverBagLoaded:(id)arg0;
- (void)_cleanupURLConnection;
- (void)_dequeueIfNeeded;
- (NSURL *)_urlRequestWithURL:(NSString *)arg0 andData:(NSData *)arg1 message:(NSString *)arg2;
- (char)_tryRetryMessageWithTimeInterval:(double)arg0;
- (NSData *)_processResultData:(NSData *)arg0 forMessage:(NSString *)arg1 error:(id *)arg2;
- (void)_notifyDelegateAboutError:(NSError *)arg0 forMessage:(NSString *)arg1;
- (void)_updateWiFiAssertions;
- (char)sendMessage:(NSString *)arg0;
- (char)busy;

@end
