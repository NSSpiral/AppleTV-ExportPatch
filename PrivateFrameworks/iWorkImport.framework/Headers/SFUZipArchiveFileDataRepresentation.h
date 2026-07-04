/* Runtime dump - SFUZipArchiveFileDataRepresentation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation>
{
    SFUFileDataRepresentation * mFileRepresentation;
    int mFd;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)path;
- (SFUZipArchiveFileDataRepresentation *)initWithPath:(NSString *)arg0;
- (char)isEncrypted;
- (NSInputStream *)inputStream;
- (char)hasSameLocationAs:(id)arg0;
- (char)isReadable;
- (NSSet *)inputStreamWithOffset:(long long)arg0 length:(long long)arg1;
- (NSSet *)bufferedInputStreamWithOffset:(long long)arg0 length:(long long)arg1;
- (long long)dataLength;

@end
