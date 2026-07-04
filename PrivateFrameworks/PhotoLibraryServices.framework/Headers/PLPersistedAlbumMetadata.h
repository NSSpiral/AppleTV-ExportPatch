/* Runtime dump - PLPersistedAlbumMetadata
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistedAlbumMetadata : NSObject
{
    char _pinned;
    char _inTrash;
    char _customSortAscending;
    char _allowsOverwite;
    char _isFolder;
    NSString * _title;
    NSString * _uuid;
    NSString * _cloudGUID;
    NSNumber * _kind;
    int _customSortKey;
    NSString * _customKeyAssetUUID;
    NSMutableOrderedSet * _assetUUIDs;
    PLGenericAlbum * _genericAlbum;
    NSURL * _metadataURL;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * uuid;
@property (retain, nonatomic) NSString * cloudGUID;
@property (retain, nonatomic) NSNumber * kind;
@property (readonly, nonatomic) char isFolder;
@property (nonatomic) char pinned;
@property (nonatomic) char inTrash;
@property (nonatomic) char customSortAscending;
@property (nonatomic) int customSortKey;
@property (retain, nonatomic) NSString * customKeyAssetUUID;
@property (retain, nonatomic) NSMutableOrderedSet * assetUUIDs;
@property (nonatomic) char allowsOverwite;
@property (retain, nonatomic) PLGenericAlbum * genericAlbum;
@property (retain, nonatomic) NSURL * metadataURL;

+ (char)isValidPath:(NSString *)arg0;
+ (char)isFolderMetadataPath:(NSString *)arg0;
+ (char)_isAlbumMetadataExtension:(id)arg0;
+ (char)_isFolderMetadataExtension:(id)arg0;
+ (char)isAlbumMetadataPath:(NSString *)arg0;

- (void)dealloc;
- (PLPersistedAlbumMetadata *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (char)isPinned;
- (void)setPinned:(char)arg0;
- (NSNumber *)kind;
- (NSString *)uuid;
- (void)setKind:(NSNumber *)arg0;
- (NSString *)cloudGUID;
- (void)setCloudGUID:(NSString *)arg0;
- (char)isFolder;
- (char)isInTrash;
- (PLPersistedAlbumMetadata *)initWithPersistedDataAtPath:(NSString *)arg0;
- (NSString *)insertAlbumFromDataInManagedObjectContext:(NSObject *)arg0;
- (void)updateChildrenOrderingInAlbum:(id)arg0 includePendingAssetChanges:(char)arg1;
- (void)setUuid:(NSString *)arg0;
- (char)customSortAscending;
- (void)setCustomSortAscending:(char)arg0;
- (int)customSortKey;
- (void)setCustomSortKey:(int)arg0;
- (PLPersistedAlbumMetadata *)initWithPLGenericAlbum:(PLGenericAlbum *)arg0;
- (void)persistAlbumData;
- (void)removePersistedAlbumData;
- (void)setInTrash:(char)arg0;
- (void)setAssetUUIDs:(NSMutableOrderedSet *)arg0;
- (void)setCustomKeyAssetUUID:(NSString *)arg0;
- (void)setGenericAlbum:(PLGenericAlbum *)arg0;
- (void)setMetadataURL:(NSURL *)arg0;
- (void)setAllowsOverwite:(char)arg0;
- (id)extensionForKind:(id)arg0;
- (void)_readMetadata;
- (void)_saveMetadata;
- (NSMutableOrderedSet *)assetUUIDs;
- (NSURL *)metadataURL;
- (NSString *)customKeyAssetUUID;
- (char)allowsOverwite;
- (PLPersistedAlbumMetadata *)initWithTitle:(NSString *)arg0 uuid:(NSString *)arg1 cloudGUID:(NSString *)arg2 kind:(NSNumber *)arg3 assetUUIDs:(NSMutableOrderedSet *)arg4;
- (PLGenericAlbum *)genericAlbum;

@end
