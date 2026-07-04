/* Runtime dump - HAPMetadataService
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadataService : NSObject
{
    char _allowAssociatedService;
    NSString * _name;
    NSString * _svcDescription;
    NSString * _uuidStr;
    NSString * _btleuuidStr;
    NSArray * _mandatoryCharacteristics;
    NSArray * _optionalCharacteristics;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * svcDescription;
@property (retain, nonatomic) NSString * uuidStr;
@property (retain, nonatomic) NSString * btleuuidStr;
@property (retain, nonatomic) NSArray * mandatoryCharacteristics;
@property (retain, nonatomic) NSArray * optionalCharacteristics;
@property (nonatomic) char allowAssociatedService;

- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (void)dump;
- (NSString *)uuidStr;
- (NSDictionary *)generateDictionary:(NSDictionary *)arg0;
- (void)setUuidStr:(NSString *)arg0;
- (NSString *)svcDescription;
- (NSString *)btleuuidStr;
- (NSArray *)mandatoryCharacteristics;
- (NSArray *)optionalCharacteristics;
- (char)allowAssociatedService;
- (HAPMetadataService *)initWithName:(NSString *)arg0 uuid:(NSUUID *)arg1 description:(NSString *)arg2 mandatoryCharacteristics:(NSArray *)arg3;
- (void)setSvcDescription:(NSString *)arg0;
- (void)setBtleuuidStr:(NSString *)arg0;
- (void)setMandatoryCharacteristics:(NSArray *)arg0;
- (void)setOptionalCharacteristics:(NSArray *)arg0;
- (void)setAllowAssociatedService:(char)arg0;

@end
