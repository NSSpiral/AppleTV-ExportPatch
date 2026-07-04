/* Runtime dump - CTCellularPlanSubscription
 * Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanSubscription : NSObject <NSCopying, NSSecureCoding>
{
    char _autoRenew;
    NSString * _iccid;
    NSString * _carrierName;
    int _planType;
    NSString * _planDescription;
    int _planStatus;
    int _accountStatus;
    NSString * _accountURL;
    NSArray * _homeCountryList;
    NSArray * _dataUsage;
    int _subscriptionResult;
    double _billingStartDate;
    double _billingEndDate;
    double _timestamp;
}

@property (readonly, nonatomic) NSString * iccid;
@property (readonly, nonatomic) char autoRenew;
@property (readonly, nonatomic) double billingStartDate;
@property (readonly, nonatomic) double billingEndDate;
@property (readonly, nonatomic) NSString * carrierName;
@property (readonly, nonatomic) int planType;
@property (readonly, nonatomic) NSString * planDescription;
@property (readonly, nonatomic) int planStatus;
@property (readonly, nonatomic) int accountStatus;
@property (readonly, nonatomic) NSString * accountURL;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSArray * homeCountryList;
@property (readonly, nonatomic) NSArray * dataUsage;
@property (nonatomic) int subscriptionResult;

+ (char)supportsSecureCoding;

- (NSString *)carrierName;
- (int)accountStatus;
- (void)dealloc;
- (CTCellularPlanSubscription *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (double)timestamp;
- (CTCellularPlanSubscription *)copyWithZone:(struct _NSZone *)arg0;
- (CTCellularPlanSubscription *)initWithIccid:(NSString *)arg0 subscriptionResult:(int)arg1 autoRenew:(char)arg2 billingStartDate:(double)arg3 billingEndDate:(double)arg4 carrierName:(NSString *)arg5 planType:(int)arg6 planDescription:(NSString *)arg7 planStatus:(int)arg8 accountStatus:(int)arg9 accountURL:(NSString *)arg10 timestamp:(double)arg11 homeCountryList:(NSArray *)arg12 dataUsage:(NSArray *)arg13;
- (int)planStatus;
- (NSString *)iccid;
- (char)autoRenew;
- (double)billingStartDate;
- (double)billingEndDate;
- (int)planType;
- (NSString *)planDescription;
- (NSString *)accountURL;
- (NSArray *)dataUsage;
- (int)subscriptionResult;
- (char)isEqualOrNewerThanSubscription:(NSObject *)arg0;
- (NSArray *)homeCountryList;
- (void)setSubscriptionResult:(int)arg0;

@end
