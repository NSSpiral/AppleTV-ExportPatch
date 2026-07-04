/* Runtime dump - PTPEndDataPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPEndDataPacket : NSObject
{
    unsigned short _operationCode;
    unsigned long _transactionID;
    NSData * _data;
}

- (void)dealloc;
- (NSString *)description;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (unsigned long)transactionID;
- (NSData *)contentForTCP;
- (PTPEndDataPacket *)initWithTCPBuffer:(void *)arg0;
- (unsigned short)operationCode;
- (PTPEndDataPacket *)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 andData:(NSData *)arg2;
- (void)setTransactionID:(unsigned long)arg0;
- (PTPEndDataPacket *)initWithUSBBuffer:(void *)arg0;
- (id)contentForUSB;
- (NSObject *)contentForUSBUsingBuffer:(void *)arg0 capacity:(unsigned long)arg1;
- (void)setOperationCode:(unsigned short)arg0;

@end
