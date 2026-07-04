/* Runtime dump - ML3Track
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Track : ML3Entity

+ (NSObject *)propertyForMPMediaEntityProperty:(NSObject *)arg0;
+ (void)initialize;
+ (int)revisionTrackingCode;
+ (ML3Track *)persistentIDColumnForTable:(id)arg0;
+ (char)trackWithPersistentID:(long long)arg0 existsInLibraryWithConnection:(NSURLConnection *)arg1;
+ (NSDictionary *)unsettableProperties;
+ (NSObject *)joinClausesForProperty:(NSString *)arg0;
+ (NSObject *)foreignDatabaseTableForProperty:(NSString *)arg0;
+ (NSObject *)foreignColumnForProperty:(NSString *)arg0;
+ (ML3DatabaseTable *)databaseTable;
+ (ML3Track *)extraTablesToInsert;
+ (NSDictionary *)allProperties;
+ (NSPredicate *)predicateByOptimizingComparisonPredicate:(NSPredicate *)arg0;
+ (char)libraryContentsChangeForProperty:(NSString *)arg0;
+ (char)libraryDynamicChangeForProperty:(NSString *)arg0;
+ (char)deleteFromLibrary:(NSObject *)arg0 deletionType:(int)arg1 persistentIDs:(long long *)arg2 count:(long long)arg3 usingConnection:(unsigned int)arg4;
+ (ML3Track *)extraTablesToDelete;
+ (ML3Track *)collectionClassesToUpdateBeforeDelete;
+ (char)deleteFromLibrary:(NSObject *)arg0 deletionType:(int)arg1 persistentIDs:(long long *)arg2 count:(long long)arg3;
+ (NSDictionary *)predisambiguatedProperties;
+ (NSObject *)subselectStatementForProperty:(NSString *)arg0;
+ (NSObject *)subselectPropertyForProperty:(NSString *)arg0;
+ (ML3Track *)defaultOrderingTerms;
+ (NSObject *)sectionPropertyForProperty:(NSString *)arg0;
+ (char)removeFromMyLibrary:(NSObject *)arg0 deletionType:(int)arg1 persistentIDs:(long long *)arg2 count:(long long)arg3;
+ (NSObject *)containerQueryWithContainer:(NSObject *)arg0;
+ (char)unlinkRedownloadableAssetsFromLibrary:(NSObject *)arg0 persistentIDs:(long long *)arg1 deletionType:(int)arg2 deletedFileSize:(long long *)arg3;
+ (char)registerBookmarkMetadataIdentifierFunctionOnConnection:(NSURLConnection *)arg0;
+ (void)enumeratePathsToDeleteFromLibrary:(NSObject *)arg0 persistentIDs:(long long *)arg1 usingBlock:(id /* block */)arg2;
+ (char)_writeSyncDeletesToPlistWithLibrary:(ML3MusicLibrary *)arg0 forPersistentIDs:(id)arg1;
+ (void)populateSortOrdersOfPropertyValues:(NSArray *)arg0 inLibrary:(NSObject *)arg1 cachedNameOrders:(id)arg2;
+ (char)unlinkRedownloadableAssetsFromLibrary:(NSObject *)arg0 persistentIDs:(long long *)arg1 deletedFileSize:(long long *)arg2;
+ (char)clearLocationFromLibrary:(NSObject *)arg0 persistentIDs:(long long *)arg1;
+ (char)clearLocationFromLibrary:(NSObject *)arg0 persistentIDs:(long long *)arg1 disableKeepLocal:(char)arg2;
+ (char)clearLocationFromLibrary:(NSObject *)arg0 persistentIDs:(long long *)arg1 disableKeepLocal:(char)arg2 usingConnection:(NSURLConnection *)arg3;
+ (void)enumeratePathsToDeleteFromLibrary:(NSObject *)arg0 persistentIDs:(long long *)arg1 usingConnection:(NSURLConnection *)arg2 usingBlock:(id /* block */)arg3;
+ (ML3Track *)albumsDefaultOrderingTerms;
+ (ML3Track *)albumsByAlbumArtistDefaultOrderingTerms;
+ (ML3Track *)genresDefaultOrderingTerms;
+ (ML3Track *)podcastsDefaultOrderingTerms;
+ (ML3Track *)artistAllAlbumsDefaultOrderingTerms;
+ (ML3Track *)artistsDefaultOrderingTerms;
+ (ML3Track *)albumAllArtistsDefaultOrderingTerms;
+ (ML3Track *)albumAndArtistDefaultOrderingTerms;
+ (ML3Track *)composersDefaultOrderingTerms;
+ (ML3Track *)podcastsEpisodesDefaultOrderingTerms;
+ (ML3Track *)TVShowEpisodesDefaultOrderingTerms;
+ (char)trackWithPersistentID:(long long)arg0 existsInLibrary:(char)arg1;
+ (char)trackWithPersistentID:(long long)arg0 visibleInLibrary:(NSObject *)arg1;
+ (char)unlinkRedownloadableAssetsFromLibrary:(NSObject *)arg0 persistentIDs:(long long *)arg1;
+ (char)trackValueAreInTheCloud:(id)arg0;
+ (void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(NSURLConnection *)arg0;
+ (char)clearLocationFromLibrary:(NSObject *)arg0 persistentIDs:(long long *)arg1 usingConnection:(NSURLConnection *)arg2;
+ (ML3Track *)orderingTermsForITTGTrackOrder:(unsigned long)arg0 descending:(char)arg1;
+ (NSObject *)containerQueryWithContainer:(NSObject *)arg0 predicate:(NSPredicate *)arg1;
+ (NSObject *)containerQueryWithContainer:(NSObject *)arg0 predicate:(NSPredicate *)arg1 orderingTerms:(NSArray *)arg2;
+ (ML3Track *)_normalizedImportChapters:(id)arg0 trackPersistentID:(long long)arg1;
+ (ML3Track *)flattenedChapterDataWithImportChapters:(id)arg0 library:(ML3MusicLibrary *)arg1 trackPersistentID:(long long)arg2;
+ (ML3Track *)flattenedChapterDataFromSyncInfoDictionaries:(id)arg0 trackPersistentID:(long long)arg1;
+ (NSDictionary *)flattenedChapterDataFromDAAPInfoDictionary:(NSDictionary *)arg0 trackPersistentID:(long long)arg1;
+ (NSSet *)importChaptersByParsingAsset:(NSSet *)arg0;

- (void)_createVideoSnapshotAtTime:(double)arg0 withCompletionBlock:(id /* block */)arg1;
- (UIImage *)_screenshotArtworkDataStoredAsItemArtwork;
- (char)needsVideoSnapshot;
- (void)createVideoSnapshotAtTime:(double)arg0;
- (ML3Track *)initWithDictionary:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1 cachedNameOrders:(id)arg2 usingConnection:(NSURLConnection *)arg3;
- (id)chapterTOC;
- (NSString *)absoluteFilePath;
- (char)updateIntegrity;
- (id)rawIntegrity;
- (id)artworkTokenAtPlaybackTime:(double)arg0;
- (void)updateCollectionCloudStatus;
- (NSSet *)computeSHA256OfAudioPacketDataInLocalAsset;
- (void)updateStoreBookmarkMetadataIdentifier;
- (void)populateLocationPropertiesWithPath:(NSString *)arg0 protectionType:(int)arg1;
- (char)populateArtworkCacheWithArtworkData:(NSData *)arg0;
- (void)populateChapterDataWithImportChapters:(id)arg0;
- (void)populateLocationPropertiesWithPath:(NSString *)arg0;
- (void)populateLocationPropertiesWithPath:(NSString *)arg0 isProtected:(char)arg1;
- (NSString *)multiverseIdentifierLibraryOnly:(char)arg0;
- (NSString *)multiverseIdentifier;
- (NSObject *)protocolItem;

@end
