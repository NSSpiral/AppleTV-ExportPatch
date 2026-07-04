/* Runtime dump - RadioRecentStationsResponse
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRecentStationsResponse : NSObject
{
    NSDictionary * _responseDictionary;
}

@property (readonly, copy, nonatomic) NSArray * stationDictionaries;
@property (readonly, copy, nonatomic) NSArray * stationGroups;

- (RadioRecentStationsResponse *)initWithResponseDictionary:(NSDictionary *)arg0;
- (NSArray *)stationGroups;
- (void).cxx_destruct;
- (NSArray *)stationDictionaries;

@end
