/* Runtime dump - MPRadioLibrary
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRadioLibrary : NSObject
{
    MPRadioController * _radioController;
}

@property (readonly, nonatomic) char isEnabled;
@property (readonly, nonatomic) unsigned int stationCount;
@property (readonly, nonatomic) NSArray * stations;

+ (MPRadioLibrary *)defaultRadioLibrary;

- (void)getRecentStationGroupsWithCompletionHandler:(id /* block */)arg0;
- (NSString *)stationWithIdentifier:(long long)arg0;
- (NSArray *)stations;
- (void)_radioAvailabilityDidChangeNotification:(NSNotification *)arg0;
- (void)_radioRecentStationsDidChangeNotification:(NSNotification *)arg0;
- (void)_radioModelDidChangeNotification:(NSNotification *)arg0;
- (RadioModel *)_radioModel;
- (unsigned int)stationCount;
- (void)addStationBasedOnTrackIDs:(id)arg0 completion:(id /* block */)arg1;
- (void)dealloc;
- (MPRadioLibrary *)init;
- (char)isEnabled;
- (void).cxx_destruct;

@end
