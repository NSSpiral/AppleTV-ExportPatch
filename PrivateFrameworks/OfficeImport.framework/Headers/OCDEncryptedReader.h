/* Runtime dump - OCDEncryptedReader
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCDEncryptedReader : OCDReader
{
    OCCDecryptor * mDecryptor;
}

@property (readonly, nonatomic) OCCDecryptor * decryptor;

- (void)dealloc;
- (char)retainDecryptorWithErrorCode:(int *)arg0;
- (OCCDecryptor *)decryptor;
- (void)restartReaderToUseDecryptedDocument;
- (void)useUnencryptedDocument;
- (id)defaultPassphrase;

@end
