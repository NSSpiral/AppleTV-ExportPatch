/* Runtime dump - OISFUMemoryDataRepresentation
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation
{
    NSData * mData;
}

- (void)dealloc;
- (NSData *)data;
- (OISFUMemoryDataRepresentation *)initWithData:(NSData *)arg0;
- (NSInputStream *)inputStream;
- (NSObject *)bufferedInputStreamWithBufferSize:(unsigned long)arg0;
- (unsigned long)readIntoData:(NSData *)arg0;
- (OISFUMemoryDataRepresentation *)initWithDataNoCopy:(id)arg0;
- (OISFUMemoryDataRepresentation *)initWithDataRepresentation:(NSData *)arg0;
- (char)hasSameLocationAs:(id)arg0;
- (char)isReadable;
- (NSInputStream *)bufferedInputStream;
- (long long)dataLength;

@end
