/* Runtime dump - MSSharingProtocol
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSSharingProtocol : NSObject
{
    struct __MSShPCContext _context;
    NSString * _personID;
    NSURL * _inviteURL;
    NSURL * _manageURL;
    NSURL * _respondURL;
    NSURL * _statusURL;
    NSArray * _shares;
    int _transactionType;
    <MSSharingProtocolDelegate> * _delegate;
}

@property (nonatomic) <MSSharingProtocolDelegate> * delegate;
@property (readonly, nonatomic) NSString * personID;

+ (NSDictionary *)shareFromPushUserInfo:(NSDictionary *)arg0 outSourcePersonID:(id *)arg1 outTargetPersonID:(id *)arg2 outError:(id *)arg3;
+ (NSObject *)shareStateFromProtocol:(NSObject *)arg0;
+ (NSString *)_invalidFieldErrorWithFieldName:(NSString *)arg0;
+ (int)_shareStateFromShareDictShareState:(NSObject *)arg0;
+ (NSObject *)_dictShareStateFromShareState:(int)arg0;
+ (MSSharingProtocol *)_shareFromShareDict:(id)arg0;
+ (MSSharingProtocol *)_shareDictFromShare:(id)arg0;
+ (MSSharingProtocol *)_shareDictsArrayFromShares:(id)arg0;
+ (NSArray *)_sharesFromShareDictsArray:(NSArray *)arg0;

- (void)dealloc;
- (void)setDelegate:(<MSSharingProtocolDelegate> *)arg0;
- (<MSSharingProtocolDelegate> *)delegate;
- (void).cxx_destruct;
- (MSSharingProtocol *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)_didFindServerSideConfigurationVersion:(NSString *)arg0;
- (void)deleteShares:(id)arg0;
- (void)sendInvitations:(id)arg0;
- (void)sendResponseToInvitation:(id)arg0 accept:(char)arg1;
- (void)modifyShares:(id)arg0;
- (void)requestCurrentShareState;
- (void)_checkForFailedInvitesWithResponse:(NSURLResponse *)arg0;
- (void)_didFindShareState:(NSObject *)arg0;
- (void)_didFinishTransactionWithResponseObject:(NSObject *)arg0 error:(NSError *)arg1;
- (void)_didFailAuthenticationWithError:(NSError *)arg0;
- (NSString *)personID;
- (void)abort;

@end
