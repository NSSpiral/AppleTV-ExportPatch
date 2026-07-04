/* Runtime dump - AASetupAssistantCreateResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASetupAssistantCreateResponse : AAResponse

@property (readonly, nonatomic) NSNumber * status;
@property (readonly, nonatomic) NSString * statusMessage;
@property (readonly, nonatomic) NSString * personID;
@property (readonly, nonatomic) NSString * appleID;
@property (readonly, nonatomic) NSString * HSAAction;
@property (readonly, nonatomic) NSString * HSAData;

- (NSNumber *)status;
- (NSString *)HSAAction;
- (NSString *)HSAData;
- (NSString *)statusMessage;
- (NSString *)appleID;
- (NSString *)personID;

@end
