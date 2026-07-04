/* Runtime dump - MFDAMessage
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMessage : MFMailMessage
{
    DAMailMessage * _DAMailMessage;
    MFMessage * _rfc822CreatedMessage;
    MFMailboxUid * _mailbox;
    NSString * _externalConversationID;
}

@property (readonly, nonatomic) DAMailMessage * DAMailMessage;

- (void)dealloc;
- (unsigned long long)messageFlags;
- (unsigned int)messageSize;
- (MFMessageBody *)messageBody;
- (char)messageData:(id *)arg0 messageSize:(unsigned int *)arg1 isComplete:(char *)arg2 downloadIfNecessary:(char)arg3;
- (id)headersIfAvailable;
- (char *)remoteID;
- (MFMailboxUid *)mailbox;
- (NSString *)externalConversationID;
- (NSURL *)remoteMailboxURL;
- (DAMailMessage *)DAMailMessage;
- (MFDAMessage *)initWithDAMailMessage:(NSString *)arg0 mailbox:(MFMailboxUid *)arg1;
- (NSDictionary *)headers;

@end
