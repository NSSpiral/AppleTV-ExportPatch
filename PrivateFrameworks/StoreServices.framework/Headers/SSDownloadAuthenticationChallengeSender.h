/* Runtime dump - SSDownloadAuthenticationChallengeSender
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender>
{
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SSDownloadAuthenticationSession * _session;
}

@property (readonly) SSDownloadAuthenticationSession * authenticationSession;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)useCredential:(NSObject *)arg0 forAuthenticationChallenge:(NSObject *)arg1;
- (SSDownloadAuthenticationChallengeSender *)initWithAuthenticationSession:(SSDownloadAuthenticationSession *)arg0;
- (SSDownloadAuthenticationSession *)authenticationSession;
- (void)continueWithoutCredentialForAuthenticationChallenge:(NSObject *)arg0;
- (void)cancelAuthenticationChallenge:(NSObject *)arg0;
- (void)performDefaultHandlingForAuthenticationChallenge:(NSObject *)arg0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(NSObject *)arg0;

@end
