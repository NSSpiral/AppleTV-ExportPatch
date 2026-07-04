/* Runtime dump - MBAggregateDictionary
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBAggregateDictionary : NSObject
{
    NSMutableDictionary * _scalars;
}

@property (readonly, nonatomic) NSDictionary * scalars;

+ (void)addValue:(long long)arg0 forScalarKey:(NSString *)arg1;
+ (void)setValue:(long long)arg0 forScalarKey:(NSString *)arg1;
+ (void)incrementScalarKey:(NSString *)arg0;
+ (void)pushValue:(double)arg0 forDistributionKey:(NSString *)arg1;

- (void)save;
- (void)dealloc;
- (MBAggregateDictionary *)init;
- (void)_addScalarValue:(unsigned long long)arg0 forKey:(NSString *)arg1;
- (NSDictionary *)scalars;
- (void)addCountAndSizeOfFile:(NSString *)arg0;

@end
