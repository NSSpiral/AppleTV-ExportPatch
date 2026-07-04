/* Runtime dump - NSSQLKeypathExpressionIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (NSObject *)_generateSQLForKeyPathExpression:(NSObject *)arg0 allowToMany:(char)arg1 inContext:(NSObject *)arg2;
- (NSObject *)_generateSQLForProperty:(NSString *)arg0 startEntity:(NSObject *)arg1 startAlias:(id)arg2 keypath:(NSString *)arg3 inContext:(NSObject *)arg4;

@end
