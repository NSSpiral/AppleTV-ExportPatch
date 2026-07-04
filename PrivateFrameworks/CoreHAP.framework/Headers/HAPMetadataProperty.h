/* Runtime dump - HAPMetadataProperty
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadataProperty : NSObject
{
    NSString * _propertyType;
    NSNumber * _bitPosition;
    NSString * _propertyDescription;
}

@property (retain, nonatomic) NSString * propertyType;
@property (retain, nonatomic) NSNumber * bitPosition;
@property (retain, nonatomic) NSString * propertyDescription;

+ (HAPMetadataProperty *)init:(id)arg0 withDictionary:(NSDictionary *)arg1;

- (NSString *)description;
- (void).cxx_destruct;
- (NSDictionary *)generateDictionary;
- (void)dump;
- (HAPMetadataProperty *)initWithType:(NSString *)arg0 bitPosition:(NSNumber *)arg1 description:(NSString *)arg2;
- (NSNumber *)bitPosition;
- (NSString *)propertyDescription;
- (NSString *)propertyType;
- (void)setPropertyType:(NSString *)arg0;
- (void)setBitPosition:(NSNumber *)arg0;
- (void)setPropertyDescription:(NSString *)arg0;

@end
