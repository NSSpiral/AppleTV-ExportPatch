/* Runtime dump - WKWebProcessPlugInHitTestResult
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleHitTestResult> _hitTestResult;
}

@property (readonly) WKWebProcessPlugInNodeHandle * nodeHandle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (void)dealloc;
- (void).cxx_construct;
- (struct Object *)_apiObject;
- (WKWebProcessPlugInNodeHandle *)nodeHandle;

@end
