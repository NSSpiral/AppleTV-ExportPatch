/* Runtime dump - WKWebProcessPlugInPageGroup
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInPageGroup : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebPageGroupProxy> _bundlePageGroup;
}

@property (readonly) NSString * identifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (void)dealloc;
- (NSString *)identifier;
- (void).cxx_construct;
- (struct Object *)_apiObject;

@end
