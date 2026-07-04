/* Runtime dump - NSCFCharacterSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFCharacterSet : NSMutableCharacterSet

+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (Class)classForArchiver;
- (char)longCharacterIsMember:(unsigned long)arg0;
- (char)hasMemberInPlane:(unsigned char)arg0;
- (void)addCharactersInRange:(struct _NSRange)arg0;
- (void)removeCharactersInRange:(struct _NSRange)arg0;
- (void)formIntersectionWithCharacterSet:(NSSet *)arg0;
- (void)invert;
- (NSData *)bitmapRepresentation;
- (char)isSupersetOfSet:(NSSet *)arg0;
- (void)makeCharacterSetCompact;
- (void)makeCharacterSetFast;
- (Class)classForKeyedArchiver;
- (NSCFCharacterSet *)retain;
- (void)release;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSCFCharacterSet *)copyWithZone:(struct _NSZone *)arg0;
- (char)characterIsMember:(unsigned short)arg0;
- (char)allowsWeakReference;
- (char)retainWeakReference;
- (NSCFCharacterSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)formUnionWithCharacterSet:(NSSet *)arg0;
- (void)removeCharactersInString:(NSString *)arg0;
- (void)addCharactersInString:(NSString *)arg0;
- (NSCharacterSet *)invertedSet;
- (void)finalize;

@end
