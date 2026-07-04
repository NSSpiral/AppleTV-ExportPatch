/* Runtime dump - NSSQLConstantValueIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLConstantValueIntermediate : NSSQLIntermediate
{
    unsigned int _type;
    id _constantValue;
}

- (NSSQLConstantValueIntermediate *)initWithConstantValue:(id)arg0 inScope:(NSObject *)arg1;
- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSObject *)propertyAtEndOfKeyPathExpression:(NSObject *)arg0;
- (unsigned int)sqlTypeForProperty:(NSString *)arg0;
- (char)_addBindVarForConstId:(NSObject *)arg0 ofType:(unsigned int)arg1 inContext:(NSObject *)arg2;
- (char)_addBindVarForConstVal1:(id)arg0 inContext:(NSObject *)arg1;
- (NSSQLConstantValueIntermediate *)initWithConstantValue:(id)arg0 ofType:(unsigned int)arg1 inScope:(NSObject *)arg2;
- (void)dealloc;

@end
