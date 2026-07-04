/* Runtime dump - RadioMutablePlayEventCollection
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutablePlayEventCollection : RadioPlayEventCollection

@property (copy, nonatomic) NSString * deviceName;

- (RadioMutablePlayEventCollection *)copyWithZone:(struct _NSZone *)arg0;
- (void)addPlayEvents:(id)arg0 forStationHash:(id)arg1 stationID:(long long)arg2;
- (void)addPlayEvents:(id)arg0 forStation:(ATVRadioStation *)arg1;
- (void)setDeviceName:(NSString *)arg0;

@end
