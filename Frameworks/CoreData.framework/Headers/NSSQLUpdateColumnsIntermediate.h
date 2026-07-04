/* Runtime dump - NSSQLUpdateColumnsIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate
{
    NSArray * _propertiesToUpdate;
    NSArray * _valuesToUpdateTo;
}

- (char)isDestination:(NSObject *)arg0 compatibleDestinationFor:(id)arg1;
- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (char)isRelationship:(OCXRelationship *)arg0 compatibleWith:(id)arg1;
- (NSDate *)_generateSQLForRelationshipUpdate:(NSDate *)arg0 destination:(NSObject *)arg1 inContext:(NSObject *)arg2;
- (NSDate *)_generateSQLForAttributeUpdate:(NSDate *)arg0 value:(NSObject *)arg1 inContext:(NSObject *)arg2;
- (NSDate *)_generateSQLForRelationshipUpdate:(NSDate *)arg0 sourceRelationship:(id)arg1 inContext:(NSObject *)arg2;
- (NSDate *)_generateSQLForAttributeUpdate:(NSDate *)arg0 sourceAttribute:(NSObject *)arg1 inContext:(NSObject *)arg2;
- (NSSQLUpdateColumnsIntermediate *)initWithProperties:(NSDictionary *)arg0 values:(NSArray *)arg1 inScope:(NSObject *)arg2;
- (char)isUpdateColumnsScoped;
- (void)dealloc;

@end
