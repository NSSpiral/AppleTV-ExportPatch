/* Runtime dump - SFUZipArchiveOutputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream>
{
    SFUMoveableFileOutputStream * mOutputStream;
    SFUCryptoKey * mCryptoKey;
    NSData * mPassphraseHint;
    NSData * mEncryptedDocumentUuid;
    NSMutableArray * mEntries;
    SFUZipOutputEntry * mCurrentEntry;
    SFUZipOutputEntry * mLastEntryInFile;
    <SFUOutputStream> * mEntryOutputStream;
    char * mBuffer;
    NSMutableArray * mFreeList;
    SFUZipFreeSpaceEntry * mCurrentFreeSpace;
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
- (SFUZipArchiveOutputStream *)initWithPath:(NSString *)arg0;
- (void)moveToPath:(NSString *)arg0;
- (unsigned int)crc32ForEntry:(NSString *)arg0;
- (void)writeBuffer:(char *)arg0 size:(unsigned long)arg1;
- (SFUZipArchiveOutputStream *)initWithPath:(NSString *)arg0 cryptoKey:(SFUCryptoKey *)arg1 passphraseHint:(NSString *)arg2;
- (SFUZipArchiveOutputStream *)initWithOutputStream:(NSObject *)arg0 cryptoKey:(SFUCryptoKey *)arg1 passphraseHint:(NSString *)arg2;
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
