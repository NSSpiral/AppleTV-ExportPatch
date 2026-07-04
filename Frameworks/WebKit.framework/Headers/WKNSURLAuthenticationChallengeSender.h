/* Runtime dump - WKNSURLAuthenticationChallengeSender
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNSURLAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)useCredential:(NSObject *)arg0 forAuthenticationChallenge:(NSObject *)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(NSObject *)arg0;
- (void)cancelAuthenticationChallenge:(NSObject *)arg0;
- (void)performDefaultHandlingForAuthenticationChallenge:(NSObject *)arg0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(NSObject *)arg0;

@end
