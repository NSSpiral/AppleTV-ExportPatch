/* Runtime dump - NSCFInputStream
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFInputStream : NSInputStream

+ (NSCFInputStream *)allocWithZone:(struct _NSZone *)arg0;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (NSCFInputStream *)initWithFileAtPath:(NSString *)arg0;
- (unsigned int)streamStatus;
- (char)getBuffer:(char * *)arg0 length:(unsigned int *)arg1;
- (char)_setCFClientFlags:(unsigned long)arg0 callback:(/* block */ id *)arg1 context:(struct ? *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg0 forMode:(struct __CFString *)arg1;
- (NSCFInputStream *)retain;
- (void)release;
- (void)setDelegate:(<NSStreamDelegate> *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (<NSStreamDelegate> *)delegate;
- (NSCFInputStream *)initWithData:(NSData *)arg0;
- (NSCFInputStream *)initWithURL:(NSString *)arg0;
- (char)allowsWeakReference;
- (char)retainWeakReference;
- (void)close;
- (void)open;
- (NSError *)streamError;
- (NSString *)propertyForKey:(NSString *)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (char)hasBytesAvailable;
- (int)read:(char *)arg0 maxLength:(unsigned int)arg1;
- (void)finalize;

@end
