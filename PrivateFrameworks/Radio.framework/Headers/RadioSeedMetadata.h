/* Runtime dump - RadioSeedMetadata
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSeedMetadata : NSObject <NSCopying, NSMutableCopying>
{
    NSString * _seedDescription;
    NSString * _subtitle;
    NSString * _title;
}

@property (readonly, copy, nonatomic) NSString * seedDescription;
@property (readonly, copy, nonatomic) NSString * subtitle;
@property (readonly, copy, nonatomic) NSString * title;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)title;
- (RadioSeedMetadata *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)subtitle;
- (RadioSeedMetadata *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (RadioSeedMetadata *)initWithSeedMetadataDictionary:(RadioSeedMetadata *)arg0;
- (NSString *)seedDescription;

@end
