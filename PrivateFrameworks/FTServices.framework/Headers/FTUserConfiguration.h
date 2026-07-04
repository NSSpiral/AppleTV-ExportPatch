/* Runtime dump - FTUserConfiguration
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTUserConfiguration : NSObject

@property (nonatomic) char cellularFaceTimeEnabled;
@property (nonatomic) char allowAnyNetwork;
@property (readonly, nonatomic) char _nonWifiFaceTimeEntitled;

+ (FTUserConfiguration *)sharedInstance;

- (char)_nonWifiFaceTimeEntitled;
- (char)cellularFaceTimeEnabled;
- (char)_adequateInternalOrCarrierInstall;
- (void)setCellularFaceTimeEnabled:(char)arg0;
- (void)setAllowAnyNetwork:(char)arg0;
- (char)allowAnyNetwork;

@end
