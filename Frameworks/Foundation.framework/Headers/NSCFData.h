/* Runtime dump - NSCFData
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFData : NSMutableData
{
    id _cfinfo;
    long _length;
    long _capacity;
    struct __CFAllocator * _bytesDeallocator;
    char * _bytes;
}

+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (char)_compact;
- (NSCFData *)retain;
- (void)release;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (unsigned int)length;
- (void *)bytes;
- (NSCFData *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLength:(unsigned int)arg0;
- (char)allowsWeakReference;
- (char)retainWeakReference;
- (void *)mutableBytes;
- (void)finalize;

@end
