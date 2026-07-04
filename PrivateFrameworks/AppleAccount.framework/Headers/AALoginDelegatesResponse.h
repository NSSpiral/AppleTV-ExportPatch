/* Runtime dump - AALoginDelegatesResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AALoginDelegatesResponse : AAResponse

@property (readonly, nonatomic) NSNumber * status;
@property (readonly, nonatomic) NSString * statusMessage;
@property (readonly, nonatomic) NSDictionary * responseParameters;
@property (readonly, nonatomic) NSString * dsid;

- (NSNumber *)status;
- (NSDictionary *)responseParameters;
- (NSString *)responseParametersForServiceIdentifier:(NSString *)arg0;
- (NSString *)dsid;
- (NSString *)statusMessage;

@end
