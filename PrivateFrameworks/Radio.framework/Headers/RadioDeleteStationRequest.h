/* Runtime dump - RadioDeleteStationRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioDeleteStationRequest : RadioSyncRequest
{
    NSDictionary * _stationDictionary;
    unsigned long long _stationID;
}

- (RadioDeleteStationRequest *)initWithStation:(ATVRadioStation *)arg0;
- (RadioDeleteStationRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (NSArray *)changeList;

@end
