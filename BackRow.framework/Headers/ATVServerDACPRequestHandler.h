/* Runtime dump - ATVServerDACPRequestHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVServerDACPRequestHandler : NSObject
{
    NSTimer * _updateTimer;
    <BRImageProxy> * _nowPlayingImageProxy;
}

+ (NSObject *)transportDataProvider;
+ (void)_startPlaybackWithPlayer:(id)arg0;
+ (void)handleControlInterfacesRequest:(struct ATVServerRequest *)arg0;
+ (void)handlePlayStatusUpdateRequest:(struct ATVServerRequest *)arg0;
+ (void)handleBonjourSourcesUpdateRequest:(struct ATVServerRequest *)arg0;
+ (void)handleGetPropertyRequest:(struct ATVServerRequest *)arg0;
+ (unsigned long)handleSetPropertyRequest:(struct ATVServerRequest *)arg0;
+ (void)handlePlayRequest:(struct ATVServerRequest *)arg0;
+ (void)handlePlayQueueContentsRequest:(struct ATVServerRequest *)arg0;
+ (void)handlePlayQueueEditRequest:(struct ATVServerRequest *)arg0;
+ (void)_handleAddRadioStationRequest:(struct ATVServerRequest *)arg0;
+ (void)_addPlayStatusUpdateInfoToBuffer:(NSObject *)arg0;
+ (unsigned long)nowPlayingMediaKind;
+ (int)_daapLikedStateForDataItem:(NSObject *)arg0;
+ (int)_daapLikedStateForRadioLikedState:(int)arg0;
+ (NSURLRequest *)argumentsForRequest:(struct ATVServerRequest *)arg0;
+ (char)_nowPlayingAssetSupportsPlayQueue;
+ (unsigned long)mediaKindForMedia:(NSObject *)arg0;
+ (void)handlePlayQueueEditRemoveRequest:(struct ATVServerRequest *)arg0 withArguments:(NSDictionary *)arg1;
+ (void)handlePlayQueueEditMoveRequest:(struct ATVServerRequest *)arg0 withArguments:(NSDictionary *)arg1;
+ (void)handlePlayQueueEditClearRequest:(struct ATVServerRequest *)arg0 withArguments:(NSDictionary *)arg1;
+ (void)handlePlayQueueEditPlayNowRequest:(struct ATVServerRequest *)arg0 withArguments:(NSDictionary *)arg1;
+ (void)handlePlayQueueEditStartGeniusRequest:(struct ATVServerRequest *)arg0 withArguments:(NSDictionary *)arg1;
+ (char)_connectToDataServer:(id *)arg0 withRequest:(struct ATVServerRequest *)arg1 arguments:(NSDictionary *)arg2 machineID:(unsigned long long *)arg3;
+ (NSArray *)_dataServerForRequestArguments:(NSDictionary *)arg0;
+ (NSArray *)_dataClientForRequestArguments:(NSDictionary *)arg0 dataServer:(ATVDataServer *)arg1;
+ (ATVServerDACPRequestHandler *)_dmapItemIDFromQueueQueryStr:(id)arg0 dmapKey:(id *)arg1;
+ (void)dacpGeniusItemsQueryCompleted:(id)arg0;
+ (void)_addBonjourSourcesUpdateInfoToBuffer:(NSObject *)arg0;
+ (void)addNowPlayingSpecToBuffer:(NSObject *)arg0;
+ (unsigned long)availableShuffleStates;
+ (unsigned long)availableRepeatStates;
+ (unsigned char)shuffleState;
+ (unsigned char)repeatState;
+ (unsigned long)_handleSetLikedStateRequest:(struct ATVServerRequest *)arg0;
+ (int)_radioLikedStateForDAAPLikedState:(int)arg0;
+ (void)handlePlayOrCueRequest:(struct ATVServerRequest *)arg0 withArguments:(NSDictionary *)arg1 machineID:(unsigned long long)arg2;
+ (void)handleGeniusSeedRequest:(struct ATVServerRequest *)arg0 withArguments:(NSDictionary *)arg1;
+ (void)handlePlayQueueEditAddRequest:(struct ATVServerRequest *)arg0 withArguments:(NSDictionary *)arg1 machineID:(unsigned long long)arg2;
+ (int)_daapSortTypeFromSortStr:(id)arg0;
+ (void)_handleRadioPlayRequest:(struct ATVServerRequest *)arg0 stationID:(unsigned long long)arg1;
+ (void)_handleCloudRentalPlayRequest:(struct ATVServerRequest *)arg0 itemID:(unsigned long long)arg1 forcePlayback:(char)arg2;
+ (void)_handleCloudPurchasedPlayRequest:(struct ATVServerRequest *)arg0 itemID:(unsigned long long)arg1;
+ (char)handlePlayRequestWithMachineID:(unsigned long long)arg0 containerName:(NSString *)arg1 playlistKind:(unsigned long)arg2 containerID:(unsigned long long)arg3 containerItemID:(unsigned long long)arg4 querySpecifier:(id)arg5 queryCriteria:(struct SearchCriteriaList *)arg6 sortType:(int)arg7 isInvertedSort:(char)arg8 index:(long)arg9 shuffleState:(unsigned long)arg10 repeatState:(unsigned long)arg11;
+ (NSObject *)_dataClientWithMachineID:(unsigned long long)arg0;
+ (NSObject *)newItemsQuery;
+ (void)_filterType:(id *)arg0 andValue:(id *)arg1 fromString:(NSString *)arg2;
+ (NSObject *)_atvFilterWithQueueFilterType:(NSObject *)arg0 filterValue:(DOMWebKitCSSFilterValue *)arg1;
+ (void)_wakeDevice;
+ (void)_startPlaybackWithItems:(NSArray *)arg0 initialIndex:(long)arg1 shuffleMode:(unsigned long)arg2 repeatMode:(unsigned long)arg3;
+ (void)_startPlaybackOfDataItem:(NSObject *)arg0;
+ (void)dacpPlayRequestQueryCompleted:(id)arg0;
+ (char)connectHomeShareWithMachineID:(unsigned long long)arg0;
+ (void)_radioStationSeedDataItemWithItemID:(unsigned long long)arg0 artistID:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 machineID:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
+ (void)_radioStationDataItemSeedWithItemID:(unsigned long long)arg0 artistID:(unsigned long long)arg1 dataClient:(ATVDataClient *)arg2 completionHandler:(id /* block */)arg3;
+ (NSObject *)dataServerWithMachineID:(unsigned long long)arg0;
+ (NSObject *)playStatusUpdateInfoBuffer;
+ (NSObject *)bonjourSourcesUpdateInfoBuffer;
+ (ATVServerDACPRequestHandler *)sharedInstance;
+ (unsigned char)playerState;

- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_queueChanged:(NSNotification *)arg0;
- (void)_playerTimeSkipped:(id)arg0;
- (void)handleDACPRequest:(struct ATVServerRequest *)arg0;
- (void)_dataServerConnectionHandler:(id /* block */)arg0;
- (void)_scaleImage:(UIImage *)arg0;
- (void)_coverArtChanged:(NSNotification *)arg0;
- (void)_playerTimeChanged:(NSNotification *)arg0;
- (void)_nowPlayingUpdated:(id)arg0;
- (void)_playerVolumeChanged:(NSNotification *)arg0;
- (void)_iTunesPlaybackMetadataChanged:(NSNotification *)arg0;
- (void)_dataItemUpdated:(id)arg0;
- (void)handleNowPlayingArtworkRequest:(struct ATVServerRequest *)arg0;
- (void)_updateTouchRemotesWithDelay:(double)arg0;
- (void)_updateNowPlayingArtworkWithInfo:(NSDictionary *)arg0;
- (void)_updateTouchRemotes;
- (void)_processPendingRequestsWithDataServer:(ATVDataServer *)arg0;
- (void)dealloc;
- (ATVServerDACPRequestHandler *)init;
- (void)_clearUpdateTimer;
- (void)_dataClientConnectionHandler:(id /* block */)arg0;
- (void)_updateTimerFired:(id)arg0;

@end
