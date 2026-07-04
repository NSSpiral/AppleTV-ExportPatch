/* Runtime dump - UICTFontDescriptor
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface UICTFontDescriptor : UIFontDescriptor

+ (NSDictionary *)fontDescriptorWithFontAttributes:(NSDictionary *)arg0;
+ (NSString *)fontDescriptorWithName:(NSString *)arg0 size:(float)arg1;
+ (NSString *)fontDescriptorWithName:(NSString *)arg0 matrix:(struct CGAffineTransform)arg1;

- (unsigned long)_cfTypeID;
- (NSDictionary *)fontDescriptorByAddingAttributes:(NSDictionary *)arg0;
- (UICTFontDescriptor *)retain;
- (void)release;
- (NSString *)objectForKey:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (UICTFontDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (char)allowsWeakReference;
- (char)retainWeakReference;
- (NSDictionary *)fontAttributes;
- (NSArray *)matchingFontDescriptorsWithMandatoryKeys:(NSArray *)arg0;
- (NSArray *)matchingFontDescriptorWithMandatoryKeys:(NSArray *)arg0;
- (void)finalize;

@end
