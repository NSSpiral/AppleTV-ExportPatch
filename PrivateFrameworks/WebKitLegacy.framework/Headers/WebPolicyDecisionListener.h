/* Runtime dump - WebPolicyDecisionListener
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener>
{
    WebPolicyDecisionListenerPrivate * _private;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)download;
- (void)dealloc;
- (void)ignore;
- (void)use;
- (void)_invalidate;
- (NSObject *)_initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)_usePolicy:(int)arg0;

@end
