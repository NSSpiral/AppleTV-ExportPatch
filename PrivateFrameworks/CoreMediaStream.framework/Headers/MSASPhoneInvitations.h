/* Runtime dump - MSASPhoneInvitations
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASPhoneInvitations : NSObject <IDSServiceDelegate>
{
    MSASStateMachine * _stateMachine;
    MSASAlbum * _album;
    IDSService * _idsService;
    NSMutableDictionary * _sendMessageIdentifierToPhone;
}

@property (retain, nonatomic) MSASStateMachine * stateMachine;
@property (retain, nonatomic) MSASAlbum * album;
@property (retain, nonatomic) IDSService * idsService;
@property (retain, nonatomic) NSMutableDictionary * sendMessageIdentifierToPhone;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MSASPhoneInvitations *)init;
- (void).cxx_destruct;
- (MSASStateMachine *)stateMachine;
- (void)setStateMachine:(MSASStateMachine *)arg0;
- (void)addPendingPhoneInvitations:(id)arg0 toOwnedAlbum:(id)arg1 inStateMachin:(id)arg2;
- (void)removeSharingRelationships:(id)arg0 forAlbum:(MSASAlbum *)arg1;
- (NSMutableDictionary *)sendMessageIdentifierToPhone;
- (void)setSendMessageIdentifierToPhone:(NSMutableDictionary *)arg0;
- (IDSService *)idsService;
- (void)service:(NSObject *)arg0 account:(NSObject *)arg1 identifier:(NSString *)arg2 didSendWithSuccess:(char)arg3 error:(NSError *)arg4;
- (void)setIdsService:(IDSService *)arg0;
- (void)setAlbum:(MSASAlbum *)arg0;
- (MSASAlbum *)album;

@end
