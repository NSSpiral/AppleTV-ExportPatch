/* Runtime dump - NSCFArray
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFArray : NSMutableArray

+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (void)replaceObjectsInRange:(struct _NSRange)arg0 withObjects:(id *)arg1 count:(unsigned int)arg2;
- (char)containsObject:(NSObject *)arg0 inRange:(struct _NSRange)arg1;
- (NSCFArray *)retain;
- (void)release;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (void)removeLastObject;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSCFArray *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (void)sortUsingFunction:(/* block */ id *)arg0 context:(void *)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (void)exchangeObjectAtIndex:(unsigned int)arg0 withObjectAtIndex:(unsigned int)arg1;
- (void)getObjects:(id *)arg0 range:(struct _NSRange)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg0;
- (NSCFArray *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
