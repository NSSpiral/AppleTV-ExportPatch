/* Runtime dump - PHFetchOptions
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFetchOptions : NSObject <NSCopying>
{
    char _includeHiddenAssets;
    char _includeAllBurstAssets;
    char _wantsIncrementalChangeDetails;
    char _reverseSortOrder;
    char _includeWallpaperAssets;
    char _forceIncludeCloudSharedAssets;
    char _forceIncludeiTunesSyncAssets;
    char _includeDuplicateAssets;
    char _hasIncludeCloudSharedAssetsOverride;
    NSPredicate * _predicate;
    NSArray * _sortDescriptors;
    unsigned int _fetchPropertyHint;
    int _chunkSizeForFetch;
    int _cacheSizeForFetch;
    unsigned int _fetchLimit;
    NSString * _transientIdentifier;
    NSPredicate * _internalPredicate;
    NSArray * _internalSortDescriptors;
    NSArray * _customObjectIDSortOrder;
}

@property (retain, nonatomic) NSPredicate * predicate;
@property (retain, nonatomic) NSArray * sortDescriptors;
@property (nonatomic) char includeHiddenAssets;
@property (nonatomic) char includeAllBurstAssets;
@property (nonatomic) char wantsIncrementalChangeDetails;
@property (nonatomic) unsigned int fetchPropertyHint;
@property (nonatomic) int chunkSizeForFetch;
@property (nonatomic) int cacheSizeForFetch;
@property (nonatomic) unsigned int fetchLimit;
@property (retain, nonatomic) NSString * transientIdentifier;
@property (retain, nonatomic) NSPredicate * internalPredicate;
@property (retain, nonatomic) NSArray * internalSortDescriptors;
@property (nonatomic) char reverseSortOrder;
@property (nonatomic) char includeWallpaperAssets;
@property (nonatomic) char forceIncludeCloudSharedAssets;
@property (nonatomic) char forceIncludeiTunesSyncAssets;
@property (nonatomic) char includeDuplicateAssets;
@property (retain, nonatomic) NSArray * customObjectIDSortOrder;
@property (readonly, nonatomic) char hasIncludeCloudSharedAssetsOverride;

+ (PHFetchOptions *)fetchOptionsWithInclusiveDefaults;

- (unsigned int)fetchLimit;
- (NSString *)transientIdentifier;
- (void)setInternalPredicate:(NSPredicate *)arg0;
- (void)setForceIncludeCloudSharedAssets:(char)arg0;
- (void)setForceIncludeiTunesSyncAssets:(char)arg0;
- (void)setCustomObjectIDSortOrder:(NSArray *)arg0;
- (void)setIncludeAllBurstAssets:(char)arg0;
- (void)setIncludeWallpaperAssets:(char)arg0;
- (NSPredicate *)internalPredicate;
- (NSArray *)internalSortDescriptors;
- (void)setInternalSortDescriptors:(NSArray *)arg0;
- (void)setWantsIncrementalChangeDetails:(char)arg0;
- (unsigned int)fetchPropertyHint;
- (void)setFetchPropertyHint:(unsigned int)arg0;
- (void)setTransientIdentifier:(NSString *)arg0;
- (NSArray *)customObjectIDSortOrder;
- (char)includeAllBurstAssets;
- (char)includeHiddenAssets;
- (int)chunkSizeForFetch;
- (int)cacheSizeForFetch;
- (char)includeWallpaperAssets;
- (char)forceIncludeCloudSharedAssets;
- (char)forceIncludeiTunesSyncAssets;
- (char)includeDuplicateAssets;
- (void)setIncludeDuplicateAssets:(char)arg0;
- (char)reverseSortOrder;
- (void)setReverseSortOrder:(char)arg0;
- (char)wantsIncrementalChangeDetails;
- (char)hasIncludeCloudSharedAssetsOverride;
- (PHFetchOptions *)init;
- (NSString *)description;
- (PHFetchOptions *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPredicate:(NSPredicate *)arg0;
- (NSPredicate *)predicate;
- (void)setSortDescriptors:(NSArray *)arg0;
- (NSArray *)sortDescriptors;
- (void).cxx_destruct;
- (void)setIncludeHiddenAssets:(char)arg0;
- (void)setCacheSizeForFetch:(int)arg0;
- (void)setChunkSizeForFetch:(int)arg0;
- (void)setFetchLimit:(unsigned int)arg0;

@end
