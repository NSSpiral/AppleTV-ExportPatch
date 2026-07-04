/* Runtime dump - CTCellularPlanProfile
 * Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding>
{
    char _isSelected;
    char _isBootstrap;
    NSData * _profileId;
    NSString * _iccid;
}

@property (nonatomic) char isSelected;
@property (nonatomic) char isBootstrap;
@property (copy, nonatomic) NSData * profileId;
@property (copy, nonatomic) NSString * iccid;

+ (char)supportsSecureCoding;

- (CTCellularPlanProfile *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (CTCellularPlanProfile *)copyWithZone:(struct _NSZone *)arg0;
- (char)isSelected;
- (void)setIsSelected:(char)arg0;
- (NSData *)profileId;
- (NSString *)iccid;
- (void)setProfileId:(NSData *)arg0;
- (void)setIccid:(NSString *)arg0;
- (void)setIsBootstrap:(char)arg0;
- (char)isBootstrap;
- (CTCellularPlanProfile *)initWithProfileId:(NSData *)arg0 iccid:(NSString *)arg1 selected:(char)arg2 bootstrap:(char)arg3;

@end
