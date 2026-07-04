/* Runtime dump - FigMetadataItemCaptureConnectionConfiguration
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    struct opaqueCMFormatDescription * _formatDescription;
    struct OpaqueCMClock * _clock;
}

@property (retain, nonatomic) struct opaqueCMFormatDescription * formatDescription;
@property (retain, nonatomic) struct OpaqueCMClock * clock;

- (struct opaqueCMFormatDescription *)formatDescription;
- (void)setFormatDescription:(struct opaqueCMFormatDescription *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (FigMetadataItemCaptureConnectionConfiguration *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (FigMetadataItemCaptureConnectionConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (void)setClock:(struct OpaqueCMClock *)arg0;
- (struct OpaqueCMClock *)clock;

@end
