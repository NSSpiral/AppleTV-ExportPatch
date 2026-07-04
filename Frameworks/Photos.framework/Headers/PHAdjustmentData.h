/* Runtime dump - PHAdjustmentData
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAdjustmentData : NSObject <NSSecureCoding>
{
    NSString * _formatIdentifier;
    NSString * _formatVersion;
    NSData * _data;
    int _baseVersion;
}

@property (copy) NSString * formatIdentifier;
@property (copy) NSString * formatVersion;
@property (readonly) NSData * data;
@property (readonly) char opaque;
@property (nonatomic) int baseVersion;

+ (NSData *)opaqueAdjustmentData;
+ (int)videoRequestVersionFromAdjustmentBaseVersion:(int)arg0;
+ (int)adjustmentBaseVersionFromVideoRequestVersion:(int)arg0;
+ (int)adjustmentBaseVersionFromImageRequestVersion:(int)arg0;
+ (int)imageRequestVersionFromAdjustmentBaseVersion:(int)arg0;
+ (char)supportsSecureCoding;

- (void)setFormatIdentifier:(NSString *)arg0;
- (void)setFormatVersion:(NSString *)arg0;
- (PHAdjustmentData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSData *)data;
- (char)isOpaque;
- (void).cxx_destruct;
- (PHAdjustmentData *)initWithFormatIdentifier:(NSString *)arg0 formatVersion:(NSString *)arg1 data:(NSData *)arg2;
- (NSString *)formatVersion;
- (NSString *)formatIdentifier;
- (int)baseVersion;
- (void)setBaseVersion:(int)arg0;

@end
