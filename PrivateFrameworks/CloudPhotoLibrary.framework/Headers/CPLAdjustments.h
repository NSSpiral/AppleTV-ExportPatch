/* Runtime dump - CPLAdjustments
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLAdjustments : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _adjustmentType;
    NSString * _adjustmentCompoundVersion;
    NSString * _adjustmentCreatorCode;
    unsigned int _adjustmentSourceType;
    NSData * _simpleAdjustmentData;
    NSString * _similarToOriginalAdjustmentsFingerprint;
    NSString * _otherAdjustmentsFingerprint;
    CPLResource * _adjustmentData;
    NSString * _creatorCode;
}

@property (copy, nonatomic) NSString * adjustmentType;
@property (copy, nonatomic) NSString * adjustmentCompoundVersion;
@property (copy, nonatomic) NSString * adjustmentCreatorCode;
@property (nonatomic) unsigned int adjustmentSourceType;
@property (retain, nonatomic) NSData * simpleAdjustmentData;
@property (copy, nonatomic) NSString * similarToOriginalAdjustmentsFingerprint;
@property (copy, nonatomic) NSString * otherAdjustmentsFingerprint;
@property (retain, nonatomic) CPLResource * adjustmentData;
@property (copy, nonatomic) NSString * creatorCode;

+ (char)supportsSecureCoding;

- (CPLAdjustments *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (CPLAdjustments *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)similarToOriginalAdjustmentsFingerprint;
- (void)setSimilarToOriginalAdjustmentsFingerprint:(NSString *)arg0;
- (void)setAdjustmentData:(CPLResource *)arg0;
- (NSString *)creatorCode;
- (void)setCreatorCode:(NSString *)arg0;
- (CPLResource *)adjustmentData;
- (NSString *)adjustmentType;
- (void)setAdjustmentType:(NSString *)arg0;
- (void)setAdjustmentCompoundVersion:(NSString *)arg0;
- (void)setAdjustmentSourceType:(unsigned int)arg0;
- (void)setAdjustmentCreatorCode:(NSString *)arg0;
- (void)setSimpleAdjustmentData:(NSData *)arg0;
- (NSString *)otherAdjustmentsFingerprint;
- (void)setOtherAdjustmentsFingerprint:(NSString *)arg0;
- (NSString *)adjustmentSimpleDescription;
- (NSData *)simpleAdjustmentData;
- (NSString *)adjustmentCompoundVersion;
- (NSString *)adjustmentCreatorCode;
- (unsigned int)adjustmentSourceType;

@end
