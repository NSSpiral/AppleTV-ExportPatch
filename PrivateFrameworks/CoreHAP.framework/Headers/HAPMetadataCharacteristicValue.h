/* Runtime dump - HAPMetadataCharacteristicValue
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadataCharacteristicValue : NSObject
{
    NSNumber * _minValue;
    NSNumber * _maxValue;
    NSNumber * _stepValue;
    NSNumber * _minLength;
    NSNumber * _maxLength;
}

@property (retain, nonatomic) NSNumber * minValue;
@property (retain, nonatomic) NSNumber * maxValue;
@property (retain, nonatomic) NSNumber * stepValue;
@property (retain, nonatomic) NSNumber * minLength;
@property (retain, nonatomic) NSNumber * maxLength;

+ (HAPMetadataCharacteristicValue *)initWithDictionary:(NSDictionary *)arg0;

- (NSString *)description;
- (NSNumber *)minValue;
- (void)setMaxValue:(NSNumber *)arg0;
- (void)setMinValue:(NSNumber *)arg0;
- (void).cxx_destruct;
- (void)setStepValue:(NSNumber *)arg0;
- (NSNumber *)stepValue;
- (void)setMinLength:(NSNumber *)arg0;
- (NSNumber *)minLength;
- (NSDictionary *)generateDictionary;
- (void)dump;
- (HAPMetadataCharacteristicValue *)initWithMinLength:(NSNumber *)arg0 maxLength:(NSNumber *)arg1;
- (HAPMetadataCharacteristicValue *)initWithMinValue:(NSNumber *)arg0 maxValue:(NSNumber *)arg1 stepValue:(NSNumber *)arg2;
- (NSNumber *)maxValue;
- (NSNumber *)maxLength;
- (void)setMaxLength:(NSNumber *)arg0;

@end
