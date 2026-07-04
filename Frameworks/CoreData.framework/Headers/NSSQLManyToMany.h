/* Runtime dump - NSSQLManyToMany
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLManyToMany : NSSQLRelationship
{
    NSString * _correlationTableName;
    NSString * _columnName;
    NSString * _orderColumnName;
}

- (char)isReflexive;
- (NSString *)correlationTableName;
- (NSString *)inverseColumnName;
- (NSString *)inverseOrderColumnName;
- (NSString *)orderColumnName;
- (unsigned int)columnSQLType;
- (unsigned int)orderColumnSQLType;
- (NSSQLManyToMany *)initWithEntity:(NSSQLEntity *)arg0 propertyDescription:(NSString *)arg1;
- (void)_setColumnName:(NSString *)arg0;
- (char)isMaster;
- (id)inverseManyToMany;
- (void)_setInverseManyToMany:(id)arg0;
- (void)_setCorrelationTableName:(NSString *)arg0;
- (void)_setOrderColumnName:(NSString *)arg0;
- (char)isTableSchemaEqual:(id)arg0;
- (void)dealloc;
- (NSString *)columnName;

@end
