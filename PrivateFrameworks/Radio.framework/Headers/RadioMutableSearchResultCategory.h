/* Runtime dump - RadioMutableSearchResultCategory
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableSearchResultCategory : RadioSearchResultCategory

@property (nonatomic) int categoryType;
@property (nonatomic) char hasMoreResults;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSDictionary * responseDictionary;
@property (copy, nonatomic) NSArray * stationResults;

- (void)setName:(NSString *)arg0;
- (RadioMutableSearchResultCategory *)copyWithZone:(struct _NSZone *)arg0;
- (void)setCategoryType:(int)arg0;
- (void)setHasMoreResults:(char)arg0;
- (void)setStationResults:(NSArray *)arg0;
- (void)setResponseDictionary:(NSDictionary *)arg0;

@end
