/* Runtime dump - AAProvisioningResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAProvisioningResponse : AAAuthenticationResponse
{
    NSDictionary * _icloud;
}

@property (readonly, nonatomic) NSArray * provisionedDataclasses;
@property (readonly, nonatomic) NSDictionary * dataclassProperties;
@property (readonly, nonatomic) NSString * appleID;
@property (readonly, nonatomic) NSArray * appleIDAliases;
@property (readonly, nonatomic) NSString * firstName;
@property (readonly, nonatomic) NSString * lastName;
@property (readonly, nonatomic) NSString * primaryEmail;
@property (readonly, nonatomic) NSNumber * primaryEmailVerified;
@property (readonly, nonatomic) NSString * iCloudAuthToken;
@property (readonly, nonatomic) NSString * fmipAuthToken;

- (AAProvisioningResponse *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (NSDictionary *)dataclassProperties;
- (AAProvisioningResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSArray *)appleIDAliases;
- (NSNumber *)primaryEmailVerified;
- (NSString *)fmipAuthToken;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSString *)iCloudAuthToken;
- (NSString *)primaryEmail;
- (NSArray *)provisionedDataclasses;
- (NSString *)appleID;

@end
