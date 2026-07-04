/* Runtime dump - BWMetadataFormat
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMetadataFormat : BWFormat
{
    struct opaqueCMFormatDescription * _desc;
}

+ (void)initialize;
+ (NSString *)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription *)arg0;

- (struct opaqueCMFormatDescription *)formatDescription;
- (void)dealloc;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)_initWithMetadataFormat:(struct opaqueCMFormatDescription *)arg0;
- (unsigned long)mediaType;

@end
