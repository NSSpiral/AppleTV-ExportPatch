/* Runtime dump - BRCSyncThrottle
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncThrottle : BRCThrottle
{
    NSPredicate * _predicate;
}

@property (retain, nonatomic) NSPredicate * predicate;

- (void)setPredicate:(NSPredicate *)arg0;
- (NSPredicate *)predicate;
- (void).cxx_destruct;
- (char)_validateThrottleParams:(id)arg0;
- (BRCSyncThrottle *)initWithName:(NSString *)arg0 andParameters:(NSDictionary *)arg1;
- (char)matchesItem:(NSObject *)arg0 nsecsToRetry:(unsigned long long *)arg1 now:(unsigned long long)arg2;

@end
