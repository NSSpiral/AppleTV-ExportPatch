/* Runtime dump - BRCPackageItem
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPackageItem : NSObject
{
    BRCLocalContainer * _container;
    char _isDirty;
    NSString * _symlinkContent;
    NSData * _contentSignature;
    char _mode;
    int _type;
    BRCGenerationID * _generationID;
    NSString * _pathInPackage;
    NSData * _quarantineInfo;
    long long _assetRank;
    unsigned long long _packageID;
    unsigned long long _fileID;
    long long _mtime;
    long long _size;
}

@property (readonly, nonatomic) unsigned long long packageDocumentID;
@property (readonly, nonatomic) unsigned long long fileID;
@property (readonly, nonatomic) BRCGenerationID * generationID;
@property (readonly, nonatomic) NSString * pathInPackage;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) long long assetRank;
@property (readonly, nonatomic) char isFile;
@property (readonly, nonatomic) char isSymlink;
@property (readonly, nonatomic) char isDirectory;
@property (readonly, nonatomic) long long mtime;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) char mode;
@property (readonly, nonatomic) NSData * contentSignature;
@property (readonly, nonatomic) NSData * quarantineInfo;
@property (readonly, nonatomic) NSString * symlinkContent;

+ (char)dumpContainer:(NSObject *)arg0 toContext:(NSObject *)arg1 error:(id *)arg2;
+ (long long)aggregatePackageSizeInContainer:(NSObject *)arg0 packageID:(unsigned int)arg1;
+ (char)packageChangedAtRelativePath:(NSString *)arg0;
+ (long long)largestPackageItemSizeInContainer:(NSObject *)arg0 documentID:(unsigned int)arg1;
+ (struct PQLResultSet *)packageItemsForItem:(NSObject *)arg0 order:(unsigned int)arg1;
+ (char)updateSigaturesForFilesInItem:(NSObject *)arg0 fromCKPackage:(CKPackage *)arg1 error:(id *)arg2;
+ (char)updateSnapshotAtPath:(NSString *)arg0 error:(id *)arg1;
+ (NSObject *)packageItemInContainer:(NSObject *)arg0 documentID:(unsigned int)arg1 relativePath:(NSString *)arg2;
+ (struct PQLResultSet *)packageItemsForDocumentID:(unsigned int)arg0 order:(unsigned int)arg1 container:(BRCLocalContainer *)arg2;
+ (char)_deleteSnapshotAtPath:(NSString *)arg0 error:(id *)arg1;
+ (char)_rescanDirectoryInPackage:(id)arg0 error:(id *)arg1;
+ (NSString *)packageItemForRelpath:(id)arg0;

- (long long)size;
- (NSString *)description;
- (int)type;
- (char)mode;
- (void).cxx_destruct;
- (char)isFile;
- (long long)mtime;
- (unsigned long long)fileID;
- (BRCGenerationID *)generationID;
- (char)saveToDB;
- (char)isDirectory;
- (NSData *)contentSignature;
- (NSData *)quarantineInfo;
- (NSString *)symlinkContent;
- (BRCPackageItem *)initWithPBItem:(NSObject *)arg0 forLocalItem:(NSObject *)arg1;
- (BRCPackageItem *)initFromPQLResultSet:(NSSet *)arg0 container:(BRCLocalContainer *)arg1 error:(id *)arg2;
- (char)isSymlink;
- (BRCPackageItem *)initWithRelativePath:(NSString *)arg0 markDirty:(char)arg1;
- (char)changedAtRelpath:(id)arg0;
- (long long)assetRank;
- (unsigned long long)packageDocumentID;
- (NSString *)pathInPackage;

@end
