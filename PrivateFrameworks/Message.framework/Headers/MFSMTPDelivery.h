/* Runtime dump - MFSMTPDelivery
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSMTPDelivery : MFMailDelivery
{
    MFSMTPConnection * _connection;
}

- (void)dealloc;
- (void)setAccount:(DeliveryAccount *)arg0;
- (NSData *)deliverMessageData:(NSData *)arg0 toRecipients:(NSArray *)arg1;
- (Class)deliveryClass;
- (void)_openConnection;

@end
