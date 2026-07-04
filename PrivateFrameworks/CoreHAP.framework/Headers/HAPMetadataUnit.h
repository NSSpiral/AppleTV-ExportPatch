/* Runtime dump - HAPMetadataUnit
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadataUnit : NSObject
{
    NSString * _name;
    NSString * _unitDescription;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * unitDescription;

+ (HAPMetadataUnit *)init:(id)arg0 withDictionary:(NSDictionary *)arg1;

- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (HAPMetadataUnit *)initWithName:(NSString *)arg0 description:(NSString *)arg1;
- (NSString *)unitDescription;
- (NSDictionary *)generateDictionary;
- (void)dump;
- (void)setUnitDescription:(NSString *)arg0;

@end
