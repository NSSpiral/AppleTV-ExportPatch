/* Runtime dump - AAFamilyEligibilityResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFamilyEligibilityResponse : AAResponse
{
    char _hasPendingInvites;
    NSArray * _familyFeaturePrimaryDescriptions;
    NSArray * _familyFeatureSecondaryDescriptions;
    NSString * _familyFeatureSecondaryTitle;
    NSString * _underageEligibilityAlertTitle;
    NSString * _underageEligibilityAlertMessage;
}

@property (readonly, nonatomic) char eligible;
@property (readonly, nonatomic) int eligibilityStatus;
@property (readonly, nonatomic) char hasPendingInvites;
@property (readonly, nonatomic) NSArray * familyFeaturePrimaryDescriptions;
@property (readonly, nonatomic) NSArray * familyFeatureSecondaryDescriptions;
@property (readonly, nonatomic) NSString * familyFeatureSecondaryTitle;
@property (readonly, nonatomic) NSString * underageEligibilityAlertTitle;
@property (readonly, nonatomic) NSString * underageEligibilityAlertMessage;

- (void).cxx_destruct;
- (AAFamilyEligibilityResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (char)eligible;
- (int)eligibilityStatus;
- (char)hasPendingInvites;
- (NSArray *)familyFeaturePrimaryDescriptions;
- (NSArray *)familyFeatureSecondaryDescriptions;
- (NSString *)familyFeatureSecondaryTitle;
- (NSString *)underageEligibilityAlertTitle;
- (NSString *)underageEligibilityAlertMessage;

@end
