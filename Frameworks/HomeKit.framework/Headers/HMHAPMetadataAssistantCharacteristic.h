/* Runtime dump - HMHAPMetadataAssistantCharacteristic
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHAPMetadataAssistantCharacteristic : NSObject <NSSecureCoding>
{
    char _supportsLocalization;
    NSString * _name;
    NSString * _readHAPCharacteristicName;
    NSString * _writeHAPCharacteristicName;
    NSString * _format;
    NSDictionary * _values;
    NSDictionary * _outValues;
    NSString * _readHAPCharacteristicType;
    NSString * _writeHAPCharacteristicType;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * readHAPCharacteristicName;
@property (retain, nonatomic) NSString * writeHAPCharacteristicName;
@property (retain, nonatomic) NSString * format;
@property (nonatomic) char supportsLocalization;
@property (retain, nonatomic) NSDictionary * values;
@property (retain, nonatomic) NSDictionary * outValues;
@property (retain, nonatomic) NSString * readHAPCharacteristicType;
@property (retain, nonatomic) NSString * writeHAPCharacteristicType;

+ (char)supportsSecureCoding;

- (HMHAPMetadataAssistantCharacteristic *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setValues:(NSDictionary *)arg0;
- (NSDictionary *)values;
- (void).cxx_destruct;
- (NSString *)readHAPCharacteristicName;
- (NSString *)writeHAPCharacteristicName;
- (char)supportsLocalization;
- (NSDictionary *)outValues;
- (void)setOutValues:(NSDictionary *)arg0;
- (void)setSupportsLocalization:(char)arg0;
- (void)setReadHAPCharacteristicName:(NSString *)arg0;
- (void)setWriteHAPCharacteristicName:(NSString *)arg0;
- (NSString *)readHAPCharacteristicType;
- (void)setReadHAPCharacteristicType:(NSString *)arg0;
- (NSString *)writeHAPCharacteristicType;
- (void)setWriteHAPCharacteristicType:(NSString *)arg0;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;

@end
