/* Runtime dump - BSEqualsBuilder
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSEqualsBuilder : NSObject
{
    char _equal;
}

+ (NSObject *)builder;
+ (NSObject *)builderWithObject:(NSObject *)arg0 ofExpectedClass:(Class)arg1;

- (BSEqualsBuilder *)init;
- (id)appendCGFloat:(float)arg0 counterpart:(id)arg1;
- (id)appendUnsignedInteger:(unsigned int)arg0 counterpart:(id)arg1;
- (id)appendEqualsBlocks:(id)arg0;
- (NSString *)appendString:(NSString *)arg0 counterpart:(id)arg1;
- (id)appendPointer:(void *)arg0 counterpart:(id)arg1;
- (NSArray *)appendArray:(NSArray *)arg0 counterpart:(id)arg1;
- (id)appendBool:(char)arg0 counterpart:(id)arg1;
- (NSObject *)appendCGPoint:(struct CGPoint)arg0 counterpart:(id)arg1;
- (NSObject *)appendCGSize:(struct CGSize)arg0 counterpart:(id)arg1;
- (NSObject *)appendCGRect:(struct CGRect)arg0 counterpart:(struct CGSize)arg1;
- (NSObject *)appendObject:(NSObject *)arg0 counterpart:(id)arg1;
- (id)appendInteger:(int)arg0 counterpart:(id)arg1;
- (char)isEqual;

@end
