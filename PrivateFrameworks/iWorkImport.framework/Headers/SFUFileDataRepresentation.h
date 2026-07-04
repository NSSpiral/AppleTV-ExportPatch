/* Runtime dump - SFUFileDataRepresentation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUFileDataRepresentation : SFUDataRepresentation
{
    NSString * mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned long mFileType;
    char mHasFileAttributes;
    long long mPlaintextDataLength;
    SFUCryptoKey * mCryptoKey;
    <SFUInputStream> * mInputStream;
    char mDeleteFileWhenDone;
}

- (void)dealloc;
- (NSString *)description;
- (NSString *)path;
- (SFUFileDataRepresentation *)initWithPath:(NSString *)arg0;
- (unsigned long)fileType;
- (void)setFileType:(unsigned long)arg0;
- (char)isEncrypted;
- (NSInputStream *)inputStream;
- (SFUFileDataRepresentation *)initWithPath:(NSString *)arg0 sharedFileDescriptor:(int)arg1 cryptoKey:(SFUCryptoKey *)arg2 dataLength:(long long)arg3;
- (SFUFileDataRepresentation *)initWithCopyOfData:(NSData *)arg0 path:(NSString *)arg1 cryptoKey:(SFUCryptoKey *)arg2;
- (char)isCryptoKeyIdenticalToKey:(NSString *)arg0;
- (SFUFileDataRepresentation *)initWithPath:(NSString *)arg0 cryptoKey:(SFUCryptoKey *)arg1 dataLength:(long long)arg2;
- (void)readFileAttributes;
- (SFUFileDataRepresentation *)initWithInputStream:(NSObject *)arg0 cryptoKey:(SFUCryptoKey *)arg1 dataLength:(long long)arg2;
- (void)deleteFileWhenDone;
- (SFUFileDataRepresentation *)initWithCopyOfData:(NSData *)arg0 path:(NSString *)arg1;
- (SFUFileDataRepresentation *)initWithPath:(NSString *)arg0 sharedFileDescriptor:(int)arg1;
- (char)hasSameLocationAs:(id)arg0;
- (char)isReadable;
- (long long)encodedLength;
- (long long)dataLength;

@end
