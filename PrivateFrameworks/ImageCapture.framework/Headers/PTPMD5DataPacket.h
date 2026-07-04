/* Runtime dump - PTPMD5DataPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPMD5DataPacket : NSObject
{
    unsigned short _operationCode;
    unsigned long _transactionID;
    id _data;
    NSData * _md5;
    NSString * _filepath;
    int _fd;
    long long _bufferSize;
    long long _offsetInBuffer;
    struct _PTPRange _range;
    long long _bytesTransferred;
}

- (void)dealloc;
- (NSString *)description;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (struct _PTPRange)range;
- (int)setRange:(struct _PTPRange)arg0;
- (unsigned long)transactionID;
- (long long)bufferSize;
- (NSData *)contentForTCP;
- (long long)copyToWrappedBytes:(NSData *)arg0 forTransport:(unsigned short)arg1;
- (void)setBytesTransferred:(long long)arg0;
- (PTPMD5DataPacket *)initWithTCPBuffer:(void *)arg0;
- (unsigned short)operationCode;
- (PTPMD5DataPacket *)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 andData:(NSData *)arg2;
- (void)setTransactionID:(unsigned long)arg0;
- (long long)copyToBuffer:(void *)arg0 numBytes:(long long)arg1;
- (NSString *)filepath;
- (PTPMD5DataPacket *)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned long)arg1 andFilepath:(id)arg2;
- (PTPMD5DataPacket *)initWithUSBBuffer:(void *)arg0;
- (id)contentForUSB;
- (NSObject *)contentForUSBUsingBuffer:(void *)arg0 capacity:(unsigned long)arg1;
- (void)setOperationCode:(unsigned short)arg0;
- (long long)offsetInBuffer;
- (long long)bytesTransferred;
- (long long)copyFromBuffer:(void *)arg0 numBytes:(long long)arg1;

@end
