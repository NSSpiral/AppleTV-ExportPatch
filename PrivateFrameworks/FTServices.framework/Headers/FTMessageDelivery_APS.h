/* Runtime dump - FTMessageDelivery_APS
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTMessageDelivery_APS : FTMessageDelivery <FTMessageQueueDelegate, APSConnectionDelegate>
{
    Class _APSConnectionClass;
    Class _APSOutgoingMessageClass;
    APSConnection * _connection;
    int _messageSize;
    int _largeMessageSize;
    NSMutableArray * _enabledTopics;
    NSMutableDictionary * _ftMessageMap;
    NSMutableDictionary * _startDateMap;
    NSMutableDictionary * _bodyMap;
    NSMutableDictionary * _apsMessageMap;
    NSMutableDictionary * _timerMap;
    NSMutableDictionary * _deathTimerMap;
    NSMutableDictionary * _retriesMap;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (FTMessageDelivery_APS *)sharedInstance;

- (void)dealloc;
- (FTMessageDelivery_APS *)init;
- (void)invalidate;
- (APSConnection *)connection;
- (void)connection:(APSConnection *)arg0 didReceivePublicToken:(NSString *)arg1;
- (void)connection:(APSConnection *)arg0 didReceiveMessageForTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)connection:(APSConnection *)arg0 didSendOutgoingMessage:(NSString *)arg1;
- (void)connection:(APSConnection *)arg0 didFailToSendOutgoingMessage:(NSString *)arg1 error:(NSError *)arg2;
- (void)connection:(APSConnection *)arg0 didChangeConnectedStatus:(char)arg1;
- (char)_sendMessageAsynchronously:(id)arg0 error:(id *)arg1;
- (int)maxMessageSize;
- (void)queue:(FTMessageQueue *)arg0 hitTimeoutForMessage:(NSString *)arg1;
- (NSArray *)allMessages;
- (void)cancelMessage:(NSString *)arg0;
- (int)maxLargeMessageSize;
- (void)_serverBagLoaded:(id)arg0;
- (void)_dequeueIfNeeded;
- (void)_notifyDelegateAboutError:(NSError *)arg0 forMessage:(NSString *)arg1;
- (void)_setEnabledTopics:(id)arg0;
- (void)_invalidateTimerForMessageID:(NSString *)arg0;
- (void)_messageCompletelyTimedOut:(id)arg0;
- (void)_invalidateDeathTimerForMessageID:(NSString *)arg0;
- (id)_currentMessages;
- (NSString *)_apsOutgoingMessageForFTMessage:(NSString *)arg0;
- (NSString *)_messageForAPSOutgoingMessage:(NSString *)arg0;
- (char)_fillMessageParameters:(id *)arg0 ftMessage:(id *)arg1;
- (int)_retryCountForMessage:(NSString *)arg0;
- (void)_messageNeedsRetry:(id)arg0;
- (void)_setMapForMessage:(NSString *)arg0 apsMessage:(NSString *)arg1 messageBody:(NSObject *)arg2 timeoutTime:(double)arg3 timeoutSelector:(SEL)arg4 retries:(unsigned int)arg5;
- (void)_clearMapForMessageID:(NSString *)arg0;
- (void)_messageACKTimedOut:(id)arg0;
- (void)_messageSendTimedOut:(id)arg0;
- (NSString *)_apsMessageForMessage:(NSString *)arg0 body:(id /* block */)arg1;
- (void)_noteMessageSent:(id)arg0 ftMessage:(NSString *)arg1 body:(id /* block */)arg2;
- (void)_updateTopics;
- (void)_noteMessageFailed:(id)arg0 ftMessage:(NSString *)arg1 allowRetry:(char)arg2 error:(NSError *)arg3;
- (NSString *)_bodyForMessage:(NSString *)arg0;
- (void)_sendMessage:(NSString *)arg0 ftMessage:(NSString *)arg1;
- (id)_requiredTopics;
- (NSString *)_apsMessageBodyForMessage:(NSString *)arg0;
- (void)_powerLogEvent:(NSObject *)arg0 dictionary:(NSDictionary *)arg1;
- (void)_noteMessageSucceeded:(id)arg0 ftMessage:(NSString *)arg1 error:(NSError *)arg2 result:(NSObject *)arg3 resultCode:(int)arg4;
- (char)_isBusyWithMessage:(NSString *)arg0;
- (void)_noteMessageACKd:(id)arg0 ftMessage:(NSString *)arg1;
- (id)_currentAPSMessages;
- (id)_currentTimers;
- (char)sendMessage:(NSString *)arg0;
- (char)busy;

@end
