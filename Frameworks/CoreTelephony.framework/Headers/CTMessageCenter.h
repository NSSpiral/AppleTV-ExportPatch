/* Runtime dump - CTMessageCenter
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMessageCenter : NSObject

+ (CTMessageCenter *)sharedMessageCenter;

- (char)sendSMSWithText:(NSString *)arg0 serviceCenter:(CTPhoneNumber *)arg1 toAddress:(NSString *)arg2 withID:(unsigned int)arg3;
- (NSString *)encodeMessage:(NSString *)arg0;
- (void)sendMessageAsSmsToShortCodeRecipients:(id)arg0 andReplaceData:(id *)arg1;
- (struct ?)sendMMSFromData:(NSData *)arg0 messageId:(unsigned int)arg1;
- (struct ?)send:(id)arg0 withMoreToFollow:(char)arg1;
- (struct ?)sendSMS:(id)arg0 withMoreToFollow:(char)arg1;
- (struct ?)sendMMS:(id)arg0;
- (NSObject *)incomingMessageWithId:(unsigned int)arg0 isDeferred:(char)arg1;
- (void)addMessageOfType:(int)arg0 toArray:(NSArray *)arg1 withIdsFromArray:(NSArray *)arg2;
- (char)isMmsConfigured;
- (char)sendSMSWithText:(NSString *)arg0 serviceCenter:(CTPhoneNumber *)arg1 toAddress:(NSString *)arg2 withMoreToFollow:(char)arg3 withID:(unsigned int)arg4;
- (struct ?)send:(id)arg0;
- (int)incomingMessageCount;
- (id)allIncomingMessages;
- (void)acknowledgeIncomingMessageWithId:(unsigned int)arg0;
- (void)acknowledgeOutgoingMessageWithId:(unsigned int)arg0;
- (NSObject *)incomingMessageWithId:(unsigned int)arg0;
- (NSObject *)deferredMessageWithId:(unsigned int)arg0;
- (id)statusOfOutgoingMessages;
- (NSString *)decodeMessage:(NSString *)arg0;
- (struct ?)isDeliveryReportsEnabled:(char *)arg0;
- (void)setDeliveryReportsEnabled:(char)arg0;
- (char)isMmsEnabled;
- (char)sendSMSWithText:(NSString *)arg0 serviceCenter:(CTPhoneNumber *)arg1 toAddress:(NSString *)arg2;
- (char)sendSMSWithText:(NSString *)arg0 serviceCenter:(CTPhoneNumber *)arg1 toAddress:(NSString *)arg2 withMoreToFollow:(char)arg3;
- (char)getCharacterCount:(int *)arg0 andMessageSplitThreshold:(int *)arg1 forSmsText:(NSString *)arg2;
- (char)simulateSmsReceived:(id)arg0;
- (char)simulateDeferredMessage;
- (void)dealloc;
- (CTMessageCenter *)init;

@end
