/* Runtime dump - CTCellularPlan
 * Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding>
{
    NSString * _phoneNumber;
    CTCellularPlanProfile * _profile;
    CTCellularPlanSubscription * _subscription;
    CTCellularPlanExtProperties * _extendedProperties;
}

@property (readonly, nonatomic) NSData * profileId;
@property (readonly, nonatomic) char isSelected;
@property (readonly, nonatomic) NSString * iccid;
@property (readonly, nonatomic) char autoRenew;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double billingStartDate;
@property (readonly, nonatomic) double billingEndDate;
@property (readonly, nonatomic) NSString * carrierName;
@property (readonly, nonatomic) int planType;
@property (readonly, nonatomic) NSString * planDescription;
@property (readonly, nonatomic) int planStatus;
@property (readonly, nonatomic) int accountStatus;
@property (readonly, nonatomic) NSString * accountURL;
@property (readonly, nonatomic) NSArray * dataUsage;
@property (readonly, nonatomic) int status;
@property (retain, nonatomic) NSString * phoneNumber;
@property (retain, nonatomic) CTCellularPlanProfile * profile;
@property (retain, nonatomic) CTCellularPlanSubscription * subscription;
@property (retain, nonatomic) CTCellularPlanExtProperties * extendedProperties;

+ (char)supportsSecureCoding;

- (void)setPhoneNumber:(NSString *)arg0;
- (NSString *)carrierName;
- (int)accountStatus;
- (void)dealloc;
- (CTCellularPlan *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CTCellularPlan *)init;
- (NSString *)description;
- (double)timestamp;
- (CTCellularPlan *)copyWithZone:(struct _NSZone *)arg0;
- (char)isSelected;
- (NSString *)phoneNumber;
- (int)status;
- (NSData *)profileId;
- (CTCellularPlanExtProperties *)extendedProperties;
- (int)planStatus;
- (NSString *)iccid;
- (char)autoRenew;
- (double)billingStartDate;
- (double)billingEndDate;
- (int)planType;
- (NSString *)planDescription;
- (NSString *)accountURL;
- (NSArray *)dataUsage;
- (void)setExtendedProperties:(CTCellularPlanExtProperties *)arg0;
- (CTCellularPlan *)initWithProfile:(CTCellularPlanProfile *)arg0 subscription:(CTCellularPlanSubscription *)arg1;
- (void)setSubscription:(CTCellularPlanSubscription *)arg0;
- (CTCellularPlanSubscription *)subscription;
- (CTCellularPlanProfile *)profile;
- (void)setProfile:(CTCellularPlanProfile *)arg0;

@end
