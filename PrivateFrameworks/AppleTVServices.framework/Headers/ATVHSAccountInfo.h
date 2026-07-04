/* Runtime dump - ATVHSAccountInfo
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSAccountInfo : NSObject <NSSecureCoding>
{
    NSString * _groupID;
    NSString * _accountName;
}

@property (copy, nonatomic) NSString * groupID;
@property (copy, nonatomic) NSString * accountName;

+ (char)supportsSecureCoding;

- (ATVHSAccountInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setAccountName:(NSString *)arg0;
- (NSString *)accountName;
- (NSString *)groupID;
- (void)setGroupID:(NSString *)arg0;

@end
