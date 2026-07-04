/* Runtime dump - NSLeafProxy
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLeafProxy : NSObject <NSCopying>
{
    Class isa;
    NSString * dir;
    NSString * file;
    NSDocInfo * docInfo;
    int refCount;
    id realObject;
}

+ (NSLeafProxy *)initialize;
+ (NSLeafProxy *)alloc;
+ (NSLeafProxy *)allocWithZone:(struct _NSZone *)arg0;
+ (void)forwardInvocation:(NSInvocation *)arg0;

- (NSLeafProxy *)initDir:(id)arg0 file:(NSString *)arg1 docInfo:(NSDocInfo *)arg2;
- (void)reallyDealloc;
- (NSLeafProxy *)retain;
- (void)release;
- (void)dealloc;
- (NSLeafProxy *)copy;
- (NSLeafProxy *)autorelease;
- (char)isProxy;
- (unsigned int)retainCount;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSLeafProxy *)copyWithZone:(struct _NSZone *)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (void)forwardInvocation:(NSInvocation *)arg0;

@end
