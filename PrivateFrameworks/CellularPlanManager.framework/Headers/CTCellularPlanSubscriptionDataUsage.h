/* Runtime dump - CTCellularPlanSubscriptionDataUsage
 * Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanSubscriptionDataUsage : NSObject <NSCopying, NSSecureCoding>
{
    NSString * _dataCategory;
    double _dataUsed;
    double _dataCapacity;
}

@property (readonly, nonatomic) double dataUsed;
@property (readonly, nonatomic) double dataCapacity;
@property (readonly, nonatomic) NSString * dataCategory;

+ (char)supportsSecureCoding;

- (NSString *)dataCategory;
- (void)dealloc;
- (CTCellularPlanSubscriptionDataUsage *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CTCellularPlanSubscriptionDataUsage *)copyWithZone:(struct _NSZone *)arg0;
- (CTCellularPlanSubscriptionDataUsage *)initWithCategory:(NSString *)arg0 andDataUsed:(int)arg1 andDataCapacity:(int)arg2;
- (double)dataUsed;
- (double)dataCapacity;

@end
