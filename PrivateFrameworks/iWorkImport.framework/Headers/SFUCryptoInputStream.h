/* Runtime dump - SFUCryptoInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUCryptoInputStream : NSObject <SFUInputStream>
{
    <SFUInputStream> * mBaseStream;
    SFUCryptor * mCryptor;
    long long mOffset;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (long long)offset;
- (void)close;
- (void)seekToOffset:(long long)arg0;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (NSObject *)closeLocalStream;
- (SFUCryptoInputStream *)initForDecryptionWithInputStream:(NSObject *)arg0 key:(NSString *)arg1;
- (char)canSeek;

@end
