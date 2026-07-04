/* Runtime dump - MPNavigatorInternal
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPNavigatorInternal : NSObject
{
    NSString * startPlugID;
    float opacity;
    struct CGPoint position;
    float zPosition;
    struct CGSize size;
    float rotationAngle;
    float xRotationAngle;
    float yRotationAngle;
    float scale;
    int zIndex;
    NSString * uuid;
    double numberOfLoops;
    double duration;
    double timeIn;
    double phaseInDuration;
    double phaseOutDuration;
    NSMutableDictionary * layerKeyDictionary;
    char isTriggered;
    char startsPaused;
}

@property (retain, nonatomic) NSString * startPlugID;
@property (nonatomic) float opacity;
@property (nonatomic) struct CGPoint position;
@property (nonatomic) float zPosition;
@property (nonatomic) struct CGSize size;
@property (nonatomic) float rotationAngle;
@property (nonatomic) float xRotationAngle;
@property (nonatomic) float yRotationAngle;
@property (nonatomic) float scale;
@property (nonatomic) int zIndex;
@property (retain, nonatomic) NSString * uuid;
@property (nonatomic) double numberOfLoops;
@property (nonatomic) double duration;
@property (nonatomic) double timeIn;
@property (nonatomic) char isTriggered;
@property (nonatomic) char startsPaused;
@property (nonatomic) double phaseInDuration;
@property (nonatomic) double phaseOutDuration;
@property (retain, nonatomic) NSMutableDictionary * layerKeyDictionary;

- (void)dealloc;
- (struct CGSize)size;
- (double)duration;
- (void)setDuration:(double)arg0;
- (float)scale;
- (void)setSize:(struct CGSize)arg0;
- (void)setPosition:(struct CGPoint)arg0;
- (struct CGPoint)position;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (void)setScale:(float)arg0;
- (void)setZPosition:(float)arg0;
- (NSString *)uuid;
- (int)zIndex;
- (void)setZIndex:(int)arg0;
- (void)setTimeIn:(double)arg0;
- (void)setPhaseInDuration:(double)arg0;
- (void)setPhaseOutDuration:(double)arg0;
- (char)isTriggered;
- (void)setIsTriggered:(char)arg0;
- (double)phaseInDuration;
- (double)phaseOutDuration;
- (double)numberOfLoops;
- (void)setNumberOfLoops:(double)arg0;
- (float)xRotationAngle;
- (float)yRotationAngle;
- (void)setXRotationAngle:(float)arg0;
- (void)setYRotationAngle:(float)arg0;
- (void)setStartsPaused:(char)arg0;
- (double)timeIn;
- (char)startsPaused;
- (NSMutableDictionary *)layerKeyDictionary;
- (void)setLayerKeyDictionary:(NSMutableDictionary *)arg0;
- (NSString *)startPlugID;
- (void)setStartPlugID:(NSString *)arg0;
- (float)rotationAngle;
- (void)setRotationAngle:(float)arg0;
- (void)setUuid:(NSString *)arg0;
- (void)finalize;
- (float)zPosition;

@end
