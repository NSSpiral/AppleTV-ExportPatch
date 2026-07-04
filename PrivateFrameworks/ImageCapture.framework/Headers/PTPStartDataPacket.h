/* Runtime dump - PTPStartDataPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPStartDataPacket : NSObject
{
    unsigned long _transactionID;
    unsigned long long _totalDataSize;
}

- (NSString *)description;
- (unsigned long)transactionID;
- (NSData *)contentForTCP;
- (PTPStartDataPacket *)initWithTransactionID:(unsigned long)arg0 totalDataSize:(unsigned long long)arg1;
- (PTPStartDataPacket *)initWithTCPBuffer:(void *)arg0;
- (unsigned long long)totalDataSize;
- (void)setTransactionID:(unsigned long)arg0;
- (void)setTotalDataSize:(unsigned long long)arg0;

@end
