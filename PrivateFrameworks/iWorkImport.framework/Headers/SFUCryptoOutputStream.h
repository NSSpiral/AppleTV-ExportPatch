/* Runtime dump - SFUCryptoOutputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream>
{
    <SFUOutputStream> * mBaseStream;
    SFUCryptor * mCryptor;
    char mIsClosed;
    char mComputeCrc32;
    unsigned int mCrc32;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)arg0 key:(NSString *)arg1;

- (unsigned int)crc32;
- (void)dealloc;
- (long long)offset;
- (void)close;
- (NSInputStream *)inputStream;
- (SFUCryptoOutputStream *)initForEncryptionWithOutputStream:(NSObject *)arg0 key:(NSString *)arg1 computeCrc32:(char)arg2;
- (SFUCryptoOutputStream *)initForEncryptionWithOutputStream:(NSObject *)arg0 key:(NSString *)arg1;
- (void)seekToOffset:(long long)arg0 whence:(int)arg1;
- (char)canCreateInputStream;
- (NSObject *)closeLocalStream;
- (void)writeBuffer:(char *)arg0 size:(unsigned long)arg1;
- (char)canSeek;

@end
