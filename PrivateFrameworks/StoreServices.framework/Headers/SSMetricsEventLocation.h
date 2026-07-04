/* Runtime dump - SSMetricsEventLocation
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventLocation : NSObject
{
    int _position;
    NSString * _type;
    NSMutableDictionary * _values;
}

@property (nonatomic) int locationPosition;
@property (copy, nonatomic) NSString * locationType;
@property (readonly, nonatomic) NSDictionary * reportingDictionary;

- (void).cxx_destruct;
- (void)setLocationPosition:(int)arg0;
- (void)setLocationType:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forLocationKey:(NSString *)arg1;
- (NSDictionary *)reportingDictionary;
- (NSString *)valueForLocationKey:(NSString *)arg0;
- (int)locationPosition;
- (NSString *)locationType;

@end
