/* Runtime dump - NSKeyPathExpression
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyPathExpression : NSFunctionExpression

- (id)CKExpressionValue;
- (NSKeyPathExpression *)initWithOperand:(NSExpression *)arg0 andKeyPath:(NSString *)arg1;
- (NSKeyPathExpression *)initWithKeyPath:(NSString *)arg0;
- (NSString *)predicateFormat;
- (NSObject *)pathExpression;
- (void)dealloc;
- (NSString *)keyPath;

@end
