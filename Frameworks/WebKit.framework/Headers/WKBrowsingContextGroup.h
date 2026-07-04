/* Runtime dump - WKBrowsingContextGroup
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBrowsingContextGroup : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebPageGroup> _pageGroup;
}

@property (readonly) struct OpaqueWKPageGroup * _pageGroupRef;
@property char allowsJavaScript;
@property char allowsPlugIns;
@property char privateBrowsingEnabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (void)dealloc;
- (WKBrowsingContextGroup *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_construct;
- (struct Object *)_apiObject;
- (struct OpaqueWKPageGroup *)_pageGroupRef;
- (void)removeAllUserScripts;
- (char)allowsJavaScript;
- (void)setAllowsJavaScript:(char)arg0;
- (char)allowsJavaScriptMarkup;
- (void)setAllowsJavaScriptMarkup:(char)arg0;
- (char)allowsPlugIns;
- (void)setAllowsPlugIns:(char)arg0;
- (char)privateBrowsingEnabled;
- (void)setPrivateBrowsingEnabled:(char)arg0;
- (void)addUserStyleSheet:(NSObject *)arg0 baseURL:(NSURL *)arg1 whitelistedURLPatterns:(id)arg2 blacklistedURLPatterns:(id)arg3 mainFrameOnly:(char)arg4;
- (void)removeAllUserStyleSheets;
- (void)addUserScript:(WKUserScript *)arg0 baseURL:(NSURL *)arg1 whitelistedURLPatterns:(id)arg2 blacklistedURLPatterns:(id)arg3 injectionTime:(int)arg4 mainFrameOnly:(char)arg5;

@end
