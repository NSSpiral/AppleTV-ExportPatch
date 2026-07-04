/* Runtime dump - SSFamilyCircleRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSFamilyCircleRequest : SSRequest <SSXPCCoding>
{
    int _authenticationPromptStyle;
    char _fetchITunesAccountNames;
}

@property (nonatomic) int authenticationPromptStyle;
@property (nonatomic) char fetchITunesAccountNames;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSFamilyCircleRequest *)initWithXPCEncoding:(NSString *)arg0;
- (void)startWithResponseBlock:(id /* block */)arg0;
- (int)authenticationPromptStyle;
- (void)setAuthenticationPromptStyle:(int)arg0;
- (char)fetchITunesAccountNames;
- (void)setFetchITunesAccountNames:(char)arg0;

@end
