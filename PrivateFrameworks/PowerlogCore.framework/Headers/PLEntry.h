/* Runtime dump - PLEntry
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLEntry : NSObject <NSCopying>
{
    char _isErrorEntry;
    char _writeToDB;
    NSMutableDictionary * _dictionary;
    NSDictionary * _entryDefinition;
    NSDate * _entryDate;
    NSString * _entryKey;
    long long _entryID;
}

@property (retain) NSMutableDictionary * dictionary;
@property (readonly) NSMutableArray * keys;
@property (readonly) NSMutableArray * values;
@property (readonly) char hasDynamicKeys;
@property (readonly) char hasArrayKeys;
@property (readonly) NSArray * definedKeys;
@property (readonly) NSArray * dynamicKeys;
@property (readonly) NSArray * arrayKeys;
@property char isErrorEntry;
@property char writeToDB;
@property (retain, nonatomic) NSDictionary * entryDefinition;
@property (retain, nonatomic) NSDate * entryDate;
@property (retain, nonatomic) NSString * entryKey;
@property (nonatomic) long long entryID;

+ (void)load;
+ (NSString *)entryWithEntryKey:(NSString *)arg0 withData:(NSData *)arg1;
+ (void)registerEntry:(Class)arg0;
+ (Class)classForEntryKey:(NSString *)arg0;
+ (NSString *)entryWithEntryKey:(NSString *)arg0 withRawData:(char)arg1;
+ (NSArray *)summarizeAggregateEntries:(NSArray *)arg0;
+ (NSString *)entryKey;
+ (NSArray *)summarizeAggregateEntries:(NSArray *)arg0 withPrimaryKeys:(NSArray *)arg1;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (PLEntry *)init;
- (NSString *)description;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (int)compare:(NSObject *)arg0;
- (NSMutableDictionary *)dictionary;
- (void)removeObjectForKey:(NSString *)arg0;
- (int)compare:(NSObject *)arg0 options:(short)arg1;
- (PLEntry *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)allValues;
- (NSMutableArray *)keys;
- (void).cxx_destruct;
- (void)setDictionary:(NSMutableDictionary *)arg0;
- (NSDate *)entryDate;
- (void)setEntryDate:(NSDate *)arg0;
- (PLEntry *)initWithEntryKey:(NSString *)arg0 withData:(NSData *)arg1;
- (void)setEntryID:(long long)arg0;
- (NSDictionary *)entryDefinition;
- (short)formaterForKey:(NSString *)arg0;
- (int)staticArraySizeForKey:(NSString *)arg0;
- (NSString *)definitionForKey:(NSString *)arg0;
- (char)hasDynamicKeys;
- (char)hasArrayKeys;
- (NSArray *)dynamicKeys;
- (NSArray *)arrayKeys;
- (NSString *)unitForKey:(NSString *)arg0;
- (PLEntry *)initEntryWithData:(NSData *)arg0;
- (void)setEntryDefinition:(NSDictionary *)arg0;
- (void)setEntryKey:(NSString *)arg0;
- (void)setObjectsFromData:(NSData *)arg0;
- (void)loadDynamicKeys;
- (void)loadLookupTableValues;
- (char)isKeyDynamic:(id)arg0;
- (char)isKeyAggregateValue:(id)arg0;
- (NSString *)keyValuePathForKey:(NSString *)arg0;
- (char)filterEntryLogging;
- (id)serialized;
- (char)isErrorEntry;
- (char)writeToDB;
- (PLEntry *)initWithEntryKey:(NSString *)arg0;
- (NSString *)entryKey;
- (long long)entryID;
- (void)setIsErrorEntry:(char)arg0;
- (PLEntry *)initWithEntryKey:(NSString *)arg0 withRawData:(char)arg1;
- (PLEntry *)initWithEntryKey:(NSString *)arg0 withDate:(NSDate *)arg1;
- (PLEntry *)initEntryWithRawData:(char)arg0;
- (id)serializedForJSON;
- (void)setWriteToDB:(char)arg0;
- (NSArray *)definedKeys;
- (void)setObjectsFromRawData:(NSData *)arg0;
- (void)setDynamicObjectsFromRawData:(NSData *)arg0;

@end
