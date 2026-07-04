/* Runtime dump - SAPhoneCall
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneCall : SADomainCommand

@property (retain, nonatomic) SAPersonAttribute * callRecipient;
@property (copy, nonatomic) NSNumber * emergencyCall;
@property (nonatomic) char faceTime;
@property (nonatomic) char faceTimeAudio;
@property (nonatomic) char speakerphoneCall;

+ (SAPhoneCall *)call;
+ (NSDictionary *)callWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SAPersonAttribute *)callRecipient;
- (void)setCallRecipient:(SAPersonAttribute *)arg0;
- (NSNumber *)emergencyCall;
- (void)setEmergencyCall:(NSNumber *)arg0;
- (char)faceTime;
- (void)setFaceTime:(char)arg0;
- (char)faceTimeAudio;
- (void)setFaceTimeAudio:(char)arg0;
- (char)speakerphoneCall;
- (void)setSpeakerphoneCall:(char)arg0;

@end
