/* Runtime dump - ML3MigrationDirectives
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MigrationDirectives : NSObject
{
    char _needsToRecreateIndexes;
    char _needsToRecreateTriggers;
    char _needsToRemoveLocationsForItemsMissingAssets;
    char _needsToReloadStoreBookmarkMetadataIdentifiers;
    char _needsToReloadContainerMediaTypes;
    char _needsAnalyze;
    char _needsToAutogenerateArtworkVariants;
    char _needsToUpdateSortMap;
    char _forceUpdateOriginals;
    int _originalUserVersion;
    int _currentUserVersion;
}

@property (readonly, nonatomic) int originalUserVersion;
@property (nonatomic) int currentUserVersion;
@property (nonatomic) char needsToRecreateIndexes;
@property (nonatomic) char needsToRecreateTriggers;
@property (nonatomic) char needsToRemoveLocationsForItemsMissingAssets;
@property (nonatomic) char needsToReloadStoreBookmarkMetadataIdentifiers;
@property (nonatomic) char needsToReloadContainerMediaTypes;
@property (nonatomic) char needsAnalyze;
@property (nonatomic) char needsToAutogenerateArtworkVariants;
@property (nonatomic) char needsToUpdateSortMap;
@property (nonatomic) char forceUpdateOriginals;

- (ML3MigrationDirectives *)initWithOriginalUserVersion:(int)arg0;
- (int)originalUserVersion;
- (int)currentUserVersion;
- (void)setCurrentUserVersion:(int)arg0;
- (char)needsToRecreateIndexes;
- (void)setNeedsToRecreateIndexes:(char)arg0;
- (char)needsToRecreateTriggers;
- (void)setNeedsToRecreateTriggers:(char)arg0;
- (char)needsToRemoveLocationsForItemsMissingAssets;
- (void)setNeedsToRemoveLocationsForItemsMissingAssets:(char)arg0;
- (char)needsToReloadStoreBookmarkMetadataIdentifiers;
- (void)setNeedsToReloadStoreBookmarkMetadataIdentifiers:(char)arg0;
- (char)needsToReloadContainerMediaTypes;
- (void)setNeedsToReloadContainerMediaTypes:(char)arg0;
- (char)needsAnalyze;
- (void)setNeedsAnalyze:(char)arg0;
- (char)needsToAutogenerateArtworkVariants;
- (void)setNeedsToAutogenerateArtworkVariants:(char)arg0;
- (char)needsToUpdateSortMap;
- (void)setNeedsToUpdateSortMap:(char)arg0;
- (char)forceUpdateOriginals;
- (void)setForceUpdateOriginals:(char)arg0;

@end
