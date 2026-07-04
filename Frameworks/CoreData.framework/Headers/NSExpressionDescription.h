/* Runtime dump - NSExpressionDescription
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSExpressionDescription : NSPropertyDescription
{
    id _reservedtype1_1;
    id _reservedtype1_2;
    unsigned int _reservedtype1_3;
    id _reservedtype1_4;
    unsigned int _reservedtype1_5;
    id _reservedtype1_6;
    void * _reservedtype2_1;
    void * _reservedtype2_2;
    void * _reservedtype2_3;
    NSExpression * _expression;
    unsigned int _expressionResultType;
}

@property (retain) NSExpression * expression;
@property unsigned int expressionResultType;

- (unsigned int)_propertyType;
- (NSExpression *)expression;
- (void)_writeIntoData:(NSData *)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(NSData *)arg4 entitiesSlots:(id)arg5 fetchRequests:(id)arg6;
- (unsigned int)expressionResultType;
- (void)dealloc;
- (NSExpressionDescription *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSExpressionDescription *)init;
- (NSExpressionDescription *)copyWithZone:(struct _NSZone *)arg0;
- (void)setExpression:(NSExpression *)arg0;
- (void)setExpressionResultType:(unsigned int)arg0;

@end
