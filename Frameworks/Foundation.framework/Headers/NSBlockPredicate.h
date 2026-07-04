/* Runtime dump - NSBlockPredicate
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBlockPredicate : NSPredicate
{
    id _block;
}

- (void)acceptVisitor:(NSObject *)arg0 flags:(unsigned int)arg1;
- (NSPredicate *)predicateWithSubstitutionVariables:(NSDictionary *)arg0;
- (NSString *)predicateFormat;
- (NSBlockPredicate *)initWithBlock:(id /* block */)arg0;
- (id /* block */)_predicateBlock;
- (void)dealloc;
- (NSBlockPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSBlockPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (char)supportsSecureCoding;
- (char)evaluateWithObject:(NSObject *)arg0 substitutionVariables:(NSDictionary *)arg1;

@end
