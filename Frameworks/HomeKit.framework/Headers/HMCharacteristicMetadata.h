/* Runtime dump - HMCharacteristicMetadata
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicMetadata : NSObject <NSSecureCoding, HMObjectMerge>
{
    NSNumber * _minimumValue;
    NSNumber * _maximumValue;
    NSNumber * _stepValue;
    NSNumber * _maxLength;
    NSString * _format;
    NSString * _units;
    NSString * _manufacturerDescription;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (retain, nonatomic) NSNumber * minimumValue;
@property (retain, nonatomic) NSNumber * maximumValue;
@property (retain, nonatomic) NSNumber * stepValue;
@property (retain, nonatomic) NSNumber * maxLength;
@property (copy, nonatomic) NSString * format;
@property (copy, nonatomic) NSString * units;
@property (copy, nonatomic) NSString * manufacturerDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * uniqueIdentifier;

+ (char)supportsSecureCoding;

- (HMCharacteristicMetadata *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMCharacteristicMetadata *)init;
- (NSString *)description;
- (NSNumber *)minimumValue;
- (NSNumber *)maximumValue;
- (void)setMinimumValue:(NSNumber *)arg0;
- (void)setMaximumValue:(NSNumber *)arg0;
- (NSUUID *)uniqueIdentifier;
- (void).cxx_destruct;
- (void)setStepValue:(NSNumber *)arg0;
- (NSNumber *)stepValue;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (NSString *)units;
- (void)setUnits:(NSString *)arg0;
- (NSString *)manufacturerDescription;
- (void)setManufacturerDescription:(NSString *)arg0;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;
- (NSNumber *)maxLength;
- (void)setMaxLength:(NSNumber *)arg0;

@end
