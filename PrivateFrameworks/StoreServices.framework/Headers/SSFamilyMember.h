/* Runtime dump - SSFamilyMember
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSFamilyMember : NSObject <SSXPCCoding>
{
    NSString * _firstName;
    NSString * _iCloudAccountName;
    NSNumber * _iCloudIdentifier;
    NSNumber * _iTunesIdentifier;
    NSString * _lastName;
    char _me;
    char _sharingPurchases;
}

@property (retain, nonatomic) NSString * iCloudAccountName;
@property (retain, nonatomic) NSNumber * iCloudIdentifier;
@property (retain, nonatomic) NSNumber * iTunesIdentifier;
@property (retain, nonatomic) NSString * firstName;
@property (retain, nonatomic) NSString * lastName;
@property (nonatomic) char me;
@property (nonatomic) char sharingPurchases;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSFamilyMember *)initWithXPCEncoding:(NSString *)arg0;
- (NSString *)description;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (char)isMe;
- (NSNumber *)iTunesIdentifier;
- (SSFamilyMember *)initWithCacheRepresentation:(NSDictionary *)arg0;
- (NSDictionary *)newCacheRepresentation;
- (NSString *)iCloudAccountName;
- (void)setICloudAccountName:(NSString *)arg0;
- (NSNumber *)iCloudIdentifier;
- (void)setICloudIdentifier:(NSNumber *)arg0;
- (void)setITunesIdentifier:(NSNumber *)arg0;
- (void)setMe:(char)arg0;
- (char)isSharingPurchases;
- (void)setSharingPurchases:(char)arg0;

@end
