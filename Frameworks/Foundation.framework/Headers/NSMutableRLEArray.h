/* Runtime dump - NSMutableRLEArray
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableRLEArray : NSRLEArray

- (void)insertObject:(NSObject *)arg0 range:(struct _NSRange)arg1;
- (void)replaceObjectsInRange:(struct _NSRange)arg0 withObject:(NSObject *)arg1 length:(unsigned int)arg2;
- (void)deleteObjectsInRange:(struct _NSRange)arg0;
- (void)_setBlockCapacity:(unsigned int)arg0;
- (NSMutableRLEArray *)copyWithZone:(struct _NSZone *)arg0;

@end
