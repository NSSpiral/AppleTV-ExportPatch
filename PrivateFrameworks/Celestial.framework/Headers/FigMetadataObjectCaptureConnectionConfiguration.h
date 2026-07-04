/* Runtime dump - FigMetadataObjectCaptureConnectionConfiguration
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    NSArray * _metadataIdentifiers;
    struct CGRect _metadataRectOfInterest;
}

@property (copy, nonatomic) NSArray * metadataIdentifiers;
@property (nonatomic) struct CGRect metadataRectOfInterest;

- (void)setMetadataIdentifiers:(NSArray *)arg0;
- (void)setMetadataRectOfInterest:(struct CGRect)arg0;
- (NSDictionary *)copyXPCEncoding;
- (FigMetadataObjectCaptureConnectionConfiguration *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (FigMetadataObjectCaptureConnectionConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGRect)metadataRectOfInterest;
- (NSArray *)metadataIdentifiers;

@end
