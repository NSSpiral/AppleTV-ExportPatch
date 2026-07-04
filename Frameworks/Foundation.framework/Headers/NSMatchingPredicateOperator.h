/* Runtime dump - NSMatchingPredicateOperator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMatchingPredicateOperator : NSStringPredicateOperator
{
    int _contextLock;
    struct ? * _regexContext;
}

- (char)performPrimitiveOperationUsingObject:(NSObject *)arg0 andObject:(NSObject *)arg1;
- (NSMatchingPredicateOperator *)initWithOperatorType:(unsigned int)arg0 modifier:(unsigned int)arg1 variant:(unsigned int)arg2;
- (char)_shouldEscapeForLike;
- (void)_clearContext;
- (void)dealloc;
- (SEL)selector;
- (UIImageView *)symbol;
- (void)finalize;

@end
