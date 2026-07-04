/* Runtime dump - OISFUZipArchive
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUZipArchive : NSObject
{
    NSMutableDictionary * mEntries;
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> * mDataRepresentation;
    NSData * mPassphraseVerifier;
    NSString * mPassphraseHint;
    OISFUCryptoKey * mCryptoKey;
    NSData * mEncryptedDocumentUuid;
}

+ (char)isZipArchiveAtPath:(NSString *)arg0;

- (void)dealloc;
- (char)isEncrypted;
- (NSString *)entryWithName:(NSString *)arg0;
- (OISFUZipArchive *)initWithPath:(NSString *)arg0 collapseCommonRootDirectory:(char)arg1 ignoreCase:(char)arg2;
- (void)readEntries;
- (void)collapseCommonRootDirectoryIgnoreCase:(char)arg0;
- (OISFUZipArchive *)initWithData:(NSData *)arg0 collapseCommonRootDirectory:(char)arg1 ignoreCase:(char)arg2;
- (NSArray *)allEntryNames;
- (OISFUZipArchive *)initWithPath:(NSString *)arg0 collapseCommonRootDirectory:(char)arg1;
- (OISFUZipArchive *)initWithData:(NSData *)arg0 collapseCommonRootDirectory:(char)arg1;
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
