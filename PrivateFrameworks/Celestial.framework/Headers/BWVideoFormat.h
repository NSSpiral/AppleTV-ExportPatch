/* Runtime dump - BWVideoFormat
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoFormat : BWFormat
{
    unsigned long _width;
    unsigned long _height;
    unsigned long _pixelFormat;
    unsigned long _bytesPerRowAlignment;
    unsigned long _planeAlignment;
    unsigned long _extendedWidth;
    unsigned long _extendedHeight;
    unsigned int _cacheMode;
    char _prewireBuffers;
    NSDictionary * _pixelBufferAttributes;
}

@property (nonatomic) unsigned long width;
@property (nonatomic) unsigned long height;
@property (nonatomic) unsigned long pixelFormat;
@property (nonatomic) unsigned long bytesPerRowAlignment;
@property (nonatomic) unsigned long planeAlignment;
@property (nonatomic) unsigned long extendedWidth;
@property (nonatomic) unsigned long extendedHeight;
@property (nonatomic) unsigned int cacheMode;
@property (nonatomic) char prewireBuffers;
@property (readonly, nonatomic) NSDictionary * pixelBufferAttributes;

+ (void)initialize;
+ (BWVideoFormat *)formatByResolvingRequirements:(id)arg0;
+ (BWVideoFormat *)_formatRequirementsByResolvingFormatRequirements:(id)arg0 withFormatRequirements:(BWFormatRequirements *)arg1;

- (struct opaqueCMFormatDescription *)formatDescription;
- (NSDictionary *)pixelBufferAttributes;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)debugDescription;
- (unsigned long)width;
- (unsigned long)height;
- (unsigned long)extendedHeight;
- (void)setExtendedHeight:(unsigned long)arg0;
- (void)setWidth:(unsigned long)arg0;
- (void)setHeight:(unsigned long)arg0;
- (unsigned long)pixelFormat;
- (void)setPrewireBuffers:(char)arg0;
- (char)prewireBuffers;
- (unsigned int)cacheMode;
- (void)setBytesPerRowAlignment:(unsigned long)arg0;
- (void)setPlaneAlignment:(unsigned long)arg0;
- (unsigned long)bytesPerRowAlignment;
- (unsigned long)planeAlignment;
- (NSDictionary *)_initWithResolvedPixelBufferAttributes:(NSDictionary *)arg0;
- (unsigned long)extendedWidth;
- (void)setPixelFormat:(unsigned long)arg0;
- (void)setExtendedWidth:(unsigned long)arg0;
- (void)setCacheMode:(unsigned int)arg0;
- (unsigned long)mediaType;

@end
