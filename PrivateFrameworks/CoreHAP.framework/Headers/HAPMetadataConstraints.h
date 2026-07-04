/* Runtime dump - HAPMetadataConstraints
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadataConstraints : NSObject <NSCopying>
{
    NSNumber * _minimumValue;
    NSNumber * _maximumValue;
    NSNumber * _stepValue;
    NSNumber * _minLength;
    NSNumber * _maxLength;
}

@property (retain, nonatomic) NSNumber * minimumValue;
@property (retain, nonatomic) NSNumber * maximumValue;
@property (retain, nonatomic) NSNumber * stepValue;
@property (retain, nonatomic) NSNumber * minLength;
@property (retain, nonatomic) NSNumber * maxLength;

- (NSString *)description;
- (HAPMetadataConstraints *)copyWithZone:(struct _NSZone *)arg0;
- (NSNumber *)minimumValue;
- (NSNumber *)maximumValue;
- (void)setMinimumValue:(NSNumber *)arg0;
- (void)setMaximumValue:(NSNumber *)arg0;
- (void).cxx_destruct;
- (void)setStepValue:(NSNumber *)arg0;
- (NSNumber *)stepValue;
- (void)setMinLength:(NSNumber *)arg0;
- (NSNumber *)minLength;
- (char)isEqualToMetadataConstraints:(NSArray *)arg0;
- (NSNumber *)maxLength;
- (void)setMaxLength:(NSNumber *)arg0;

@end
