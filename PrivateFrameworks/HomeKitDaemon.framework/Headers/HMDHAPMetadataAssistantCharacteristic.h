/* Runtime dump - HMDHAPMetadataAssistantCharacteristic
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataAssistantCharacteristic : NSObject <NSSecureCoding>
{
    char _supportsLocalization;
    NSString * _name;
    NSString * _readHAPCharacteristicName;
    NSString * _writeHAPCharacteristicName;
    NSString * _format;
    NSDictionary * _values;
    NSDictionary * _outValues;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * readHAPCharacteristicName;
@property (retain, nonatomic) NSString * writeHAPCharacteristicName;
@property (retain, nonatomic) NSString * format;
@property (nonatomic) char supportsLocalization;
@property (retain, nonatomic) NSDictionary * values;
@property (retain, nonatomic) NSDictionary * outValues;

+ (char)supportsSecureCoding;

- (HMDHAPMetadataAssistantCharacteristic *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMDHAPMetadataAssistantCharacteristic *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setValues:(NSDictionary *)arg0;
- (NSDictionary *)values;
- (void).cxx_destruct;
- (NSDictionary *)generateDictionary;
- (void)dump;
- (NSString *)readHAPCharacteristicName;
- (NSString *)writeHAPCharacteristicName;
- (char)supportsLocalization;
- (NSDictionary *)outValues;
- (HMDHAPMetadataAssistantCharacteristic *)initWithName:(NSString *)arg0 readHAPCharacteristic:(id)arg1 writeHAPCharacteristic:(id)arg2 format:(NSString *)arg3;
- (void)setOutValues:(NSDictionary *)arg0;
- (void)setSupportsLocalization:(char)arg0;
- (void)setReadHAPCharacteristicName:(NSString *)arg0;
- (void)setWriteHAPCharacteristicName:(NSString *)arg0;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;

@end
