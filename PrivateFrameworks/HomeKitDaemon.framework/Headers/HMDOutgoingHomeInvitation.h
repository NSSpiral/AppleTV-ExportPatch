/* Runtime dump - HMDOutgoingHomeInvitation
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDOutgoingHomeInvitation : HMDHomeInvitation
{
    char _responseReceived;
    HMDUser * _user;
    NSString * _inviteeDestinationAddress;
    NSArray * _operations;
    NSUUID * _messageIdentifier;
}

@property (readonly, nonatomic) HMDUser * user;
@property (retain, nonatomic) NSString * inviteeDestinationAddress;
@property (retain, nonatomic) NSArray * operations;
@property (readonly, nonatomic) char complete;
@property (nonatomic) char responseReceived;
@property (readonly, nonatomic) NSUUID * messageIdentifier;

+ (char)supportsSecureCoding;

- (void)cancel;
- (HMDOutgoingHomeInvitation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)shortDescription;
- (void).cxx_destruct;
- (void)setOperations:(NSArray *)arg0;
- (NSArray *)operations;
- (HMDUser *)user;
- (char)isComplete;
- (char)responseReceived;
- (NSString *)inviteeDestinationAddress;
- (HMDOutgoingHomeInvitation *)initWithInvitee:(HMUser *)arg0 invitationState:(int)arg1 forHome:(HMHome *)arg2 expiryDate:(NSDate *)arg3 messageIdentifier:(NSUUID *)arg4;
- (char)mergeWithInvitation:(id)arg0;
- (void)setInviteeDestinationAddress:(NSString *)arg0;
- (void)setResponseReceived:(char)arg0;
- (NSUUID *)messageIdentifier;

@end
