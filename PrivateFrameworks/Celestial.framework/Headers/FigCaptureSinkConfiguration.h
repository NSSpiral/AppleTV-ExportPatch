/* Runtime dump - FigCaptureSinkConfiguration
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSString * _sinkID;
    int _sinkType;
    char _videoDataDiscardsLateVideoFrames;
    char _videoDataDerivedFromPreview;
}

@property (copy, nonatomic) NSString * sinkID;
@property (nonatomic) int sinkType;
@property (nonatomic) char videoDataDiscardsLateVideoFrames;
@property (nonatomic) char videoDataDerivedFromPreview;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (NSObject *)stringForSinkType:(int)arg0;
+ (int)sinkTypeForString:(NSString *)arg0;

- (NSString *)sinkID;
- (void)setSinkType:(int)arg0;
- (void)setVideoDataDiscardsLateVideoFrames:(char)arg0;
- (void)setVideoDataDerivedFromPreview:(char)arg0;
- (void)setSinkID:(NSString *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (FigCaptureSinkConfiguration *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (FigCaptureSinkConfiguration *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (FigCaptureSinkConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (char)videoDataDerivedFromPreview;
- (char)videoDataDiscardsLateVideoFrames;
- (int)sinkType;

@end
