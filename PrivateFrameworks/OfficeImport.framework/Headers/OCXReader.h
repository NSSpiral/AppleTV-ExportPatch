/* Runtime dump - OCXReader
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXReader : OCDEncryptedReader
{
    OCPZipPackage * mZipPackage;
}

@property (retain, nonatomic) OCPZipPackage * zipPackage;

- (void)dealloc;
- (char)start;
- (char)retainDecryptorWithErrorCode:(int *)arg0;
- (BOOL)isBinaryReader;
- (NSObject *)read;
- (OCPZipPackage *)zipPackage;
- (void)setZipPackage:(OCPZipPackage *)arg0;
- (char)verifyFileFormat;
- (void)restartReaderToUseDecryptedDocument;

@end
