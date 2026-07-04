/* Runtime dump - GQZArchive
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZArchive : NSObject
{
    NSMutableDictionary * mEntries;
    <GQZArchiveInputStream> * mInput;
    char mIsEncrypted;
    NSString * mFilename;
}

- (void)collapseCommonRootDirectory;
- (struct GQZEndOfCentralDirectory)readEndOfCentralDirectory;
- (char *)searchForEndOfCentralDirectoryOffset:(SEL)arg0;
- (struct GQZEndOfCentralDirectory)readZip64EndOfCentralDirectoryWithEocdOffset:(long long)arg0;
- (struct GQZEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromOffset:(long long)arg0;
- (NSArray *)entryNames;
- (void)dealloc;
- (NSString *)filename;
- (char)isEncrypted;
- (NSString *)entryWithName:(NSString *)arg0;
- (void)readEntries;
- (GQZArchive *)initWithPath:(NSString *)arg0 collapseCommonRootDirectory:(char)arg1;
- (GQZArchive *)initWithData:(NSData *)arg0 collapseCommonRootDirectory:(char)arg1;
- (NSObject *)readFilenameFromBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)readExtraFieldFromBuffer:(char *)arg0 size:(unsigned long)arg1 entry:(unsigned short)arg2;

@end
