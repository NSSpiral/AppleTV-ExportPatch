/* Runtime dump - WebFramePrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFramePrivate : NSObject
{
    struct Frame * coreFrame;
    WebFrameView * webFrameView;
    struct unique_ptr<WebScriptDebugger, std::__1::default_delete<WebScriptDebugger> > scriptDebugger;
    id internalLoadDelegate;
    char shouldCreateRenderers;
    char includedInWebKitStatistics;
    struct RetainPtr<NSString> url;
    struct RetainPtr<NSString> provisionalURL;
    char isCommitting;
    struct unique_ptr<WebCore::ContentFilter, std::__1::default_delete<WebCore::ContentFilter> > contentFilterForBlockedLoad;
}

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)finalize;
- (void)setWebFrameView:(WebFrameView *)arg0;

@end
