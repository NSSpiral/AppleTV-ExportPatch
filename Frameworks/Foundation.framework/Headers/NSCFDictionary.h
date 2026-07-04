/* Runtime dump - NSCFDictionary
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFDictionary : NSMutableDictionary

+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (void)getObjects:(id *)arg0 andKeys:(id *)arg1;
- (void)setObservationInfo:(void *)arg0;
- (NSCFDictionary *)retain;
- (void)release;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (unsigned int)count;
- (void)removeAllObjects;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSCFDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (char)_tryRetain;
- (char)_isDeallocating;
- (NSEnumerator *)keyEnumerator;
- (NSCFDictionary *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
