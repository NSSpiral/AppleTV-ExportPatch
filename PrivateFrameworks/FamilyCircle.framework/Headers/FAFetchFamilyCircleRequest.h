/* Runtime dump - FAFetchFamilyCircleRequest
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest
{
    char _signedInAccountShouldBeApprover;
    char _forceServerFetch;
    char _doNotFetchFromServer;
    char _promptUserToResolveAuthenticatonFailure;
    NSArray * _expectedDSIDs;
    NSDictionary * _serverResponse;
}

@property (copy) NSArray * expectedDSIDs;
@property char signedInAccountShouldBeApprover;
@property char forceServerFetch;
@property char doNotFetchFromServer;
@property char promptUserToResolveAuthenticatonFailure;
@property (readonly, retain) NSDictionary * serverResponse;

- (void).cxx_destruct;
- (void)setExpectedDSIDs:(NSArray *)arg0;
- (void)startRequestWithCompletionHandler:(id /* block */)arg0;
- (void)setForceServerFetch:(char)arg0;
- (NSDictionary *)requestOptions;
- (void)setDoNotFetchFromServer:(char)arg0;
- (NSArray *)expectedDSIDs;
- (char)signedInAccountShouldBeApprover;
- (char)forceServerFetch;
- (char)doNotFetchFromServer;
- (char)promptUserToResolveAuthenticatonFailure;
- (void)setSignedInAccountShouldBeApprover:(char)arg0;
- (void)setPromptUserToResolveAuthenticatonFailure:(char)arg0;
- (NSDictionary *)serverResponse;

@end
