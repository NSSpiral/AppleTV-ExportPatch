/* Runtime dump - TSUSparseArray
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUSparseArray : NSObject <NSCopying>
{
    struct tsuSaPage * _topPage;
    unsigned int _nonNilCount;
    unsigned int _depth;
}

@property (readonly) unsigned int count;

- (unsigned int)maxIndexForCurrentDepth;
- (void)increaseDepth;
- (char)hasObjectForKey:(unsigned int)arg0;
- (void)foreach:(ODXForEach *)arg0;
- (NSString *)objectForKey:(unsigned int)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)description;
- (void)removeObjectForKey:(unsigned int)arg0;
- (TSUSparseArray *)copyWithZone:(struct _NSZone *)arg0;
- (void)clear;

@end
