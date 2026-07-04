/* Runtime dump - ABPredicate
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABPredicate : NSPredicate

+ (ABPredicate *)personPredicateWithPhoneLike:(SAPhone *)arg0 countryHint:(id)arg1 addressBook:(void *)arg2;
+ (ABPredicate *)personPredicateWithValue:(id)arg0 comparison:(long)arg1 forProperty:(int)arg2;
+ (ABPredicate *)personPredicateWithNameLike:(NSString *)arg0 group:(void *)arg1 source:(void *)arg2 account:(NSObject *)arg3 includeSourceInResults:(char)arg4 addressBook:(void *)arg5;
+ (ABPredicate *)personPredicateWithNameLike:(NSString *)arg0 groups:(id)arg1 sources:(TSCH3DChartMeshResources *)arg2 includeSourceInResults:(char)arg3 addressBook:(void *)arg4;
+ (ABPredicate *)personPredicateWithNameLike:(NSString *)arg0 groups:(id)arg1 sources:(TSCH3DChartMeshResources *)arg2 includeSourceInResults:(char)arg3 includePhotosInResults:(char)arg4 addressBook:(void *)arg5;
+ (ABPredicate *)personPredicateWithNameLike:(NSString *)arg0 addressBook:(void *)arg1;
+ (NSDictionary *)newQueryWithProperties:(NSDictionary *)arg0 joins:(NSArray *)arg1 whereString:(NSString *)arg2 sortOrder:(unsigned int)arg3 groupByProperties:(NSArray *)arg4 addressBook:(void *)arg5 propertyIndices:(struct __CFDictionary * *)arg6;
+ (ABPredicate *)personPredicateWithNameLike:(NSString *)arg0 group:(void *)arg1 source:(void *)arg2 account:(NSObject *)arg3 addressBook:(void *)arg4;
+ (ABPredicate *)personPredicateWithNameLike:(NSString *)arg0 groups:(id)arg1 sources:(TSCH3DChartMeshResources *)arg2 addressBook:(void *)arg3;
+ (NSString *)personPredicateWithName:(NSString *)arg0 addressBook:(void *)arg1;
+ (ABPredicate *)personPredicateWithNameOnly:(id)arg0 account:(NSObject *)arg1 addressBook:(void *)arg2;
+ (NSObject *)personPredicateWithAnyValueForProperty:(int)arg0;
+ (NSObject *)personPredicateWithGroup:(void *)arg0 source:(void *)arg1 account:(NSObject *)arg2;
+ (NSPredicate *)newQueryFromABPredicate:(NSPredicate *)arg0 withSortOrder:(unsigned int)arg1 addressBook:(void *)arg2 propertyIndices:(struct __CFDictionary * *)arg3;
+ (NSPredicate *)newQueryFromCompoundPredicate:(NSPredicate *)arg0 withSortOrder:(unsigned int)arg1 addressBook:(void *)arg2 propertyIndices:(struct __CFDictionary * *)arg3;
+ (void)searchPeopleWithPredicate:(NSPredicate *)arg0 sortOrder:(unsigned int)arg1 inAddressBook:(void *)arg2 withDelegate:(NSObject *)arg3;

- (void)bindString:(NSString *)arg0 toStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(struct sqlite3_stmt *)arg2;
- (NSString *)queryWhereString;
- (void)ab_bindStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(struct sqlite3_stmt *)arg1 predicateIdentifier:(NSString *)arg2;
- (id)queryJoinsInCompound:(char)arg0;
- (NSDictionary *)querySelectProperties;
- (NSDictionary *)queryGroupByProperties;
- (char)hasCallback;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context *)arg0 predicateContext:(void *)arg1 values:(struct Mem * *)arg2 count:(struct Mem)arg3;
- (void)bindDouble:(double)arg0 toStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(struct sqlite3_stmt *)arg2;
- (char)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg0 addressBook:(void *)arg1 propertyIndices:(struct __CFDictionary * *)arg2;
- (void)ab_addCallbackContextToArray:(struct __CFArray *)arg0;
- (NSString *)predicateFormat;
- (void)dealloc;
- (ABPredicate *)init;
- (char)isValid;
- (void *)callbackContext;

@end
