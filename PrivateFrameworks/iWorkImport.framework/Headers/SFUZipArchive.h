/* Runtime dump - SFUZipArchive
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUZipArchive : NSObject
{
    NSMutableDictionary * mEntries;
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> * mDataRepresentation;
    NSData * mPassphraseVerifier;
    NSString * mPassphraseHint;
    SFUCryptoKey * mCryptoKey;
    NSData * mEncryptedDocumentUuid;
}

+ (char)isZipArchiveAtPath:(NSString *)arg0;

- (char)decompressAtPath:(NSString *)arg0 wasEmpty:(char *)arg1;
- (id)commonRootDirectoryIgnoringCase:(char)arg0;
- (void)dealloc;
- (char)isEncrypted;
- (NSString *)entryWithName:(NSString *)arg0;
- (SFUZipArchive *)initWithPath:(NSString *)arg0 collapseCommonRootDirectory:(char)arg1 ignoreCase:(char)arg2;
- (void)readEntries;
- (void)collapseCommonRootDirectoryIgnoreCase:(char)arg0;
- (SFUZipArchive *)initWithData:(NSData *)arg0 collapseCommonRootDirectory:(char)arg1 ignoreCase:(char)arg2;
- (NSArray *)allEntryNames;
- (SFUZipArchive *)initWithPath:(NSString *)arg0 collapseCommonRootDirectory:(char)arg1;
- (SFUZipArchive *)initWithData:(NSData *)arg0 collapseCommonRootDirectory:(char)arg1;
- (NSString *)entryWithName:(NSString *)arg0 dataLength:(long long)arg1;
- (id)passphraseVerifier;
- (NSString *)passphraseHint;
- (id)encryptedDocumentUuid;
- (char)decompressAtPath:(NSString *)arg0;
- (struct SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(NSObject *)arg0;
- (NSObject *)readFilenameFromBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)readExtraFieldFromBuffer:(char *)arg0 size:(unsigned long)arg1 entry:(unsigned short)arg2;
- (char *)searchForEndOfCentralDirectoryFromInputStream:(SEL)arg0 offset:(NSSet *)arg1;
- (struct SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(NSObject *)arg0 eocdOffset:(long long)arg1;
- (struct SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(NSObject *)arg0 offset:(long long)arg1;
- (void)setCryptoKey:(SFUCryptoKey *)arg0;

@end
