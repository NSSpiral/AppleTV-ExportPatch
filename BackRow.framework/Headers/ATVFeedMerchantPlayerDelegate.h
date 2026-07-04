/* Runtime dump - ATVFeedMerchantPlayerDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRPlayerDelegate;
@protocol BRTransportDataProvider;

@class ATVFeedMerchant, BRChapter, BRChapterGroup, BRMediaPlayer;
@interface ATVFeedMerchantPlayerDelegate : NSObject <BRPlayerDelegate, BRTransportDataProvider>
{
    ATVFeedMerchant * _merchant;
    NSSet * functions;
}

@property (weak, nonatomic) ATVFeedMerchant * merchant;
@property (retain, nonatomic) NSSet * functions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (ATVFeedMerchant *)merchant;
- (void)setMerchant:(ATVFeedMerchant *)arg0;
- (char)player:(BRMediaPlayer *)arg0 shouldHandleEvent:(NSString *)arg1 playerTime:(double)arg2;
- (double)player:(BRMediaPlayer *)arg0 willSeekToTime:(double)arg1;
- (void)_playerProgressChanged:(NSNotification *)arg0;
- (ATVFeedMerchantPlayerDelegate *)initWithFeedMerchant:(ATVFeedMerchant *)arg0;
- (void)setFunctions:(NSSet *)arg0;
- (void)_hifreqPlayerProgressChanged:(NSNotification *)arg0;
- (void)_selectedAudioOptionChanged:(NSNotification *)arg0;
- (void)_selectedSubtitleOptionChanged:(NSNotification *)arg0;
- (char)supportsBufferedRange;
- (struct BRTimeRange)bufferedRange;
- (char)bufferedRangeIsSubset;
- (float)bufferingProgress;
- (char)isAssetReadyToPlay:(id /* <BRMediaAsset> */)arg0;
- (BRChapter *)chapterAtIndex:(long)arg0;
- (double)virtualChapterMark;
- (long)chapterGroupCount;
- (long)chapterGroupIndex;
- (BRChapterGroup *)chapterGroupAtIndex:(long)arg0;
- (NSArray *)interstitialTimes;
- (long)currentInterstitialIndex;
- (void)playerTimeDidChange:(double)arg0;
- (void)playerDateDidChange:(NSDictionary *)arg0;
- (long)currentChapterIndex;
- (NSSet *)functions;
- (void)dealloc;
- (double)duration;
- (void).cxx_destruct;
- (double)elapsedTime;
- (NSDate *)playbackDate;
- (int)playerState;
- (NSArray *)chapters;

@end
