/* Runtime dump - NSSQLGenerator
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLGenerator : NSObject
{
    NSSQLCore * _persistentStore;
}

+ (void)initialize;

- (NSSQLGenerator *)initWithPersistentStore:(NSSQLCore *)arg0;
- (NSURLRequest *)newSQLStatementForFetchRequest:(NSURLRequest *)arg0 ignoreInheritance:(char)arg1 countOnly:(char)arg2 nestingLevel:(unsigned int)arg3;
- (NSURLRequest *)newSQLStatementForUpdateRequest:(NSURLRequest *)arg0;
- (NSObject *)_predicateRestrictingSuperentitiesForEntity:(NSObject *)arg0;
- (NSObject *)_predicateRestrictingToSubentitiesForEntity:(NSObject *)arg0;
- (NSObject *)_predicateForSpecificEntity:(NSObject *)arg0;
- (void)generateWhereIntermediatesInContext:(NSObject *)arg0;
- (void)generateGroupByIntermediatesForProperties:(NSDictionary *)arg0 inContext:(NSObject *)arg1;
- (void)generateHavingIntermediateForPredicate:(NSPredicate *)arg0 inContext:(NSObject *)arg1;
- (void)generateSelectIntermediateInContext:(NSObject *)arg0;
- (void)generateOrderIntermediateInContext:(NSObject *)arg0;
- (void)generateIntermediateForLimit:(unsigned int)arg0 inContext:(NSObject *)arg1;
- (void)generateIntermediateForOffset:(unsigned int)arg0 inContext:(NSObject *)arg1;
- (NSString *)generateUpdateColumnsIntermediateInContext:(NSObject *)arg0;
- (NSString *)predicateForRequestInContext:(NSObject *)arg0;
- (NSURLRequest *)initializeContextForRequest:(NSURLRequest *)arg0 ignoreInheritance:(char)arg1 nestingLevel:(unsigned int)arg2;
- (NSURLRequest *)initializeContextForFetchRequest:(NSURLRequest *)arg0 ignoreInheritance:(char)arg1 nestingLevel:(unsigned int)arg2;
- (NSURLRequest *)initializeContextForUpdateRequest:(NSURLRequest *)arg0;
- (NSString *)generateIntermediatesForFetchInContext:(NSObject *)arg0 countOnly:(char)arg1;
- (NSString *)generateIntermediatesForUpdateInContext:(NSObject *)arg0;
- (NSURLRequest *)newSQLStatementForRequest:(NSURLRequest *)arg0 ignoreInheritance:(char)arg1 countOnly:(char)arg2 nestingLevel:(unsigned int)arg3;

@end
