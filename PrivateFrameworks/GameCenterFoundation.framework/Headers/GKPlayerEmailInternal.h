/* Runtime dump - GKPlayerEmailInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKPlayerEmailInternal : GKInternalRepresentation
{
    NSString * _address;
    NSString * _addressSHA1;
    NSString * _addressPrefix;
    char _verified;
}

@property (retain, nonatomic) NSString * address;
@property (retain, nonatomic) NSString * addressSHA1;
@property (retain, nonatomic) NSString * addressPrefix;
@property (nonatomic) char verified;

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setVerified:(char)arg0;
- (NSString *)addressSHA1;
- (void)setAddressSHA1:(NSString *)arg0;
- (NSString *)addressPrefix;
- (void)setAddressPrefix:(NSString *)arg0;
- (char)verified;
- (void)setAddress:(NSString *)arg0;
- (NSString *)address;

@end
