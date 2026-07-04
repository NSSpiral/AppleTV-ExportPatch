/* Runtime dump - RadioUpdateStationRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioUpdateStationRequest : RadioSyncRequest
{
    RadioStation * _station;
    NSString * _name;
    NSString * _stationDescription;
    NSArray * _seeds;
    int _songMixType;
}

@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * stationDescription;
@property (copy, nonatomic) NSArray * seeds;
@property (nonatomic) int songMixType;

- (NSArray *)seeds;
- (void)setSeeds:(NSArray *)arg0;
- (RadioUpdateStationRequest *)initWithStation:(RadioStation *)arg0;
- (NSString *)stationDescription;
- (RadioUpdateStationRequest *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (int)songMixType;
- (void)setSongMixType:(int)arg0;
- (void)setStationDescription:(NSString *)arg0;
- (NSArray *)changeList;
- (NSDictionary *)_updatedStationDictionary;

@end
