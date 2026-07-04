/* Runtime dump - RadioPlayEventCollection
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlayEventCollection : NSObject <NSCopying, NSMutableCopying>
{
    NSString * _deviceName;
    NSMapTable * _stationInformationToPlayEvents;
}

@property (readonly, copy, nonatomic) NSString * deviceName;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (RadioPlayEventCollection *)copyWithZone:(struct _NSZone *)arg0;
- (RadioPlayEventCollection *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)deviceName;
- (NSDictionary *)playInfoDictionary;
- (RadioPlayEventCollection *)initWithDeviceName:(NSString *)arg0;

@end
