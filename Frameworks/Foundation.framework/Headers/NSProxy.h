/* Runtime dump - NSProxy
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProxy : NSObject <NSObject>
{
    Class isa;
}

@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (NSString *)_copyDescription;
+ (char)isAncestorOfObject:(NSObject *)arg0;
+ (NSProxy *)retain;
+ (void)release;
+ (NSProxy *)alloc;
+ (Class)class;
+ (void)dealloc;
+ (char)respondsToSelector:(SEL)arg0;
+ (NSProxy *)init;
+ (char)isKindOfClass:(Class)arg0;
+ (NSProxy *)copy;
+ (NSProxy *)autorelease;
+ (char)isEqual:(NSObject *)arg0;
+ (NSProxy *)self;
+ (NSString *)performSelector:(SEL)arg0;
+ (NSString *)performSelector:(SEL)arg0 withObject:(NSObject *)arg1;
+ (NSString *)performSelector:(SEL)arg0 withObject:(NSObject *)arg1 withObject:(NSObject *)arg2;
+ (char)isProxy;
+ (char)isMemberOfClass:(Class)arg0;
+ (char)conformsToProtocol:(NSObject *)arg0;
+ (unsigned int)retainCount;
+ (struct _NSZone *)zone;
+ (unsigned int)hash;
+ (Class)superclass;
+ (NSString *)description;
+ (NSString *)debugDescription;
+ (char)isSubclassOfClass:(Class)arg0;
+ (NSString *)methodSignatureForSelector:(SEL)arg0;
+ (NSProxy *)mutableCopy;
+ (void)initialize;
+ (NSProxy *)allocWithZone:(struct _NSZone *)arg0;
+ (NSProxy *)copyWithZone:(struct _NSZone *)arg0;
+ (/* block */ id *)instanceMethodForSelector:(SEL)arg0;
+ (char)_tryRetain;
+ (char)_isDeallocating;
+ (/* block */ id *)methodForSelector:(SEL)arg0;
+ (char)instancesRespondToSelector:(SEL)arg0;
+ (NSString *)forwardingTargetForSelector:(SEL)arg0;
+ (NSProxy *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (void)forwardInvocation:(NSInvocation *)arg0;
+ (char)allowsWeakReference;
+ (char)retainWeakReference;
+ (void)doesNotRecognizeSelector:(SEL)arg0;
+ (NSProxy *)mutableCopyWithZone:(struct _NSZone *)arg0;
+ (char)isFault;
+ (void)finalize;

- (NSString *)_accessibilityValueForKey:(NSString *)arg0;
- (void)_accessibilitySetValue:(id)arg0 forKey:(NSString *)arg1 storageMode:(int)arg2;
- (void)_accessibilitySetRetainedValue:(id)arg0 forKey:(NSString *)arg1;
- (char)_accessibilityBoolValueForKey:(NSString *)arg0;
- (int)_accessibilityIntegerValueForKey:(NSString *)arg0;
- (unsigned int)_accessibilityUnsignedIntegerValueForKey:(NSString *)arg0;
- (void)_accessibilitySetAssignedValue:(id)arg0 forKey:(NSString *)arg1;
- (void)_accessibilitySetBoolValue:(char)arg0 forKey:(NSString *)arg1;
- (void)_accessibilitySetIntegerValue:(int)arg0 forKey:(NSString *)arg1;
- (void)_accessibilitySetUnsignedIntegerValue:(unsigned int)arg0 forKey:(NSString *)arg1;
- (void)_accessibilityRemoveValueForKey:(NSString *)arg0;
- (NSString *)_copyDescription;
- (char)_allowsDirectEncoding;
- (NSProxy *)retain;
- (void)release;
- (Class)class;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (char)isKindOfClass:(Class)arg0;
- (NSProxy *)autorelease;
- (char)isEqual:(NSObject *)arg0;
- (NSProxy *)self;
- (NSString *)performSelector:(SEL)arg0;
- (NSString *)performSelector:(SEL)arg0 withObject:(NSObject *)arg1;
- (NSString *)performSelector:(SEL)arg0 withObject:(NSObject *)arg1 withObject:(NSObject *)arg2;
- (char)isProxy;
- (char)isMemberOfClass:(Class)arg0;
- (char)conformsToProtocol:(NSObject *)arg0;
- (unsigned int)retainCount;
- (struct _NSZone *)zone;
- (unsigned int)hash;
- (Class)superclass;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (char)allowsWeakReference;
- (char)retainWeakReference;
- (void)doesNotRecognizeSelector:(SEL)arg0;
- (char)isFault;
- (void)finalize;

@end
