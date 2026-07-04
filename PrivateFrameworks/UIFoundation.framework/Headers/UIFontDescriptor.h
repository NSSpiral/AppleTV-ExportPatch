/* Runtime dump - UIFontDescriptor
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface UIFontDescriptor : NSObject <NSCopying, NSCoding>
{
    NSMutableDictionary * _attributes;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
}

@property (readonly, nonatomic) NSString * postscriptName;
@property (readonly, nonatomic) float pointSize;
@property (readonly, nonatomic) struct CGAffineTransform matrix;
@property (readonly, nonatomic) unsigned int symbolicTraits;

+ (char)supportsSecureCoding;
+ (UIFontDescriptor *)defaultFontDescriptorWithTextStyle:(NSObject *)arg0;
+ (UIFontDescriptor *)defaultFontDescriptorWithTextStyle:(NSObject *)arg0 addingSymbolicTraits:(unsigned int)arg1 options:(unsigned int)arg2;
+ (NSObject *)preferredFontDescriptorWithTextStyle:(NSObject *)arg0 addingSymbolicTraits:(unsigned int)arg1 options:(unsigned int)arg2;
+ (NSObject *)preferredFontDescriptorWithTextStyle:(NSObject *)arg0;
+ (UIFontDescriptor *)fontDescriptorWithFontAttributes:(NSDictionary *)arg0;
+ (NSDictionary *)_createMungledDictionary:(NSDictionary *)arg0;
+ (UIFontDescriptor *)fontDescriptorWithName:(NSString *)arg0 size:(float)arg1;
+ (UIFontDescriptor *)fontDescriptorWithName:(NSString *)arg0 matrix:(struct CGAffineTransform)arg1;

- (NSDictionary *)fontDescriptorByAddingAttributes:(NSDictionary *)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (UIFontDescriptor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIFontDescriptor *)init;
- (NSString *)description;
- (UIFontDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (float)pointSize;
- (NSArray *)fontDescriptorWithSymbolicTraits:(unsigned int)arg0;
- (unsigned int)symbolicTraits;
- (NSDictionary *)_attributes;
- (NSDictionary *)_initWithFontAttributes:(NSDictionary *)arg0 options:(unsigned int)arg1;
- (UIFontDescriptor *)initWithFontAttributes:(NSDictionary *)arg0;
- (NSDictionary *)fontAttributes;
- (NSString *)postscriptName;
- (NSArray *)matchingFontDescriptorsWithMandatoryKeys:(NSArray *)arg0;
- (NSArray *)matchingFontDescriptorWithMandatoryKeys:(NSArray *)arg0;
- (NSObject *)fontDescriptorWithSize:(float)arg0;
- (id)fontDescriptorWithMatrix:(struct CGAffineTransform)arg0;
- (id)fontDescriptorWithFace:(id)arg0;
- (id)fontDescriptorWithFamily:(TCFontFamily *)arg0;
- (NSString *)_visibleName;
- (struct CGAffineTransform)matrix;

@end
