/* Runtime dump - CDBudget
 * Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDBudget : NSObject
{
    CDSession * _session;
    NSString * _name;
    int _type;
    unsigned long long _integerId;
}

@property (readonly) NSString * name;
@property (readonly) int type;
@property (readonly) unsigned long long integerId;
@property (readonly) CDSession * session;

- (NSString *)name;
- (int)type;
- (void).cxx_destruct;
- (CDSession *)session;
- (NSString *)childBudgetWithName:(NSString *)arg0 maxFraction:(double)arg1 type:(int)arg2 error:(id *)arg3;
- (long long)creditsRemainingWithError:(id *)arg0;
- (CDBudget *)initWithSession:(CDSession *)arg0 name:(NSString *)arg1 type:(int)arg2 integerId:(unsigned long long)arg3 error:(id *)arg4;
- (char)incrementByValue:(long long)arg0 error:(id *)arg1;
- (char)decrementByValue:(long long)arg0 error:(id *)arg1;
- (char)compareValueTo:(long long)arg0 swapOnMatchWithValue:(long long)arg1 error:(id *)arg2;
- (NSDate *)forecastEffectiveOnDate:(NSDate *)arg0 error:(id *)arg1;
- (unsigned long long)integerId;
- (char)deleteWithError:(id *)arg0;

@end
