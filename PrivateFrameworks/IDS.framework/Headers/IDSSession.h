/* Runtime dump - IDSSession
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSSession : NSObject
{
    _IDSSession * _internal;
}

@property (readonly, nonatomic) int socket;
@property (nonatomic) char isAudioEnabled;
@property (nonatomic) char isMuted;
@property (nonatomic) int invitationTimeOut;
@property (readonly, nonatomic) unsigned int sessionEndedReason;

- (_IDSSession *)_internal;
- (int)socket;
- (void)dealloc;
- (unsigned int)state;
- (void)endSession;
- (char)isAudioEnabled;
- (void)setIsAudioEnabled:(char)arg0;
- (void)sendInvitationWithOptions:(NSDictionary *)arg0;
- (void)sendInvitationWithData:(NSData *)arg0 declineOnError:(char)arg1;
- (void)cancelInvitationWithData:(NSData *)arg0;
- (void)acceptInvitationWithData:(NSData *)arg0;
- (void)declineInvitationWithData:(NSData *)arg0;
- (void)cancelInvitation;
- (void)endSessionWithData:(NSData *)arg0;
- (void)sendSessionMessage:(NSString *)arg0;
- (char)sendData:(NSData *)arg0 error:(id *)arg1;
- (unsigned int)sessionEndedReason;
- (IDSSession *)initWithAccount:(ACAccount *)arg0 destinations:(id)arg1 transportType:(int)arg2;
- (NSNumber *)_initWithAccount:(NSObject *)arg0 destinations:(id)arg1 transportType:(int)arg2 uniqueID:(NSString *)arg3;
- (void)sendInvitation;
- (void)sendInvitationWithData:(NSData *)arg0;
- (void)setInvitationTimeOut:(int)arg0;
- (int)invitationTimeOut;
- (char)isMuted;
- (void)setIsMuted:(char)arg0;
- (void)acceptInvitation;
- (void)declineInvitation;
- (void)setDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;

@end
