/* Runtime dump - ATVRadioAdSlot
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRadioVisualEngagementController;
@interface ATVRadioAdSlot : NSObject
{
    char _hasStartedFetch;
    char _hasFinishedFetch;
    char _hasHandledEvent;
    ATVDataCollection * _station;
    ATVDataItem * _preceedingItem;
    ATVDataItem * _subsequentItem;
    NSArray * _visuallyEngagedAdDictionaries;
    NSArray * _visuallyDisengagedAdDictionaries;
    NSMutableArray * _adItems;
}

@property (readonly, nonatomic) NSArray * adItemsForPlayback;
@property (retain, nonatomic) ATVDataCollection * station;
@property (retain, nonatomic) ATVDataItem * preceedingItem;
@property (retain, nonatomic) ATVDataItem * subsequentItem;
@property (nonatomic) char hasStartedFetch;
@property (nonatomic) char hasFinishedFetch;
@property (nonatomic) char hasHandledEvent;
@property (copy, nonatomic) NSArray * visuallyEngagedAdDictionaries;
@property (copy, nonatomic) NSArray * visuallyDisengagedAdDictionaries;
@property (retain, nonatomic) NSMutableArray * adItems;

- (ATVRadioAdSlot *)initWithStation:(ATVDataCollection *)arg0 preceedingItem:(ATVDataItem *)arg1 subsequentItem:(ATVDataItem *)arg2;
- (void)startFetchingAdsWithCompletionHandler:(id /* block */)arg0;
- (void)didStartPlaybackForAdItem:(NSObject *)arg0;
- (void)didResumePlaybackForAdItem:(NSObject *)arg0;
- (void)didPausePlaybackForAdItem:(NSObject *)arg0;
- (void)willFinishPlaybackForAdItem:(NSObject *)arg0 withAsset:(NSSet *)arg1;
- (void)handleEventType:(unsigned int)arg0 withVisualEngagementController:(ATVRadioVisualEngagementController *)arg1;
- (NSArray *)adItemsForPlayback;
- (void)willStopPlaybackForAdItem:(NSObject *)arg0 withAsset:(NSSet *)arg1;
- (struct __CFString *)_bundleID;
- (void)_didReceiveVisuallyEngagedAds:(id)arg0 visuallyDisengagedAds:(id)arg1;
- (void)_didFinishUsingAdDictionaries:(id)arg0;
- (void)_didFinishUsingAdItems:(NSArray *)arg0;
- (char)hasFinishedFetch;
- (void)setHasFinishedFetch:(char)arg0;
- (char)hasHandledEvent;
- (void)setVisuallyEngagedAdDictionaries:(NSArray *)arg0;
- (void)setVisuallyDisengagedAdDictionaries:(NSArray *)arg0;
- (struct __CFString *)_slotIdentifier;
- (ATVDataItem *)subsequentItem;
- (ATVDataItem *)preceedingItem;
- (char)hasStartedFetch;
- (void)setHasStartedFetch:(char)arg0;
- (char)_isGatewaySlot;
- (struct __CFData *)_stationData;
- (struct __CFData *)_previousSongData;
- (struct __CFData *)_followingSongData;
- (void)setHasHandledEvent:(char)arg0;
- (NSArray *)visuallyEngagedAdDictionaries;
- (NSArray *)visuallyDisengagedAdDictionaries;
- (void)setAdItems:(NSMutableArray *)arg0;
- (NSMutableArray *)adItems;
- (void)_recordEventsForAdItem:(NSObject *)arg0 withAsset:(NSSet *)arg1 completionHandler:(id /* block */)arg2;
- (void)setPreceedingItem:(ATVDataItem *)arg0;
- (void)setSubsequentItem:(ATVDataItem *)arg0;
- (ATVDataCollection *)station;
- (void)_didFinish;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setStation:(ATVDataCollection *)arg0;

@end
