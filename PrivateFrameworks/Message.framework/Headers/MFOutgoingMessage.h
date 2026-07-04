/* Runtime dump - MFOutgoingMessage
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOutgoingMessage : MFMailMessage
{
    MFMessageBody * _messageBody;
    MFMutableMessageHeaders * _messageHeaders;
}

- (void)dealloc;
- (unsigned int)messageSize;
- (NSDictionary *)mutableHeaders;
- (void)setMessageBody:(MFMessageBody *)arg0;
- (NSObject *)messageStore;
- (MFMessageBody *)messageBody;
- (id)messageBodyIfAvailable;
- (NSData *)messageData;
- (char)messageData:(id *)arg0 messageSize:(unsigned int *)arg1 isComplete:(char *)arg2 downloadIfNecessary:(char)arg3;
- (void)setMutableHeaders:(NSDictionary *)arg0;
- (id)headersIfAvailable;
- (NSDictionary *)headers;

@end
