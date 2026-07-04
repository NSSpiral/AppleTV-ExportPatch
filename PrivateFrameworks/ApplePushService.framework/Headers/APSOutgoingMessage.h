/* Runtime dump - APSOutgoingMessage
 * Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSOutgoingMessage : APSMessage

@property (nonatomic) unsigned int timeout;
@property (nonatomic) char critical;
@property (nonatomic) unsigned int payloadFormat;
@property (nonatomic) unsigned int payloadLength;

- (NSDate *)timestamp;
- (void)setTimestamp:(unsigned long long)arg0;
- (void)setCancelled:(char)arg0;
- (void)setPriority:(int)arg0;
- (int)priority;
- (unsigned int)_effectiveSendTimeout;
- (id)eagernessTimeoutTime;
- (char)isEager;
- (id)sendTimeoutTime;
- (char)isCritical;
- (char)wasSent;
- (void)setSent:(char)arg0;
- (int)sendInterface;
- (void)setSendInterface:(int)arg0;
- (unsigned int)payloadFormat;
- (unsigned int)payloadLength;
- (void)setPayloadLength:(unsigned int)arg0;
- (NSString *)senderTokenName;
- (void)setSenderTokenName:(NSString *)arg0;
- (void)setMessageID:(unsigned int)arg0;
- (void)setPayloadFormat:(unsigned int)arg0;
- (void)setCritical:(char)arg0;
- (void)setTimeout:(unsigned int)arg0;
- (char)wasCancelled;
- (unsigned int)messageID;
- (unsigned int)timeout;
- (void)setTimedOut:(char)arg0;
- (char)hasTimedOut;

@end
