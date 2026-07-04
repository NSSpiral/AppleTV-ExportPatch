/* Runtime dump - NSSQLForeignEntityKey
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLForeignEntityKey : NSSQLColumn
{
    NSSQLForeignKey * _foreignKey;
}

- (NSSQLForeignKey *)foreignKey;
- (NSSQLForeignEntityKey *)initWithEntity:(NSSQLEntity *)arg0 propertyDescription:(NSString *)arg1;
- (id)toOneRelationship;
- (NSSQLForeignEntityKey *)initWithEntity:(NSObject *)arg0 foreignKey:(NSSQLForeignKey *)arg1;
- (NSSQLForeignEntityKey *)initForReadOnlyFetchingOfEntity:(NSObject *)arg0 toOneRelationship:(id)arg1;
- (void)setFKForReadOnlyFetch:(id)arg0;
- (void)dealloc;

@end
