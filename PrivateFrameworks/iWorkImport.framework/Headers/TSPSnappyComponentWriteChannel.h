/* Runtime dump - TSPSnappyComponentWriteChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    char * _uncompressedBuffer;
    unsigned long _uncompressedLength;
    <TSPComponentWriteChannel> * _writeChannel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSPSnappyComponentWriteChannel *)initWithWriteChannel:(<TSPComponentWriteChannel> *)arg0;
- (void)writeBlock;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (void)writeData:(NSData *)arg0;

@end
