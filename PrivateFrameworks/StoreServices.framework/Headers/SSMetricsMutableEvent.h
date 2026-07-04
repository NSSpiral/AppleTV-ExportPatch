/* Runtime dump - SSMetricsMutableEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsMutableEvent : SSMetricsEvent <NSMutableCopying>
{
    NSMutableDictionary * _mutableBody;
}

@property (readonly, copy, nonatomic) NSDictionary * bodyDictionary;

- (void)dealloc;
- (SSMetricsMutableEvent *)init;
- (NSString *)debugDescription;
- (SSMetricsMutableEvent *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)setProperty:(NSString *)arg0 forBodyKey:(NSString *)arg1;
- (NSString *)propertyForBodyKey:(NSString *)arg0;
- (SSMetricsMutableEvent *)initWithBodyDictionary:(NSDictionary *)arg0;
- (NSDictionary *)bodyDictionary;
- (void)appendPropertiesToBody:(NSObject *)arg0;
- (void)addPropertiesWithDictionary:(NSDictionary *)arg0;

@end
