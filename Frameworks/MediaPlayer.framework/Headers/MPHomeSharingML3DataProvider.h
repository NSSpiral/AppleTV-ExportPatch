/* Runtime dump - MPHomeSharingML3DataProvider
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3
{
    HSHomeSharingLibrary * _homeSharingLibrary;
    NSMutableDictionary * _tokenDataForDSIDs;
    NSMutableSet * _loadedContainerPIDs;
    NSMutableDictionary * _blocksForLoadingContainerPIDs;
    NSObject<OS_dispatch_queue> * _containerFillQueue;
    <MPArtworkDataSource> * _artworkDataSource;
}

@property (readonly, nonatomic) HSHomeSharingLibrary * homeSharingLibrary;
@property (readonly, nonatomic) char isSupportedSharingVersion;

+ (void)beginScanningForLibraries;
+ (void)endScanningForLibraries;
+ (NSString *)homeSharingGroupID;
+ (void)_determineHomeSharingGroupIDWithCompletionHandler:(id /* block */)arg0;
+ (char)isScanningForLibraries;
+ (char)isConnecting;

- (NSObject *)errorResolverForItem:(NSObject *)arg0;
- (<MPArtworkDataSource> *)artworkDataSource;
- (NSURL *)protectedContentSupportStorageURL;
- (void)connectWithAuthenticationData:(NSData *)arg0 completionBlock:(id /* block */)arg1 progressHandler:(/* block */ id)arg2;
- (char)hasGeniusMixes;
- (char)requiresAuthentication;
- (id)itemResultSetForQueryCriteria:(id)arg0;
- (void)loadQueryCriteria:(id)arg0 hasItemsWithCompletionBlock:(id /* block */)arg1;
- (void)loadQueryCriteria:(id)arg0 hasCollectionsWithCompletionBlock:(id /* block */)arg1;
- (void)loadQueryCriteria:(id)arg0 countOfItemsWithCompletionBlock:(id /* block */)arg1;
- (void)loadQueryCriteria:(id)arg0 countOfCollectionsWithCompletionBlock:(id /* block */)arg1;
- (void)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id /* block */)arg3;
- (NSObject *)adjustedValueForMPProperty:(NSObject *)arg0 ofEntity:(NSObject *)arg1 withDefaultValue:(NSString *)arg2;
- (MPHomeSharingML3DataProvider *)initWithHomeSharingLibrary:(HSHomeSharingLibrary *)arg0;
- (HSHomeSharingLibrary *)homeSharingLibrary;
- (void)_homeSharingGroupIDDidChangeNotification:(NSNotification *)arg0;
- (void)_homeSharingLibraryDidUpdateRevisionNumber:(NSNumber *)arg0;
- (void)_homeSharingLibraryDidBecomeUnavailable:(id)arg0;
- (char)isSupportedSharingVersion;
- (void)_fetchTokensForAuthorizedDSIDs;
- (void)_fillContainerForQueryCriteria:(id)arg0 completionBlock:(id /* block */)arg1;
- (NSObject *)_tokenDataForAccountID:(unsigned long long)arg0;
- (void)setTokenData:(NSData *)arg0 forAuthorizedDSID:(unsigned long long)arg1;
- (char)hasArtworkImageForItemWithIdentifier:(long long)arg0;
- (void)setRentalPlaybackStartDateForItemID:(unsigned long long)arg0;
- (void)dealloc;
- (NSString *)name;
- (NSString *)uniqueIdentifier;
- (void).cxx_destruct;
- (void)disconnect;

@end
