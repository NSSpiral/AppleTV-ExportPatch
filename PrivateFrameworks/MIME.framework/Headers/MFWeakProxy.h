/* Runtime dump - MFWeakProxy
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFWeakProxy : NSProxy
{
    Class _objectClass;
    MFWeakReferenceHolder * _weakRef;
    unsigned int _hash;
}

+ (NSObject *)weakProxyForObject:(NSObject *)arg0;

- (struct objc_method_description *)methodDescriptionForSelector:(SEL)arg0;
- (Class)class;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (char)isEqual:(NSObject *)arg0;
- (MFWeakProxy *)self;
- (char)isProxy;
- (unsigned int)hash;
- (Class)superclass;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)doesNotRecognizeSelector:(SEL)arg0;
- (MFWeakProxy *)initWithObject:(NSObject *)arg0;
- (NSLocale *)descriptionWithLocale:(NSObject *)arg0;

@end
