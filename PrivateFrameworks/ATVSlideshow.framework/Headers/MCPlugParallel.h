/* Runtime dump - MCPlugParallel
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCPlugParallel : MCPlug
{
    void * mGeometry;
    short mZIndex;
    short mAudioPriority;
    NSString * mIDInSupercontainer;
    MCContainerParallelizer * mSupercontainer;
    float mOpacity;
    double mTimeIn;
}

@property (copy) NSString * idInSupercontainer;
@property MCContainerParallelizer * supercontainer;
@property (nonatomic) char isTriggered;
@property (nonatomic) char resetsTimeOnTrigger;
@property (readonly) char hasAbsoluteAspectRatio;
@property (readonly) char hasValidWidth;
@property (nonatomic) char clipsContainer;
@property (nonatomic) double timeIn;
@property (nonatomic) short zIndex;
@property (nonatomic) short audioPriority;
@property (nonatomic) float opacity;
@property (nonatomic) struct CGPoint position;
@property (nonatomic) struct CGSize size;
@property (readonly) float width;
@property (readonly) float height;
@property (readonly) float aspectRatio;
@property (nonatomic) float scale;
@property (nonatomic) float rotation;
@property (nonatomic) float rotationAngle;
@property (nonatomic) float positionZ;
@property (nonatomic) float zPosition;
@property (nonatomic) float rotationX;
@property (nonatomic) float xRotationAngle;
@property (nonatomic) float rotationY;
@property (nonatomic) float yRotationAngle;
@property (nonatomic) unsigned char currentLayoutIndex;
@property (readonly) unsigned char countOfLayouts;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (struct CGSize)size;
- (MCPlugParallel *)init;
- (NSString *)description;
- (float)scale;
- (void)setSize:(struct CGSize)arg0;
- (void)setPosition:(struct CGPoint)arg0;
- (struct CGPoint)position;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (void)setScale:(float)arg0;
- (float)width;
- (float)height;
- (void)setRotation:(float)arg0;
- (float)rotation;
- (void)setZPosition:(float)arg0;
- (short)zIndex;
- (void)setZIndex:(short)arg0;
- (void)setTimeIn:(double)arg0;
- (char)isTriggered;
- (void)setIsTriggered:(char)arg0;
- (NSString *)idInSupercontainer;
- (void)setAudioPriority:(short)arg0;
- (void)demolish;
- (float)xRotationAngle;
- (float)yRotationAngle;
- (void)setXRotationAngle:(float)arg0;
- (void)setYRotationAngle:(float)arg0;
- (short)audioPriority;
- (double)timeIn;
- (MCContainerParallelizer *)supercontainer;
- (struct CGSize)sizeForParentAspectRatio:(float)arg0;
- (char)clipsContainer;
- (unsigned char)currentLayoutIndex;
- (void)setCurrentLayoutIndex:(unsigned char)arg0;
- (float)aspectRatioForParentAspectRatio:(float)arg0;
- (char)resetsTimeOnTrigger;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCPlugParallel *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (void)setSupercontainer:(MCContainerParallelizer *)arg0;
- (void)setIDInSupercontainer:(id)arg0;
- (float)positionZ;
- (void)setPositionZ:(float)arg0;
- (char)hasAbsoluteAspectRatio;
- (char)hasValidWidth;
- (void)setWidth:(float)arg0 andAbsoluteAspectRatio:(float)arg1;
- (void)setHeight:(float)arg0 andAbsoluteAspectRatio:(float)arg1;
- (void)setResetsTimeOnTrigger:(char)arg0;
- (void)setClipsContainer:(char)arg0;
- (unsigned char)countOfLayouts;
- (void)setRotationX:(float)arg0;
- (void)setRotationY:(float)arg0;
- (float)rotationX;
- (float)rotationY;
- (float)rotationAngle;
- (void)setRotationAngle:(float)arg0;
- (NSDictionary *)imprint;
- (float)aspectRatio;
- (float)zPosition;

@end
