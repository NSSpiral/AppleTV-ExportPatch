/* Runtime dump - NSCFOutputStream
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFOutputStream : NSOutputStream

+ (NSCFOutputStream *)allocWithZone:(struct _NSZone *)arg0;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (unsigned int)streamStatus;
- (char)_setCFClientFlags:(unsigned long)arg0 callback:(/* block */ id *)arg1 context:(struct ? *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1;
- (NSCFOutputStream *)initWithURL:(NSString *)arg0 append:(char)arg1;
- (NSCFOutputStream *)initToMemory;
- (NSCFOutputStream *)initToBuffer:(char *)arg0 capacity:(unsigned int)arg1;
- (NSCFOutputStream *)retain;
- (void)release;
- (void)setDelegate:(<NSStreamDelegate> *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (<NSStreamDelegate> *)delegate;
- (char)allowsWeakReference;
- (char)retainWeakReference;
- (void)close;
- (char)hasSpaceAvailable;
- (void)open;
- (int)write:(char *)arg0 maxLength:(unsigned int)arg1;
- (NSError *)streamError;
- (NSString *)propertyForKey:(NSString *)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (NSCFOutputStream *)initToFileAtPath:(NSString *)arg0 append:(char)arg1;
- (void)finalize;

@end
