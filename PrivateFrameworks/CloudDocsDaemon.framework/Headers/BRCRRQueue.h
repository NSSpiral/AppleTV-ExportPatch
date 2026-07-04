/* Runtime dump - BRCRRQueue
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCRRQueue : NSEnumerator
{
    NSMapTable * _objects;
    NSMutableArray * _array;
    unsigned int _pos;
}

@property (readonly, nonatomic) unsigned int count;

- (void)removeObject:(struct objc_method *)arg0;
- (unsigned int)count;
- (BRCRRQueue *)init;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (char)containsObject:(NSObject *)arg0;
- (BRCRRQueue *)initWithCapacity:(unsigned int)arg0;
- (NSObject *)nextObject;
- (void).cxx_destruct;

@end
