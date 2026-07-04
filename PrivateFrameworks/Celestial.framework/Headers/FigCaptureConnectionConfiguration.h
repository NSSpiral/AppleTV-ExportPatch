/* Runtime dump - FigCaptureConnectionConfiguration
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSString * _connectionID;
    unsigned long _mediaType;
    FigCaptureSourceConfiguration * _sourceConfiguration;
    FigCaptureSinkConfiguration * _sinkConfiguration;
    char _enabled;
}

@property (copy, nonatomic) NSString * connectionID;
@property (nonatomic) unsigned long mediaType;
@property (retain, nonatomic) FigCaptureSourceConfiguration * sourceConfiguration;
@property (retain, nonatomic) FigCaptureSinkConfiguration * sinkConfiguration;
@property (nonatomic) char enabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (void)setConnectionID:(NSString *)arg0;
- (void)setSinkConfiguration:(FigCaptureSinkConfiguration *)arg0;
- (FigCaptureSourceConfiguration *)sourceConfiguration;
- (void)setSourceConfiguration:(FigCaptureSourceConfiguration *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (FigCaptureConnectionConfiguration *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (FigCaptureConnectionConfiguration *)init;
- (char)isEqual:(NSObject *)arg0;
- (void)setEnabled:(char)arg0;
- (FigCaptureConnectionConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (char)enabled;
- (FigCaptureSinkConfiguration *)sinkConfiguration;
- (NSString *)connectionID;
- (unsigned long)mediaType;
- (void)setMediaType:(unsigned long)arg0;

@end
