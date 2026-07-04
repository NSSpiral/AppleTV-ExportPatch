/* Runtime dump - VideoAttributes
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VideoAttributes : NSObject <NSCopying, NSCoding>
{
    struct CGSize ratio;
    int orientation;
    int camera;
    char cameraSwitching;
    struct CGRect contentsRect;
}

@property (nonatomic) struct CGSize ratio;
@property (nonatomic) int orientation;
@property (nonatomic) int camera;
@property (nonatomic) char cameraSwitching;
@property (nonatomic) struct CGRect contentsRect;

+ (VideoAttributes *)videoAttributesWithVideoAttributes:(NSMutableArray *)arg0;

- (VideoAttributes *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (VideoAttributes *)init;
- (NSString *)description;
- (int)orientation;
- (VideoAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (void)setContentsRect:(struct CGRect)arg0;
- (void)setOrientation:(int)arg0;
- (struct CGRect)contentsRect;
- (VideoAttributes *)initWithEncodedDictionary:(NSDictionary *)arg0;
- (void)decodeFromNSDictionary:(NSDictionary *)arg0;
- (NSDictionary *)encodeToNewNSDictionary;
- (struct CGSize)ratio;
- (void)setRatio:(struct CGSize)arg0;
- (char)cameraSwitching;
- (void)setCameraSwitching:(char)arg0;
- (VideoAttributes *)initWithCameraStatusBits:(unsigned char)arg0 aspectRatio:(struct CGSize)arg1 contentsRect:(struct CGRect)arg2;
- (char)isEqualToVideoAttributes:(NSDictionary *)arg0;
- (int)camera;
- (void)setCamera:(int)arg0;

@end
