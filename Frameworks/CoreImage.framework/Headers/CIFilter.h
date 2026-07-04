/* Runtime dump - CIFilter
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFilter : NSObject <NSCoding, NSCopying>
{
    id _priv;
}

@property (readonly, nonatomic) CIImage * outputImage;

+ (CIFilter *)_pl_propertyArrayFromFilters:(id)arg0 inputImageExtent:(struct CGRect)arg1;
+ (NSDictionary *)_pl_filterArrayFromProperties:(NSDictionary *)arg0 inputImageExtent:(struct CGRect)arg1;
+ (NSArray *)customAttributes;
+ (NSArray *)filterNamesInCategories:(id)arg0;
+ (NSString *)filterWithName:(NSString *)arg0 keysAndValues:(NSArray *)arg1;
+ (NSString *)filterWithName:(NSString *)arg0 withInputParameters:(NSDictionary *)arg1;
+ (NSString *)filterNamesInCategory:(NSString *)arg0;
+ (CIFilter *)serializedXMPFromFilters:(id)arg0 inputImageExtent:(struct CGRect)arg1;
+ (CIFilter *)filterArrayFromSerializedXMP:(id)arg0 inputImageExtent:(struct CGRect)arg1 error:(struct CGSize)arg2;
+ (NSString *)filterWithString:(NSString *)arg0;
+ (struct CGImageMetadata *)_imageMetadataFromFilters:(id)arg0 inputImageExtent:(struct CGRect)arg1;
+ (NSDictionary *)_filterArrayFromImageMetadata:(struct CGImageMetadata *)arg0 inputImageExtent:(struct CGRect)arg1;
+ (NSDictionary *)_filterArrayFromProperties:(NSDictionary *)arg0;
+ (NSString *)filterWithName:(NSString *)arg0;
+ (CIFilter *)_propertyArrayFromFilters:(id)arg0 inputImageExtent:(struct CGRect)arg1;
+ (NSDictionary *)_filterArrayFromProperties:(NSDictionary *)arg0 inputImageExtent:(struct CGRect)arg1;

- (char)_isIdentity;
- (NSArray *)inputKeys;
- (NSString *)_filterClassDescription;
- (NSArray *)outputKeys;
- (NSObject *)_copyFilterWithZone:(struct _NSZone *)arg0;
- (NSString *)_serializedXMPString;
- (id)apply:(id /* block */)arg0 arguments:(NSDictionary *)arg1 options:(NSDictionary *)arg2;
- (id)apply:(id /* block */)arg0;
- (void)setDefaults;
- (void)dealloc;
- (CIFilter *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (CIFilter *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (CIFilter *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)attributes;
- (char)_filterClassInCategory:(NSString *)arg0;
- (CIImage *)outputImage;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
