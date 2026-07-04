/* Runtime dump - PLEntryKey
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLEntryKey : NSObject
{
    char _isDynamic;
    NSString * _entryKey;
    PLEntryKey * _baseEntryKey;
    NSString * _operatorName;
    NSString * _entryType;
    NSString * _entryName;
    NSString * _wildCardName;
    struct _PLTimeIntervalRange _timeIntervalRange;
}

@property (readonly, retain) NSString * entryKey;
@property (weak) PLEntryKey * baseEntryKey;
@property (readonly, retain) NSString * operatorName;
@property (readonly, retain) NSString * entryType;
@property (readonly, retain) NSString * entryName;
@property (copy, nonatomic) NSString * wildCardName;
@property (nonatomic) char isDynamic;
@property (nonatomic) struct _PLTimeIntervalRange timeIntervalRange;

+ (void)setupEntryObjectsForOperatorClass:(Class)arg0;
+ (NSString *)PLEntryKeyForEntryKey:(NSString *)arg0;
+ (NSString *)dynamicEntryKeyForEntryKey:(NSString *)arg0;
+ (PLEntryKey *)entryKeysForOperator:(id)arg0;
+ (NSObject *)entryKeysForOperatorClass:(Class)arg0;
+ (Class)operatorClassForEntryKey:(NSString *)arg0;
+ (void)addPLEntryKey:(NSString *)arg0;
+ (NSString *)PLEntryAggregateKeysForOperatorName:(NSString *)arg0;
+ (NSString *)PLEntryKeyForOperatorName:(NSString *)arg0 withType:(NSObject *)arg1 withName:(NSString *)arg2 withWildCardName:(NSString *)arg3 isDynamic:(char)arg4;
+ (NSString *)entryKeyForOperatorName:(NSString *)arg0 withType:(NSObject *)arg1 withName:(NSString *)arg2 withWildCardName:(NSString *)arg3 isDynamic:(char)arg4;
+ (NSString *)entryKeyForOperatorName:(NSString *)arg0 withType:(NSObject *)arg1 withName:(NSString *)arg2 isDynamic:(char)arg3;
+ (void)setupEntryObjectsForOperator:(id)arg0;
+ (void)setupEntryObjectsForOperatorName:(NSString *)arg0;
+ (NSObject *)PLEntryKeysForEntryType:(NSObject *)arg0;
+ (PLEntryKey *)PLEntryAggregateKeysForOperator:(id)arg0;
+ (NSObject *)PLEntryAggregateKeysForOperatorClass:(Class)arg0;
+ (NSString *)PLEntryKeyForOperatorName:(NSString *)arg0 withType:(NSObject *)arg1 withName:(NSString *)arg2;
+ (NSString *)entryKeyForOperatorName:(NSString *)arg0 withType:(NSObject *)arg1 withName:(NSString *)arg2;
+ (NSString *)entryKeyForOperatorName:(NSString *)arg0 withType:(NSObject *)arg1 withName:(NSString *)arg2 withWildCardName:(NSString *)arg3;
+ (NSString *)timeintervalRangeEntryKeyForEntryKey:(NSString *)arg0 withTimeIntervalRange:(struct _PLTimeIntervalRange)arg1;
+ (NSString *)wildCardForEntryKey:(NSString *)arg0;
+ (NSString *)baseEntryKeyForEntryKey:(NSString *)arg0;
+ (struct _PLTimeIntervalRange)timeIntervalRangeForEntryKey:(NSString *)arg0;
+ (NSString *)entryKeysForOperatorName:(NSString *)arg0;

- (NSString *)description;
- (NSString *)debugDescription;
- (void).cxx_destruct;
- (char)isDynamic;
- (NSString *)entryType;
- (NSString *)entryName;
- (PLEntryKey *)baseEntryKey;
- (NSString *)wildCardName;
- (struct _PLTimeIntervalRange)timeIntervalRange;
- (PLEntryKey *)initWithOperatorName:(NSString *)arg0 withEntryType:(NSString *)arg1 withEntryName:(NSString *)arg2;
- (id)copyWithIsDynamic:(char)arg0;
- (NSString *)copyWithWildCardName:(NSString *)arg0;
- (NSObject *)copyWithTimeIntervalRange:(struct _PLTimeIntervalRange)arg0;
- (void)setWildCardName:(NSString *)arg0;
- (void)setBaseEntryKey:(PLEntryKey *)arg0;
- (void)setIsDynamic:(char)arg0;
- (void)setTimeIntervalRange:(struct _PLTimeIntervalRange)arg0;
- (NSString *)entryKey;
- (NSString *)operatorName;

@end
