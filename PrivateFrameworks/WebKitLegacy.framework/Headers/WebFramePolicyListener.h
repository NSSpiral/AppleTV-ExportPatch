/* Runtime dump - WebFramePolicyListener
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener>
{
    struct RefPtr<WebCore::Frame> _frame;
    struct function<void (WebCore::PolicyAction)> _policyFunction;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (void)download;
- (void)dealloc;
- (void)invalidate;
- (void)ignore;
- (void)use;
- (void).cxx_construct;
- (void)continue;
- (void).cxx_destruct;
- (WebFramePolicyListener *)initWithFrame:(struct Frame *)arg0 policyFunction:(int)arg1;
- (void)receivedPolicyDecision:(int)arg0;

@end
