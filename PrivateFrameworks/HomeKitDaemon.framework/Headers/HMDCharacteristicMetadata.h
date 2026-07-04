/* Runtime dump - HMDCharacteristicMetadata
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicMetadata : NSObject <NSSecureCoding>
{
    NSNumber * _minimumValue;
    NSNumber * _maximumValue;
    NSNumber * _stepValue;
    NSNumber * _maxLength;
    NSString * _format;
    NSString * _units;
    NSString * _manufacturerDescription;
}

@property (readonly, nonatomic) NSNumber * minimumValue;
@property (readonly, nonatomic) NSNumber * maximumValue;
@property (readonly, nonatomic) NSNumber * stepValue;
@property (readonly, nonatomic) NSNumber * maxLength;
@property (readonly, copy, nonatomic) NSString * format;
@property (readonly, copy, nonatomic) NSString * units;
@property (readonly, copy, nonatomic) NSString * manufacturerDescription;

+ (char)supportsSecureCoding;
+ (char)isValidMetadata:(NSDictionary *)arg0;

- (HMDCharacteristicMetadata *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSNumber *)minimumValue;
- (NSNumber *)maximumValue;
- (void).cxx_destruct;
- (NSNumber *)stepValue;
- (NSString *)units;
- (NSString *)manufacturerDescription;
- (void)configureWithCharacteristicMetadata:(NSDictionary *)arg0;
- (HMDCharacteristicMetadata *)initWithCharacteristicMetadata:(NSDictionary *)arg0;
- (NSString *)format;
- (NSNumber *)maxLength;

@end
