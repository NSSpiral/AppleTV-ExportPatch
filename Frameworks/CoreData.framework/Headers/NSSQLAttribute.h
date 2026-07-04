/* Runtime dump - NSSQLAttribute
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLAttribute : NSSQLColumn

- (NSAttributeDescription *)attributeDescription;
- (NSSQLAttribute *)initWithEntity:(NSSQLEntity *)arg0 propertyDescription:(NSString *)arg1;
- (unsigned int)_sqlTypeForAttributeType:(unsigned int)arg0 flags:(unsigned int)arg1;
- (NSSQLAttribute *)initForReadOnlyFetchWithExpression:(NSObject *)arg0;
- (char)shouldIndex;

@end
