/* Runtime dump - NSSQLForeignKey
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLForeignKey : NSSQLColumn
{
    NSSQLToOne * _toOne;
}

- (NSSQLForeignKey *)initWithEntity:(NSSQLEntity *)arg0 propertyDescription:(NSString *)arg1;
- (void)copyValuesForReadOnlyFetch:(id)arg0;
- (id)toOneRelationship;
- (NSSQLForeignKey *)initForReadOnlyFetchingOfEntity:(NSObject *)arg0 toOneRelationship:(id)arg1;
- (NSSQLForeignKey *)initWithEntity:(NSObject *)arg0 toOneRelationship:(id)arg1;
- (void)dealloc;

@end
