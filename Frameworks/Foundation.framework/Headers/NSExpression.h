/* Runtime dump - NSExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSExpression : NSObject <NSSecureCoding, NSCopying>
{
    struct _expressionFlags _expressionFlags;
    unsigned int _expressionType;
}

@property (readonly) unsigned int expressionType;
@property (readonly, retain) id constantValue;
@property (readonly, copy) NSString * keyPath;
@property (readonly, copy) NSString * function;
@property (readonly, copy) NSString * variable;
@property (readonly, copy) NSExpression * operand;
@property (readonly, copy) NSArray * arguments;
@property (readonly, retain) id collection;
@property (readonly, copy) NSPredicate * predicate;
@property (readonly, copy) NSExpression * leftExpression;
@property (readonly, copy) NSExpression * rightExpression;
@property (readonly, copy) id expressionBlock;

+ (NSExpression *)expressionWithCKDPRecordFieldValue:(id)arg0 translator:(CKDProtocolTranslator *)arg1;
+ (NSString *)_newKeyPathExpressionForString:(NSString *)arg0;
+ (NSExpression *)expressionForFunction:(id)arg0 selectorName:(NSString *)arg1 arguments:(NSArray *)arg2;
+ (NSExpression *)expressionForVariable:(id)arg0;
+ (NSExpression *)expressionForSubquery:(id)arg0 usingIteratorVariable:(id)arg1 predicate:(NSPredicate *)arg2;
+ (NSExpression *)expressionWithFormat:(NSString *)arg0;
+ (NSExpression *)expressionWithFormat:(NSString *)arg0 arguments:(void *)arg1;
+ (NSExpression *)expressionWithFormat:(NSString *)arg0 argumentArray:(NSMutableArray *)arg1;
+ (NSExpression *)expressionForSymbolicString:(NSString *)arg0;
+ (NSExpression *)expressionForAggregate:(id)arg0;
+ (NSExpression *)expressionForVariableNameAssignment:(id)arg0 expression:(NSObject *)arg1;
+ (NSExpression *)expressionForTernaryWithPredicate:(NSPredicate *)arg0 trueExpression:(NSExpression *)arg1 falseExpression:(NSExpression *)arg2;
+ (NSExpression *)expressionForUnionSet:(NSSet *)arg0 with:(id)arg1;
+ (NSExpression *)expressionForIntersectSet:(NSSet *)arg0 with:(id)arg1;
+ (NSExpression *)expressionForMinusSet:(NSSet *)arg0 with:(id)arg1;
+ (NSExpression *)expressionForBlock:(id /* block */)arg0 arguments:(/* block */ id)arg1;
+ (NSExpression *)expressionForAnyKey;
+ (char)supportsSecureCoding;
+ (NSExpression *)expressionForKeyPath:(NSString *)arg0;
+ (NSExpression *)expressionForFunction:(id)arg0 arguments:(NSArray *)arg1;
+ (NSExpression *)expressionForConstantValue:(id)arg0;
+ (NSExpression *)expressionForEvaluatedObject;

- (id)CKExpressionValue;
- (NSString *)minimalFormInContext:(NSObject *)arg0;
- (void)allowEvaluation;
- (NSExpression *)operand;
- (CoreDAVItemWithNoChildren *)collection;
- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSObject *)expressionValueWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSExpression *)initWithExpressionType:(unsigned int)arg0;
- (NSString *)predicateFormat;
- (NSExpression *)_expressionWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSExpression *)trueExpression;
- (NSExpression *)falseExpression;
- (char)_allowsEvaluation;
- (NSExpression *)subexpression;
- (id /* block */)expressionBlock;
- (char)_shouldUseParensWithDescription;
- (NSExpression *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSExpression *)copyWithZone:(struct _NSZone *)arg0;
- (SEL)selector;
- (NSString *)keyPath;
- (NSPredicate *)predicate;
- (NSString *)variable;
- (NSExpression *)leftExpression;
- (NSExpression *)rightExpression;
- (unsigned int)expressionType;
- (NSString *)function;
- (id)constantValue;
- (NSArray *)arguments;

@end
