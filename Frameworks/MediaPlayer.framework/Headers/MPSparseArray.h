/* Runtime dump - MPSparseArray
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSparseArray : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _maximumIndex;
    NSMutableArray * _nodes;
}

@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) unsigned int firstEmptyIndex;
@property (readonly, nonatomic) unsigned int maximumIndex;

+ (char)supportsSecureCoding;

- (unsigned int)maximumIndex;
- (void)_enumerateNodesWithOptions:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1 returningExistingObject:(id *)arg2;
- (NSObject *)_removeObjectAtIndex:(unsigned int)arg0 shouldSlide:(char)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg0 returningRemovedObject:(id *)arg1;
- (unsigned int)firstEmptyIndex;
- (MPSparseArray *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (void)removeAllObjects;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg0;
- (unsigned int)indexOfObject:(struct objc_method *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)enumerateObjectsWithOptions:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (MPSparseArray *)copyWithZone:(struct _NSZone *)arg0;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (void).cxx_destruct;

@end
