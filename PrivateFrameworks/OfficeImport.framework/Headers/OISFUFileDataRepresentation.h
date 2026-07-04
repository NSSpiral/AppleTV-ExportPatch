/* Runtime dump - OISFUFileDataRepresentation
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUFileDataRepresentation : OISFUDataRepresentation
{
    NSString * mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned long mFileType;
    char mHasFileAttributes;
    long long mPlaintextDataLength;
    OISFUCryptoKey * mCryptoKey;
    <SFUInputStream> * mInputStream;
    char mDeleteFileWhenDone;
}

- (void)dealloc;
- (NSString *)description;
- (NSString *)path;
- (OISFUFileDataRepresentation *)initWithPath:(NSString *)arg0;
- (unsigned long)fileType;
- (void)setFileType:(unsigned long)arg0;
- (char)isEncrypted;
- (NSInputStream *)inputStream;
- (OISFUFileDataRepresentation *)initWithPath:(NSString *)arg0 sharedFileDescriptor:(int)arg1 cryptoKey:(SFUCryptoKey *)arg2 dataLength:(long long)arg3;
- (OISFUFileDataRepresentation *)initWithCopyOfData:(NSData *)arg0 path:(NSString *)arg1 cryptoKey:(SFUCryptoKey *)arg2;
- (char)isCryptoKeyIdenticalToKey:(NSString *)arg0;
- (OISFUFileDataRepresentation *)initWithPath:(NSString *)arg0 cryptoKey:(SFUCryptoKey *)arg1 dataLength:(long long)arg2;
- (void)readFileAttributes;
- (OISFUFileDataRepresentation *)initWithInputStream:(NSObject *)arg0 cryptoKey:(SFUCryptoKey *)arg1 dataLength:(long long)arg2;
- (void)deleteFileWhenDone;
- (OISFUFileDataRepresentation *)initWithCopyOfData:(NSData *)arg0 path:(NSString *)arg1;
- (OISFUFileDataRepresentation *)initWithPath:(NSString *)arg0 sharedFileDescriptor:(int)arg1;
- (char)hasSameLocationAs:(id)arg0;
- (char)isReadable;
- (long long)encodedLength;
- (long long)dataLength;

@end
