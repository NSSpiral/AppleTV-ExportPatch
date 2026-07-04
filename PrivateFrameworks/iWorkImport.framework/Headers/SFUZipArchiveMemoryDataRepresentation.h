/* Runtime dump - SFUZipArchiveMemoryDataRepresentation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation>
{
    NSData * mData;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSData *)data;
- (SFUZipArchiveMemoryDataRepresentation *)initWithData:(NSData *)arg0;
- (NSInputStream *)inputStream;
- (NSObject *)bufferedInputStreamWithBufferSize:(unsigned long)arg0;
- (char)hasSameLocationAs:(id)arg0;
- (char)isReadable;
- (NSSet *)inputStreamWithOffset:(long long)arg0 length:(long long)arg1;
- (NSInputStream *)bufferedInputStream;
- (NSSet *)bufferedInputStreamWithOffset:(long long)arg0 length:(long long)arg1;
- (long long)dataLength;

@end
