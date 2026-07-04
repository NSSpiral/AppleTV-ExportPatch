/* Runtime dump - OISFUZipArchiveOutputStream
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream>
{
    OISFUMoveableFileOutputStream * mOutputStream;
    OISFUCryptoKey * mCryptoKey;
    NSData * mPassphraseHint;
    NSData * mEncryptedDocumentUuid;
    NSMutableArray * mEntries;
    OISFUZipOutputEntry * mCurrentEntry;
    OISFUZipOutputEntry * mLastEntryInFile;
    <SFUOutputStream> * mEntryOutputStream;
    char * mBuffer;
    NSMutableArray * mFreeList;
    OISFUZipFreeSpaceEntry * mCurrentFreeSpace;
    unsigned long long mFreeBytes;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (unsigned long)approximateBytesForEntryHeaderWithName:(NSString *)arg0;

- (NSArray *)entryNames;
- (void)dealloc;
- (void)flush;
- (void)reset;
- (void)close;
- (OISFUZipArchiveOutputStream *)initWithPath:(NSString *)arg0;
- (void)moveToPath:(NSString *)arg0;
- (unsigned int)crc32ForEntry:(NSString *)arg0;
- (void)writeBuffer:(char *)arg0 size:(unsigned long)arg1;
- (OISFUZipArchiveOutputStream *)initWithPath:(NSString *)arg0 cryptoKey:(SFUCryptoKey *)arg1 passphraseHint:(NSString *)arg2;
- (OISFUZipArchiveOutputStream *)initWithOutputStream:(NSObject *)arg0 cryptoKey:(SFUCryptoKey *)arg1 passphraseHint:(NSString *)arg2;
- (void)finishEntry;
- (unsigned long)writeLocalFileHeaderForEntry:(id)arg0;
- (void)beginEntryWithName:(NSString *)arg0 isCompressed:(char)arg1 uncompressedSize:(unsigned long long)arg2;
- (void)beginUnknownSizeEntryWithName:(NSString *)arg0 isCompressed:(char)arg1;
- (void)writeCentralFileHeaderUsingEntry:(id)arg0 isFirstEntry:(char)arg1;
- (void)writeEndOfCentralDirectoryWithOffset:(long long)arg0;
- (NSString *)beginUncompressedUnknownSizeEntryWithName:(NSString *)arg0;
- (void)setCrc32ForCurrentEntry:(unsigned int)arg0;
- (char)canRemoveEntryWithName:(NSString *)arg0;
- (void)removeEntryWithName:(NSString *)arg0;
- (void)setEncryptedDocumentUuid:(id)arg0;
- (NSString *)entriesAtPath:(NSString *)arg0;
- (unsigned long long)freeBytes;
- (void)coalesceAndTruncateFreeSpace;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg0;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg0;

@end
