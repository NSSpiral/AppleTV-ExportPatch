/* Runtime dump - SFUMemoryDataRepresentation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUMemoryDataRepresentation : SFUDataRepresentation
{
    NSData * mData;
}

- (void)dealloc;
- (NSData *)data;
- (SFUMemoryDataRepresentation *)initWithData:(NSData *)arg0;
- (NSInputStream *)inputStream;
- (NSObject *)bufferedInputStreamWithBufferSize:(unsigned long)arg0;
- (unsigned long)readIntoData:(NSData *)arg0;
- (SFUMemoryDataRepresentation *)initWithDataNoCopy:(id)arg0;
- (SFUMemoryDataRepresentation *)initWithDataRepresentation:(NSData *)arg0;
- (char)hasSameLocationAs:(id)arg0;
- (char)isReadable;
- (NSInputStream *)bufferedInputStream;
- (long long)dataLength;

@end
