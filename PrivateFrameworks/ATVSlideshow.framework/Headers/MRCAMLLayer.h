/* Runtime dump - MRCAMLLayer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRCAMLLayer : NSObject
{
    float x;
    float y;
    float width;
    float height;
    float duration;
    id color;
    char hasColor;
    char hasSublayerTransform;
    char hasTransform;
    struct CGPoint anchorPoint;
    float subScaleX;
    float subScaleY;
    float subScaleZ;
    float subRX;
    float subRY;
    float subRZ;
    float subTX;
    float subTY;
    float subTZ;
    float scaleX;
    float scaleY;
    float scaleZ;
    float rX;
    float rY;
    float rZ;
    float tX;
    float tY;
    float tZ;
    float opacity;
    char hasOpacity;
    char masksToBounds;
    MRImageProvider * contents;
    NSString * name;
    NSArray * animations;
    NSArray * sublayers;
    NSDictionary * states;
    NSArray * masks;
}

@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) NSArray * animations;
@property (retain, nonatomic) NSArray * sublayers;
@property (retain, nonatomic) NSDictionary * states;
@property (retain, nonatomic) NSArray * masks;
@property (retain, nonatomic) MRImageProvider * contents;

- (void)dealloc;
- (MRCAMLLayer *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (MRImageProvider *)contents;
- (void)setAnimations:(NSArray *)arg0;
- (NSArray *)sublayers;
- (void)setSublayers:(NSArray *)arg0;
- (void)setContents:(MRImageProvider *)arg0;
- (NSArray *)animations;
- (NSDictionary *)states;
- (void)setStates:(NSDictionary *)arg0;
- (void)setMasks:(NSArray *)arg0;
- (NSArray *)masks;

@end
