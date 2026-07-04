/* Runtime dump - MPLayerInternal
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPLayerInternal : NSObject
{
    double numberOfLoops;
    float opacity;
    struct CGPoint position;
    float zPosition;
    struct CGSize size;
    float rotationAngle;
    float xRotationAngle;
    float yRotationAngle;
    float scale;
    double timeIn;
    double duration;
    double phaseInDuration;
    double phaseOutDuration;
    NSString * title;
    char isTriggered;
    char startsPaused;
    char isAudioLayer;
    int audioPriority;
    double durationPadding;
    NSString * layerID;
    int zIndex;
    NSString * uuid;
    NSLock * containerLock;
    char cleaningUp;
}

@property (nonatomic) double numberOfLoops;
@property (nonatomic) float opacity;
@property (nonatomic) struct CGPoint position;
@property (nonatomic) float zPosition;
@property (nonatomic) struct CGSize size;
@property (nonatomic) float rotationAngle;
@property (nonatomic) float xRotationAngle;
@property (nonatomic) float yRotationAngle;
@property (nonatomic) float scale;
@property (nonatomic) double timeIn;
@property (nonatomic) char isTriggered;
@property (nonatomic) char startsPaused;
@property (nonatomic) double duration;
@property (nonatomic) double phaseInDuration;
@property (nonatomic) double phaseOutDuration;
@property (retain, nonatomic) NSString * title;
@property (nonatomic) char isAudioLayer;
@property (nonatomic) int audioPriority;
@property (nonatomic) double durationPadding;
@property (nonatomic) int zIndex;
@property (retain, nonatomic) NSString * layerID;
@property (retain, nonatomic) NSString * uuid;
@property (retain, nonatomic) NSLock * containerLock;
@property (nonatomic) char cleaningUp;

- (void)dealloc;
- (struct CGSize)size;
- (void)setTitle:(NSString *)arg0;
- (double)duration;
- (void)setDuration:(double)arg0;
- (float)scale;
- (NSString *)title;
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
- (void)setAudioPriority:(int)arg0;
- (NSString *)layerID;
- (void)setLayerID:(NSString *)arg0;
- (char)isAudioLayer;
- (double)numberOfLoops;
- (void)setNumberOfLoops:(double)arg0;
- (float)xRotationAngle;
- (float)yRotationAngle;
- (void)setXRotationAngle:(float)arg0;
- (void)setYRotationAngle:(float)arg0;
- (int)audioPriority;
- (void)setStartsPaused:(char)arg0;
- (void)setIsAudioLayer:(char)arg0;
- (void)setDurationPadding:(double)arg0;
- (void)setContainerLock:(NSLock *)arg0;
- (NSLock *)containerLock;
- (void)setCleaningUp:(char)arg0;
- (double)timeIn;
- (char)startsPaused;
- (double)durationPadding;
- (char)cleaningUp;
- (float)rotationAngle;
- (void)setRotationAngle:(float)arg0;
- (void)setUuid:(NSString *)arg0;
- (float)zPosition;

@end
