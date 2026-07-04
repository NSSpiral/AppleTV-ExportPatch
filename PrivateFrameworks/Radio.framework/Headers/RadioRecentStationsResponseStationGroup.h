/* Runtime dump - RadioRecentStationsResponseStationGroup
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRecentStationsResponseStationGroup : NSObject
{
    NSDictionary * _responseDictionary;
}

@property (readonly, nonatomic) char active;
@property (readonly, copy, nonatomic) NSString * localizedTitle;
@property (readonly, copy, nonatomic) NSArray * stationDictionaries;

- (RadioRecentStationsResponseStationGroup *)initWithResponseDictionary:(NSDictionary *)arg0;
- (char)isActive;
- (void).cxx_destruct;
- (NSString *)localizedTitle;
- (NSArray *)stationDictionaries;

@end
