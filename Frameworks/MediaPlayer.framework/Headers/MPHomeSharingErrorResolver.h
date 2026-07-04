/* Runtime dump - MPHomeSharingErrorResolver
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate>
{
    NSURL * _keybagURL;
    unsigned long long _accountID;
    NSData * _accountTokenData;
    unsigned long long _downloaderAccountID;
    NSData * _downloaderAccountTokenData;
    unsigned long long _familyAccountID;
    NSError * _error;
    NSMutableArray * _requests;
    SSAuthorizationRequest * _activeRequest;
    char _atLeastOneAuthorizationRequestSuccessful;
    MPHomeSharingML3DataProvider * _dataProvider;
}

@property (retain, nonatomic) MPHomeSharingML3DataProvider * dataProvider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)resolveError:(NSError *)arg0;
- (MPHomeSharingErrorResolver *)initWithKeybagURL:(NSURL *)arg0 accountID:(unsigned long long)arg1 accountTokenData:(NSData *)arg2 downloaderAccountID:(unsigned long long)arg3 downloaderAccountTokenData:(NSData *)arg4 familyAccountID:(unsigned long long)arg5;
- (MPHomeSharingErrorResolver *)initWithKeybagURL:(NSURL *)arg0 accountID:(unsigned long long)arg1 accountTokenData:(NSData *)arg2;
- (char)_errorIsFairPlayError:(NSError *)arg0;
- (void)_performMachineAuthorization;
- (void)_processNextAuthorizationRequest;
- (void)authorizationRequest:(NSURLRequest *)arg0 didReceiveResponse:(char)arg1;
- (void)request:(NSURLRequest *)arg0 didFailWithError:(NSError *)arg1;
- (void)requestDidFinish:(SKRequest *)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setDataProvider:(MPHomeSharingML3DataProvider *)arg0;
- (MPHomeSharingML3DataProvider *)dataProvider;

@end
