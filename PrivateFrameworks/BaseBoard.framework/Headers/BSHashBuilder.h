/* Runtime dump - BSHashBuilder
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSHashBuilder : NSObject
{
    unsigned int _hash;
}

+ (NSObject *)builder;

- (BSHashBuilder *)init;
- (unsigned int)hash;
- (id)appendCGFloat:(float)arg0;
- (id)appendFloat:(float)arg0;
- (void)_append:(unsigned int)arg0;
- (id)appendHashingBlocks:(id)arg0;
- (id)appendPointer:(void *)arg0;
- (NSObject *)appendPoint:(struct CGPoint)arg0;
- (NSObject *)appendSize:(struct CGSize)arg0;
- (NSObject *)appendRect:(struct CGRect)arg0;
- (id)appendInteger:(int)arg0;
- (id)appendBool:(char)arg0;
- (NSObject *)appendObject:(NSObject *)arg0;
- (id)appendUnsignedInteger:(unsigned int)arg0;
- (NSArray *)appendArray:(NSArray *)arg0;
- (id)appendDouble:(double)arg0;

@end
