/* Runtime dump - SFUCryptoUtils
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUCryptoUtils : NSObject

+ (unsigned int)ivLengthForKey:(NSString *)arg0;
+ (SFUCryptoUtils *)generateRandomSaltWithLength:(unsigned long)arg0;
+ (char)generateRandomDataInBuffer:(char *)arg0 length:(unsigned long)arg1;
+ (NSData *)sha256HashFromData:(NSData *)arg0;
+ (char)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg0;
+ (SFUCryptoUtils *)saltForSageFiles;
+ (SFUCryptoUtils *)generateRandomSalt;
+ (SFUCryptoUtils *)hashForPassphrase:(id)arg0 withSalt:(id)arg1;
+ (unsigned int)iterationCountFromPassphraseVerifier:(id)arg0;
+ (SFUCryptoUtils *)saltFromVerifier:(id)arg0 saltLength:(unsigned long)arg1;
+ (char)checkKey:(NSString *)arg0 againstPassphraseVerifier:(id)arg1;
+ (NSString *)newBufferedInputStreamForDecryptingFile:(NSString *)arg0 key:(NSString *)arg1 isDeflated:(char)arg2 zipStream:(id *)arg3;
+ (NSBundle *)newBufferedInputStreamForDecryptingZippedBundle:(NSObject *)arg0 key:(NSString *)arg1 zipArchive:(TSUZipFileArchive *)arg2 isDeflated:(char)arg3 zipStream:(id *)arg4;
+ (SFUCryptoUtils *)decodePassphraseHint:(id)arg0;
+ (SFUCryptoUtils *)sha256HashFromStorage:(id)arg0;
+ (NSString *)sha256HashFromString:(NSString *)arg0;
+ (SFUCryptoUtils *)sha1HashFromStorage:(id)arg0;
+ (SFUCryptoUtils *)encodePassphraseHint:(id)arg0;
+ (NSString *)generatePassphraseVerifierForKey:(NSString *)arg0 verifierVersion:(unsigned short)arg1;

@end
