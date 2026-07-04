/* Runtime dump - WKWebProcessPlugInScriptWorld
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;
}

@property (readonly) struct InjectedBundleScriptWorld * _scriptWorld;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

+ (WKWebProcessPlugInScriptWorld *)normalWorld;
+ (struct ObjectStorage<WebKit::InjectedBundleScriptWorld>)world;

- (void)dealloc;
- (void).cxx_construct;
- (struct Object *)_apiObject;
- (struct InjectedBundleScriptWorld *)_scriptWorld;
- (void)clearWrappers;

@end
