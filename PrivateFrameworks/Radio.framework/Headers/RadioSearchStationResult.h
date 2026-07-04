/* Runtime dump - RadioSearchStationResult
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSearchStationResult : NSObject <NSCopying>
{
    NSDictionary * _highlightRanges;
    NSDictionary * _stationDictionary;
}

@property (readonly, copy, nonatomic) NSDictionary * highlightRanges;
@property (readonly, copy, nonatomic) NSDictionary * stationDictionary;

- (NSDictionary *)_initWithResponseDictionary:(NSDictionary *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (RadioSearchStationResult *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSDictionary *)highlightRanges;
- (NSDictionary *)stationDictionary;

@end
