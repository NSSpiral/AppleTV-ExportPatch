/* Runtime dump - FAFamilyCloudKitProperties
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyCloudKitProperties : NSObject <NSSecureCoding>
{
    NSDictionary * _dictionary;
}

@property (readonly, copy, nonatomic) NSString * bundleID;
@property (readonly, copy, nonatomic) NSString * participantID;
@property (readonly, copy, nonatomic) NSString * shareID;
@property (readonly, copy, nonatomic) NSString * zoneID;
@property (readonly, copy, nonatomic) NSDictionary * dictionary;

+ (char)supportsSecureCoding;

- (FAFamilyCloudKitProperties *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSDictionary *)dictionary;
- (void).cxx_destruct;
- (NSString *)zoneID;
- (NSString *)shareID;
- (NSString *)bundleID;
- (NSString *)participantID;
- (FAFamilyCloudKitProperties *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end
