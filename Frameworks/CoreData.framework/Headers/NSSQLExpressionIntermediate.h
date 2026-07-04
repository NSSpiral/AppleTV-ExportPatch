/* Runtime dump - NSSQLExpressionIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLExpressionIntermediate : NSSQLIntermediate
{
    NSExpression * _expression;
    char _allowToMany;
}

- (NSSQLExpressionIntermediate *)initWithExpression:(NSExpression *)arg0 allowToMany:(char)arg1 inScope:(NSObject *)arg2;

@end
