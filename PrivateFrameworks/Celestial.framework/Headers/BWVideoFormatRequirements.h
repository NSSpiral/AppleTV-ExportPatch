/* Runtime dump - BWVideoFormatRequirements
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoFormatRequirements : BWFormatRequirements
{
    unsigned long _width;
    unsigned long _height;
    NSArray * _supportedPixelFormats;
    unsigned long _bytesPerRowAlignment;
    unsigned long _planeAlignment;
    unsigned long _widthAlignment;
    unsigned long _heightAlignment;
    NSArray * _supportedCacheModes;
    char _prewireBuffers;
}

@property (nonatomic) unsigned long width;
@property (nonatomic) unsigned long height;
@property (copy, nonatomic) NSArray * supportedPixelFormats;
@property (nonatomic) unsigned long bytesPerRowAlignment;
@property (nonatomic) unsigned long planeAlignment;
@property (nonatomic) unsigned long widthAlignment;
@property (nonatomic) unsigned long heightAlignment;
@property (copy, nonatomic) NSArray * supportedCacheModes;
@property (readonly, nonatomic) NSDictionary * pixelBufferAttributes;
@property (nonatomic) char prewireBuffers;

+ (void)initialize;
+ (BWVideoFormatRequirements *)cacheModesForOptimizedHWAccess;
+ (BWVideoFormatRequirements *)cacheModesForCacheProfile:(int)arg0;
+ (BWVideoFormatRequirements *)cacheModesForOptimizedCPUAccess;
+ (BWVideoFormatRequirements *)displayPipeRequirements;

- (NSDictionary *)pixelBufferAttributes;
- (void)dealloc;
- (BWVideoFormatRequirements *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (unsigned long)width;
- (unsigned long)height;
- (void)setWidth:(unsigned long)arg0;
- (void)setHeight:(unsigned long)arg0;
- (void)setSupportedPixelFormats:(NSArray *)arg0;
- (void)setSupportedCacheModes:(NSArray *)arg0;
- (void)setPrewireBuffers:(char)arg0;
- (char)prewireBuffers;
- (Class)formatClass;
- (void)setBytesPerRowAlignment:(unsigned long)arg0;
- (void)setPlaneAlignment:(unsigned long)arg0;
- (NSArray *)supportedPixelFormats;
- (unsigned long)bytesPerRowAlignment;
- (unsigned long)planeAlignment;
- (unsigned long)widthAlignment;
- (void)setWidthAlignment:(unsigned long)arg0;
- (unsigned long)heightAlignment;
- (void)setHeightAlignment:(unsigned long)arg0;
- (NSArray *)supportedCacheModes;
- (unsigned long)mediaType;
- (BWVideoFormatRequirements *)initWithPixelBufferAttributes:(NSDictionary *)arg0;

@end
