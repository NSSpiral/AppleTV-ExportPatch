/* Runtime dump - RadioMutableHistoryCategory
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableHistoryCategory : RadioHistoryCategory

@property (copy, nonatomic) NSString * categoryDescription;
@property (copy, nonatomic) NSArray * items;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * stationHash;
@property (nonatomic) long long stationID;
@property (nonatomic) int type;

- (void)setName:(NSString *)arg0;
- (void)setType:(int)arg0;
- (RadioMutableHistoryCategory *)copyWithZone:(struct _NSZone *)arg0;
- (void)setItems:(NSArray *)arg0;
- (void)setStationID:(long long)arg0;
- (void)setStationHash:(NSString *)arg0;
- (void)setCategoryDescription:(NSString *)arg0;

@end
