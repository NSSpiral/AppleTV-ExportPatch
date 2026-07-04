/* Runtime dump - WKObject
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKObject : NSObject <WKObject>
{
    char _hasInitializedTarget;
    NSObject * _target;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (Class)classForKeyedArchiver;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (char)isKindOfClass:(Class)arg0;
- (char)isEqual:(NSObject *)arg0;
- (char)isMemberOfClass:(Class)arg0;
- (char)conformsToProtocol:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (Class)classForCoder;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (struct Object *)_apiObject;
- (NSObject *)_web_createTarget;

@end
