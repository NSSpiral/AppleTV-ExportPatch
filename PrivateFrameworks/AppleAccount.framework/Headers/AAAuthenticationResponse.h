/* Runtime dump - AAAuthenticationResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAuthenticationResponse : AAResponse
{
    NSDictionary * _tokens;
    NSDictionary * _appleAccount;
}

@property (readonly, nonatomic) NSString * fmfToken;
@property (readonly, nonatomic) NSString * fmfAppToken;
@property (readonly, nonatomic) NSString * fmipToken;
@property (readonly, nonatomic) NSString * authToken;
@property (readonly, nonatomic) NSString * mapsToken;
@property (readonly, nonatomic) NSString * hsaToken;
@property (readonly, nonatomic) NSString * cloudKitToken;
@property (readonly, nonatomic) NSString * fmipLostModeToken;
@property (readonly, nonatomic) NSString * personID;
@property (readonly, nonatomic) NSString * altDSID;
@property (readonly, nonatomic) NSString * HSAAction;
@property (readonly, nonatomic) NSString * HSAData;

- (void).cxx_destruct;
- (NSString *)HSAAction;
- (AAAuthenticationResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSString *)fmfToken;
- (NSString *)fmfAppToken;
- (NSString *)fmipToken;
- (NSString *)hsaToken;
- (NSString *)cloudKitToken;
- (NSString *)fmipLostModeToken;
- (NSString *)altDSID;
- (NSString *)HSAData;
- (NSString *)authToken;
- (NSString *)mapsToken;
- (NSString *)personID;

@end
