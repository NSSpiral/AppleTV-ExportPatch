/* Runtime dump - GKABPerson
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKABPerson : GKABRecord

@property (retain, nonatomic) GKABMultiValue * socialProfile;

- (GKABMultiValue *)socialProfile;
- (void)setSocialProfile:(GKABMultiValue *)arg0;
- (char)updateSocialProfileWithPlayer:(id)arg0;
- (NSArray *)emails;

@end
