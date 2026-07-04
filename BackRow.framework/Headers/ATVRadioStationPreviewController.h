/* Runtime dump - ATVRadioStationPreviewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRMediaPlayer, SBJsonStreamWriterStateArrayStart;
@interface ATVRadioStationPreviewController : NSObject
{
    char _isRunning;
    unsigned int _preferredNumberOfPreviewItems;
    ATVDataClient * _dataClient;
    ATVDataCollection * _collection;
    id _onStart;
    id _onProgressUpdate;
    id _onTrackChanged;
    id _onStop;
    ATVDataQuery * _itemsQuery;
    BRMediaPlayer * _player;
    NSArray * _previewItems;
    double _preferredPreviewDuration;
    double _elapsedTime;
    double _songStartElapsedTimeStamp;
    double _totalPreviewDuration;
}

@property (nonatomic) unsigned int preferredNumberOfPreviewItems;
@property (nonatomic) double preferredPreviewDuration;
@property (retain, nonatomic) ATVDataClient * dataClient;
@property (retain, nonatomic) ATVDataCollection * collection;
@property (nonatomic) char isRunning;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) float subProgress;
@property (readonly, retain, nonatomic) ATVDataItem * currentTrack;
@property (readonly, nonatomic) ATVDataItem * nextTrack;
@property (readonly, nonatomic) double maxPreviewDurationPerItem;
@property (copy, nonatomic) id onStart;
@property (copy, nonatomic) id onProgressUpdate;
@property (copy, nonatomic) id onTrackChanged;
@property (copy, nonatomic) id onStop;
@property (retain, nonatomic) ATVDataQuery * itemsQuery;
@property (retain, nonatomic) BRMediaPlayer * player;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double songStartElapsedTimeStamp;
@property (nonatomic) double totalPreviewDuration;
@property (retain, nonatomic) NSArray * previewItems;

- (void)_playerStateChanged:(NSNotification *)arg0;
- (float)subProgress;
- (ATVRadioStationPreviewController *)initWithCollection:(ATVDataCollection *)arg0 dataClient:(ATVDataClient *)arg1;
- (ATVDataItem *)nextTrack;
- (void)setOnProgressUpdate:(NSDate *)arg0;
- (void)setOnStop:(id)arg0;
- (void)setOnStart:(SBJsonStreamWriterStateArrayStart *)arg0;
- (void)setOnTrackChanged:(NSNotification *)arg0;
- (ATVDataItem *)currentTrack;
- (void)setPreferredNumberOfPreviewItems:(unsigned int)arg0;
- (void)setPreferredPreviewDuration:(double)arg0;
- (void)setTotalPreviewDuration:(double)arg0;
- (double)totalPreviewDuration;
- (double)songStartElapsedTimeStamp;
- (double)maxPreviewDurationPerItem;
- (double)preferredPreviewDuration;
- (NSArray *)previewItems;
- (void)_runItemsQuery;
- (void)_startPlayback;
- (SBJsonStreamWriterStateArrayStart *)onStart;
- (void)setItemsQuery:(ATVDataQuery *)arg0;
- (void)setSongStartElapsedTimeStamp:(double)arg0;
- (id)onStop;
- (unsigned int)preferredNumberOfPreviewItems;
- (void)setPreviewItems:(NSArray *)arg0;
- (void)_playerMediaCued:(id)arg0;
- (void)_playerProgressChanged:(NSNotification *)arg0;
- (void)_playerCurrentAssetChanged:(NSNotification *)arg0;
- (NSDate *)onProgressUpdate;
- (NSNotification *)onTrackChanged;
- (ATVDataCollection *)collection;
- (ATVDataQuery *)itemsQuery;
- (void)dealloc;
- (void)stop;
- (void)start;
- (float)progress;
- (char)isRunning;
- (void).cxx_destruct;
- (double)elapsedTime;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;
- (void)setElapsedTime:(double)arg0;
- (void)setCollection:(ATVDataCollection *)arg0;
- (void)setIsRunning:(char)arg0;
- (void)setPlayer:(BRMediaPlayer *)arg0;
- (BRMediaPlayer *)player;

@end
