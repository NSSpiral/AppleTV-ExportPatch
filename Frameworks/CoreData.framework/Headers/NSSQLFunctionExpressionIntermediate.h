/* Runtime dump - NSSQLFunctionExpressionIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate

+ (char)functionIsAcceptableAsAggregate:(id)arg0;

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (char)isFunctionScoped;
- (id)_generateUncorrelatedSubqueryStringWithSymbol:(id)arg0 forAttribute:(NSObject *)arg1 inContext:(NSObject *)arg2;
- (id)_generateCorrelatedSubqueryStringWithSymbol:(id)arg0 forExpression:(NSObject *)arg1 inContext:(NSObject *)arg2;
- (id)_generateArgumentStringForCollection:(id)arg0 inContext:(NSObject *)arg1;
- (id)_generateSelectForAggregateStringWithSymbol:(id)arg0 argument:(void *)arg1 inContext:(NSObject *)arg2;
- (NSString *)generateType1SQLString:(NSString *)arg0 inContext:(NSObject *)arg1;
- (NSString *)generateType2SQLString:(NSString *)arg0 inContext:(NSObject *)arg1;
- (NSString *)generateType3SQLString:(NSString *)arg0 keypathOnly:(char)arg1 inContext:(NSObject *)arg2;
- (id)_generateType4SQLForSymbol:(id)arg0 inContext:(NSObject *)arg1;
- (NSString *)_generateSQLForCountInContext:(NSObject *)arg0;
- (id)_generateMathStringWithSymbol:(id)arg0 inContext:(NSObject *)arg1;
- (NSString *)_generateDistinctStringInContext:(NSObject *)arg0;
- (NSString *)_generateNowStringInContext:(NSObject *)arg0;

@end
