/* Runtime dump - RadioAddStationRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioAddStationRequest : RadioSyncRequest
{
    NSDictionary * _matchDictionary;
    long long _persistentID;
    NSMutableDictionary * _stationDictionary;
    NSString * _stationHashForSkipHistoryCopying;
}

- (RadioAddStationRequest *)initWithStation:(ATVRadioStation *)arg0;
- (RadioAddStationRequest *)initWithRadioTrackDictionary:(NSDictionary *)arg0 useArtist:(char)arg1;
- (RadioAddStationRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (NSArray *)changeList;
- (NSDictionary *)matchDictionary;
- (RadioAddStationRequest *)initWithStationDictionary:(NSMutableDictionary *)arg0;
- (RadioAddStationRequest *)initWithLibraryTrackDictionary:(NSDictionary *)arg0 useArtist:(char)arg1;
- (RadioAddStationRequest *)initWithQueryTerm:(id)arg0 queryID:(long long)arg1;
- (void)startWithAddStationCompletionHandler:(id /* block */)arg0;

@end
