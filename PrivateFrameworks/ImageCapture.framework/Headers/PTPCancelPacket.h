/* Runtime dump - PTPCancelPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCancelPacket : NSObject
{
    unsigned long _transactionID;
}

- (NSString *)description;
- (unsigned long)transactionID;
- (NSData *)contentForTCP;
- (PTPCancelPacket *)initWithTCPBuffer:(void *)arg0;
- (PTPCancelPacket *)initWithTransactionID:(unsigned long)arg0;
- (void)setTransactionID:(unsigned long)arg0;

@end
