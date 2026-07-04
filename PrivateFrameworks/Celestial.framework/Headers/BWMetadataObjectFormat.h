/* Runtime dump - BWMetadataObjectFormat
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMetadataObjectFormat : BWFormat
{
    NSArray * _metadataIdentifiers;
}

+ (void)initialize;
+ (BWMetadataObjectFormat *)formatWithMetadataIdentifiers:(NSArray *)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSString *)debugDescription;
- (BWMetadataObjectFormat *)_initWithMetadataIdentifiers:(NSArray *)arg0;
- (unsigned long)mediaType;

@end
