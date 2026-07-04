/* Runtime dump - CPAggregateDictionary
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPAggregateDictionary : NSObject

@property (readonly, nonatomic) char enabled;

+ (CPAggregateDictionary *)sharedAggregateDictionary;

- (void)setValue:(long long)arg0 forScalarKey:(NSString *)arg1;
- (void)setValue:(double)arg0 forDistributionKey:(NSString *)arg1;
- (void)pushValue:(double)arg0 forKey:(NSString *)arg1;
- (void)addValue:(long long)arg0 forKey:(NSString *)arg1;
- (void)incrementKey:(NSString *)arg0;
- (char)isEnabled;
- (int)commit;
- (void)significantTimeChanged;
- (void)clearDistributionKey:(NSString *)arg0;
- (void)clearScalarKey:(NSString *)arg0;
- (void)subtractValue:(long long)arg0 forKey:(NSString *)arg1;
- (void)decrementKey:(NSString *)arg0;

@end
