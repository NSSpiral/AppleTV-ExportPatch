/* Runtime dump - ATVHSRentalInfo
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSRentalInfo : NSObject <NSSecureCoding>
{
    NSString * _name;
    NSNumber * _rentalKeyID;
    NSNumber * _userID;
    NSNumber * _daapPersistentItemID;
}

@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) NSNumber * rentalKeyID;
@property (retain, nonatomic) NSNumber * userID;
@property (retain, nonatomic) NSNumber * daapPersistentItemID;

+ (char)supportsSecureCoding;
+ (NSObject *)rentalInfoFromDataItem:(NSObject *)arg0;

- (ATVHSRentalInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (NSNumber *)rentalKeyID;
- (NSNumber *)daapPersistentItemID;
- (void)setRentalKeyID:(NSNumber *)arg0;
- (void)setDAAPPersistentItemID:(NSObject *)arg0;
- (char)_isEqualToRentalItem:(NSObject *)arg0;
- (NSNumber *)userID;
- (void)setUserID:(NSNumber *)arg0;

@end
