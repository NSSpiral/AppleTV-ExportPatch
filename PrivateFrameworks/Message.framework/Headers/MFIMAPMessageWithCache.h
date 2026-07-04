/* Runtime dump - MFIMAPMessageWithCache
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFIMAPMessageWithCache : MFIMAPMessage
{
    NSData * _messageData;
    MFMessageHeaders * _headers;
}

- (void)dealloc;
- (NSMutableData *)headerData;
- (char)isMessageContentsLocallyAvailable;
- (NSData *)messageData;
- (id)headersIfAvailable;
- (void)setMessageData:(NSData *)arg0 isPartial:(char)arg1;
- (MFMessageHeaders *)headers;
- (void)setHeaders:(MFMessageHeaders *)arg0;

@end
