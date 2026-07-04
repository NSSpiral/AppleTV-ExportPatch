/* Runtime dump - OISFUCryptoKey
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUCryptoKey : NSObject
{
    unsigned int mIterationCount;
    char * mKey;
    unsigned long mKeyLength;
    NSData * mSaltData;
    NSString * _passphrase;
}

@property (readonly, nonatomic) NSString * passphrase;

- (void)dealloc;
- (char *)keyData;
- (NSString *)passphrase;
- (OISFUCryptoKey *)initAes128KeyFromPassphrase:(char *)arg0 length:(unsigned int)arg1 iterationCount:(unsigned int)arg2 saltData:(NSData *)arg3;
- (unsigned int)iterationCount;
- (NSData *)saltData;
- (OISFUCryptoKey *)initAes128KeyFromPassphrase:(char *)arg0 iterationCount:(unsigned int)arg1;
- (OISFUCryptoKey *)initAes128KeyFromPassphrase:(char *)arg0 withIterationCountAndSaltDataFromCryptoKey:(NSString *)arg1;
- (OISFUCryptoKey *)initAes128KeyFromPassphrase:(char *)arg0 length:(unsigned int)arg1 iterationCount:(unsigned int)arg2;
- (OISFUCryptoKey *)initAes128KeyFromPassphrase:(char *)arg0 iterationCount:(unsigned int)arg1 saltData:(NSData *)arg2;
- (OISFUCryptoKey *)initAes128Key:(char *)arg0 length:(unsigned int)arg1 iterationCount:(unsigned int)arg2;
- (int)keyType;
- (unsigned long)keyLength;

@end
