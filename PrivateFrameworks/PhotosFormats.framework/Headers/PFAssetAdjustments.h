/* Runtime dump - PFAssetAdjustments
 * Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFAssetAdjustments : NSObject <NSCopying>
{
    NSDictionary * _propertyListDictionary;
}

@property (readonly, copy, nonatomic) NSString * adjustmentFormatIdentifier;
@property (readonly, copy, nonatomic) NSString * adjustmentFormatVersion;
@property (readonly, nonatomic) NSData * adjustmentData;
@property (readonly, nonatomic) int adjustmentBaseVersion;
@property (retain, nonatomic) NSDictionary * propertyListDictionary;

- (NSString *)description;
- (char)writeToURL:(NSURL *)arg0 atomically:(char)arg1;
- (PFAssetAdjustments *)copyWithZone:(struct _NSZone *)arg0;
- (PFAssetAdjustments *)initWithURL:(NSString *)arg0;
- (void).cxx_destruct;
- (PFAssetAdjustments *)initWithPropertyListDictionary:(NSDictionary *)arg0;
- (int)adjustmentBaseVersion;
- (NSData *)adjustmentData;
- (NSString *)adjustmentFormatIdentifier;
- (NSString *)adjustmentFormatVersion;
- (NSDictionary *)propertyListDictionary;
- (PFAssetAdjustments *)initWithFormatIdentifier:(NSString *)arg0 formatVersion:(NSString *)arg1 data:(NSData *)arg2 baseVersion:(int)arg3;
- (void)setPropertyListDictionary:(NSDictionary *)arg0;

@end
