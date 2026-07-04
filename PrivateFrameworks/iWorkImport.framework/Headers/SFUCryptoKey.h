/* Runtime dump - SFUCryptoKey
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUCryptoKey : NSObject <TSPMutableCryptoInfo>
{
    unsigned int mIterationCount;
    char * mKey;
    unsigned long mKeyLength;
    NSData * mSaltData;
    NSString * _passphrase;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) SFUCryptoKey * cryptoKey;
@property (readonly, nonatomic) unsigned long preferredBlockSize;
@property (readonly, nonatomic) NSArray * blockInfos;
@property (readonly, nonatomic) unsigned long decodedLength;
@property (readonly, nonatomic) NSString * passphrase;

- (SFUCryptoKey *)cryptoKey;
- (unsigned long)decodedLength;
- (id)mutableCryptoInfoCopy;
- (NSArray *)blockInfos;
- (unsigned long)preferredBlockSize;
- (void)addBlockInfo:(NSDictionary *)arg0;
- (void)incrementDecodedLengthBy:(unsigned long)arg0;
- (void)dealloc;
- (void)reset;
- (char *)keyData;
- (NSString *)passphrase;
- (SFUCryptoKey *)initAes128KeyFromPassphrase:(char *)arg0 length:(unsigned int)arg1 iterationCount:(unsigned int)arg2 saltData:(NSData *)arg3;
- (unsigned int)iterationCount;
- (NSData *)saltData;
- (SFUCryptoKey *)initAes128KeyFromPassphrase:(char *)arg0 iterationCount:(unsigned int)arg1;
- (SFUCryptoKey *)initAes128KeyFromPassphrase:(char *)arg0 withIterationCountAndSaltDataFromCryptoKey:(NSString *)arg1;
- (SFUCryptoKey *)initAes128KeyFromPassphrase:(char *)arg0 length:(unsigned int)arg1 iterationCount:(unsigned int)arg2;
- (SFUCryptoKey *)initAes128KeyFromPassphrase:(char *)arg0 iterationCount:(unsigned int)arg1 saltData:(NSData *)arg2;
- (SFUCryptoKey *)initAes128Key:(char *)arg0 length:(unsigned int)arg1 iterationCount:(unsigned int)arg2;
- (int)keyType;
- (unsigned long)keyLength;

@end
