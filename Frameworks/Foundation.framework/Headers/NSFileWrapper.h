/* Runtime dump - NSFileWrapper
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWrapper : NSObject <NSCoding>
{
    NSDictionary * _fileAttributes;
    NSString * _preferredFileName;
    NSString * _fileName;
    id _contents;
    id _icon;
    id _moreVars;
}

@property (readonly) char directory;
@property (readonly) char regularFile;
@property (readonly) char symbolicLink;
@property (copy) NSString * preferredFilename;
@property (copy) NSString * filename;
@property (copy) NSDictionary * fileAttributes;
@property (readonly, copy) NSData * serializedRepresentation;
@property (readonly, copy) NSDictionary * fileWrappers;
@property (readonly, copy) NSData * regularFileContents;
@property (readonly, copy) NSURL * symbolicLinkDestinationURL;

+ (NSURL *)_pathForURL:(NSURL *)arg0 reading:(char)arg1 error:(id *)arg2;
+ (char)_canSafelyMapFilesAtPath:(NSString *)arg0;
+ (char)_forPath:(NSString *)arg0 getItemKind:(id *)arg1 modificationDate:(id *)arg2;
+ (NSURL *)_newContentsAtURL:(NSURL *)arg0 path:(NSString *)arg1 itemKind:(NSString *)arg2 oldChildrenByUniqueFileName:(NSString *)arg3 options:(unsigned int)arg4 error:(id *)arg5;
+ (void)_writeAttributes:(NSDictionary *)arg0 toURL:(NSURL *)arg1;
+ (void)initialize;
+ (void)_removeTemporaryDirectoryAtURL:(NSURL *)arg0;
+ (NSURL *)_temporaryDirectoryURLForWritingToURL:(NSURL *)arg0 error:(id *)arg1;
+ (char)_finishWritingToURL:(NSURL *)arg0 byTakingContentsFromItemAtURL:(NSURL *)arg1 addingAttributes:(NSDictionary *)arg2 usingTemporaryDirectoryAtURL:(NSURL *)arg3 backupFileName:(NSString *)arg4 error:(id *)arg5;
+ (char)_finishWritingToURL:(NSURL *)arg0 byMovingItemAtURL:(NSURL *)arg1 addingAttributes:(NSDictionary *)arg2 error:(id *)arg3;

- (char)_readContentsFromURL:(NSURL *)arg0 path:(NSString *)arg1 itemKind:(NSString *)arg2 options:(unsigned int)arg3 error:(id *)arg4;
- (NSString *)preferredFilename;
- (NSObject *)_addChild:(NSObject *)arg0 forUniqueFileName:(NSString *)arg1;
- (void)_initDirectoryContents;
- (NSFileWrapper *)_initWithImpl:(id)arg0 preferredFileName:(NSString *)arg1 uniqueFileName:(NSString *)arg2 docInfo:(NSDocInfo *)arg3 iconData:(NSData *)arg4;
- (void)_removeParent:(NSObject *)arg0;
- (NSDictionary *)fileWrappers;
- (void)removeFileWrapper:(NSObject *)arg0;
- (NSObject *)addFileWrapper:(NSObject *)arg0;
- (void)_observePreferredFileNameOfChild:(NSObject *)arg0;
- (char)isSymbolicLink;
- (char)_matchesItemKind:(id)arg0 modificationDate:(NSDate *)arg1;
- (char)matchesContentsOfURL:(NSURL *)arg0;
- (char)readFromURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (void)_removeChild:(NSObject *)arg0 forUniqueFileName:(NSString *)arg1;
- (void)setFileAttributes:(NSDictionary *)arg0;
- (void)_forWritingToURL:(NSURL *)arg0 returnContentsLazyReadingError:(id *)arg1;
- (NSURL *)symbolicLinkDestinationURL;
- (void)_updateDescendantFileNames;
- (char)_writeContentsToURL:(NSURL *)arg0 path:(NSString *)arg1 originalContentsURL:(NSURL *)arg2 tryHardLinking:(char)arg3 didHardLinking:(char *)arg4 error:(id *)arg5;
- (id)_attributesToWrite;
- (id)_newImpl;
- (void)_addParent:(NSObject *)arg0;
- (NSObject *)keyForFileWrapper:(NSObject *)arg0;
- (void)_resetFileModificationDate;
- (NSObject *)_uniqueFileNameOfChild:(NSObject *)arg0;
- (NSData *)serializedRepresentation;
- (NSFileWrapper *)initDirectoryWithFileWrappers:(NSDictionary *)arg0;
- (NSFileWrapper *)initSymbolicLinkWithDestinationURL:(NSURL *)arg0;
- (id)addRegularFileWithContents:(id)arg0 preferredFilename:(NSString *)arg1;
- (NSString *)_fullDescription:(char)arg0;
- (void)dealloc;
- (NSFileWrapper *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSFileWrapper *)init;
- (NSFileWrapper *)_init;
- (NSFileWrapper *)initWithSerializedRepresentation:(NSData *)arg0;
- (NSFileWrapper *)initWithURL:(NSString *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (char)isRegularFile;
- (NSData *)regularFileContents;
- (char)writeToURL:(NSURL *)arg0 options:(unsigned int)arg1 originalContentsURL:(NSURL *)arg2 error:(id *)arg3;
- (NSString *)filename;
- (char)isDirectory;
- (void)setFilename:(NSString *)arg0;
- (NSDictionary *)fileAttributes;
- (NSFileWrapper *)initRegularFileWithContents:(id)arg0;
- (void)setPreferredFilename:(NSString *)arg0;

@end
