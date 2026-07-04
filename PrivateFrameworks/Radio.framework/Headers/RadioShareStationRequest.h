/* Runtime dump - RadioShareStationRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioShareStationRequest : RadioSyncRequest
{
    NSDictionary * _stationDictionary;
}

- (RadioShareStationRequest *)initWithStation:(ATVRadioStation *)arg0;
- (RadioShareStationRequest *)init;
- (void).cxx_destruct;
- (NSArray *)changeList;

@end
