/* Runtime dump - HMDHomeInvitation
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeInvitation : NSObject <NSSecureCoding>
{
    int _invitationState;
    HMDHome * _home;
    HMHomeInvitationData * _invitationData;
    NSObject<OS_dispatch_queue> * _clientQueue;
    id _resolutionHandler;
    id _expirationHandler;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (readonly, copy, nonatomic) NSUUID * identifier;
@property (readonly, copy, nonatomic) NSDate * startDate;
@property (readonly, copy, nonatomic) NSDate * endDate;
@property (nonatomic) int invitationState;
@property (readonly, nonatomic) char expired;
@property (readonly, nonatomic) char pending;
@property (readonly, nonatomic) char accepted;
@property (readonly, nonatomic) char declined;
@property (weak, nonatomic) HMDHome * home;
@property (retain, nonatomic) HMHomeInvitationData * invitationData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (copy, nonatomic) id resolutionHandler;
@property (copy, nonatomic) id expirationHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * timerQueue;

+ (char)supportsSecureCoding;

- (HMDHomeInvitation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSUUID *)identifier;
- (void).cxx_destruct;
- (void)setTimer:(NSObject<OS_dispatch_source> *)arg0;
- (NSObject<OS_dispatch_source> *)timer;
- (char)isExpired;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (HMDHome *)home;
- (void)setHome:(HMDHome *)arg0;
- (void)_configureTimer;
- (HMHomeInvitationData *)invitationData;
- (void)setClientQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (id /* block */)resolutionHandler;
- (void)_clearTimer;
- (char)isPending;
- (void)updateInvitationState:(int)arg0;
- (id /* block */)expirationHandler;
- (void)setTimerQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)timerQueue;
- (void)updateTimer:(unsigned int)arg0 clientQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)expireTimer;
- (void)setResolutionHandler:(id /* block */)arg0;
- (void)setExpirationHandler:(id /* block */)arg0;
- (HMDHomeInvitation *)initWithCoder:(NSCoder *)arg0 invitationData:(HMHomeInvitationData *)arg1;
- (HMDHomeInvitation *)initWithInvitationData:(HMHomeInvitationData *)arg0 forHome:(HMHome *)arg1;
- (char)isAccepted;
- (char)isDeclined;
- (void)resolveTimer:(char)arg0;
- (void)setInvitationData:(HMHomeInvitationData *)arg0;
- (void)setInvitationState:(int)arg0;
- (int)invitationState;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
