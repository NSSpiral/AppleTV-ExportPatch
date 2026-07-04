/* Runtime dump - ISStoreAuthenticateOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate>
{
    NSNumber * _authenticatedDSID;
    SSMutableAuthenticationContext * _authenticationContext;
}

@property (readonly) SSAuthenticationContext * authenticationContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)run;
- (SSAuthenticationContext *)authenticationContext;
- (ISStoreAuthenticateOperation *)initWithAuthenticationContext:(SSAuthenticationContext *)arg0;
- (NSString *)uniqueKey;
- (NSNumber *)authenticatedAccountDSID;
- (NSNumber *)_authenticatedDSID;
- (void)_handleAuthenticateResponse:(NSURLResponse *)arg0;
- (void)_setAuthenticatedDSID:(id)arg0;

@end
