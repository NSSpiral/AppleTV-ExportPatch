/* Runtime dump - MSSharingManager
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSSharingManager : NSObject <MSSharingManager, MSSharingProtocolDelegate>
{
    NSString * _personID;
    NSString * _manifestPath;
    NSArray * _shares;
    NSMutableArray * _sharesWithLocalModifications;
    MSSharingProtocol * _protocol;
    int _state;
    char _requestCurrentStateRequested;
    NSMutableArray * _invitationQueue;
    NSMutableArray * _invitationResponseQueue;
    NSMutableDictionary * _manageShareByPersonID;
    NSMutableArray * _deleteQueue;
    NSTimer * _manageShareDebounceTimer;
    <MSSharingManagerDelegate> * _delegate;
    MSMediaStreamDaemon * _daemon;
}

@property (nonatomic) MSMediaStreamDaemon * daemon;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) <MSSharingManagerDelegate> * delegate;
@property (readonly, nonatomic) NSString * personID;
@property (retain, nonatomic) NSArray * shares;

+ (NSObject *)sharingManagerForPersonID:(NSObject *)arg0;
+ (NSObject *)existingSharingManagerForPersonID:(NSObject *)arg0;
+ (void)abortAllActivities;
+ (NSObject *)_clearInstantiatedSharingManagersByPersonID;
+ (void)forgetPersonID:(NSObject *)arg0;

- (void)dealloc;
- (void)setDelegate:(<MSSharingManagerDelegate> *)arg0;
- (<MSSharingManagerDelegate> *)delegate;
- (void).cxx_destruct;
- (MSMediaStreamDaemon *)daemon;
- (NSArray *)shares;
- (void)setShares:(NSArray *)arg0;
- (void)setDaemon:(MSMediaStreamDaemon *)arg0;
- (void)sendInvitationsForShares:(id)arg0;
- (void)respondToInvitation:(id)arg0 accept:(char)arg1;
- (void)modifyShare:(id)arg0;
- (void)removeShare:(CKShare *)arg0;
- (void)refreshCurrentShareState;
- (MSSharingManager *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)_performNextQueuedAction;
- (void)_shareDebounceTimerDidFire:(id)arg0;
- (NSMutableArray *)_sharesWithLocalModifications;
- (void)_sendNextDeletion;
- (void)_sendNextInvitationResponse;
- (void)_sendNextInvitation;
- (void)_sendNextManagedShare;
- (void)_requestCurrentShareState;
- (void)sharingProtocol:(NSObject *)arg0 didFindShareState:(NSObject *)arg1;
- (void)sharingProtocol:(NSObject *)arg0 didCompleteTransactionWithError:(NSError *)arg1;
- (void)sharingProtocol:(NSObject *)arg0 didFailToSendInvitations:(id)arg1;
- (void)sharingProtocol:(NSObject *)arg0 didReceiveAuthenticationError:(char)arg1;
- (NSString *)personID;
- (void)abort;

@end
