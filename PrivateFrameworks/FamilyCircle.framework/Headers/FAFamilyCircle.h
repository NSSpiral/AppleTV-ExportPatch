/* Runtime dump - FAFamilyCircle
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyCircle : NSObject <NSSecureCoding>
{
    NSArray * _members;
    FAFamilyCloudKitProperties * _cloudKitProperties;
    NSDictionary * __serverResponse;
}

@property (readonly) NSArray * members;
@property (readonly) FAFamilyCloudKitProperties * cloudKitProperties;
@property (readonly) NSDictionary * _serverResponse;

+ (char)supportsSecureCoding;

- (FAFamilyCircle *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (FAFamilyCircle *)initWithServerResponse:(NSDictionary *)arg0;
- (FAFamilyCloudKitProperties *)cloudKitProperties;
- (NSDictionary *)_serverResponse;
- (NSArray *)members;

@end
