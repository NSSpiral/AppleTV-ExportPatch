/* Runtime dump - NSCFSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFSet : NSMutableSet

+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (void)getObjects:(id *)arg0;
- (unsigned int)_trueCount;
- (NSCFSet *)retain;
- (void)release;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)removeObject:(struct objc_method *)arg0;
- (unsigned int)count;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (void)unionSet:(struct objc_method *)arg0;
- (void)minusSet:(struct objc_method *)arg0;
- (NSCFSet *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (NSEnumerator *)objectEnumerator;
- (char)_tryRetain;
- (char)_isDeallocating;
- (NSCFSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSObject *)member:(struct objc_method *)arg0;
- (void)setSet:(struct objc_method *)arg0;
- (void)finalize;

@end
