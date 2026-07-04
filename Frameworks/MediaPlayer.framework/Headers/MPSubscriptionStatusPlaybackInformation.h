/* Runtime dump - MPSubscriptionStatusPlaybackInformation
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSubscriptionStatusPlaybackInformation : NSObject
{
    int _accountSubscriptionStatus;
    int _carrierBundlingStatus;
    char _definitiveInformation;
    char _hasPlaybackCapability;
    char _requiresCarrierManualVerification;
    char _shouldUseLease;
    char _shouldUseAccountLessStreaming;
}

@property (readonly, nonatomic) char definitiveInformation;
@property (readonly, nonatomic) char hasPlaybackCapability;
@property (readonly, nonatomic) char requiresCarrierManualVerification;
@property (readonly, nonatomic) char shouldUseLease;
@property (readonly, nonatomic) char shouldUseAccountLessStreaming;

- (char)shouldUseLease;
- (MPSubscriptionStatusPlaybackInformation *)initWithSubscriptionStatus:(SSVSubscriptionStatus *)arg0;
- (char)isDefinitiveInformation;
- (char)hasPlaybackCapability;
- (char)shouldUseAccountLessStreaming;
- (char)requiresCarrierManualVerification;
- (NSString *)description;

@end
