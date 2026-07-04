/* Runtime dump - MPNavigator
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport>
{
    MPNavigatorInternal * _internal;
    NSMutableDictionary * _layers;
    NSMutableDictionary * _actions;
    MCPlug * _plug;
    MCContainerNavigator * _navigator;
    id _parent;
    NSMutableDictionary * _animationPaths;
}

@property (copy, nonatomic) NSString * initialLayer;

- (void)removeActionForKey:(NSString *)arg0;
- (void)dealloc;
- (struct CGSize)size;
- (MPNavigator *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPNavigator *)init;
- (double)duration;
- (NSMutableDictionary *)actions;
- (void)setDuration:(double)arg0;
- (float)scale;
- (MPNavigator *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)actionForKey:(NSString *)arg0;
- (void)setSize:(struct CGSize)arg0;
- (void)setPosition:(struct CGPoint)arg0;
- (struct CGPoint)position;
- (void)setContainer:(NSObject *)arg0;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (void)setScale:(float)arg0;
- (void)setAction:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)setZPosition:(float)arg0;
- (NSString *)uuid;
- (void)cleanup;
- (int)zIndex;
- (void)setZIndex:(int)arg0;
- (MPDocument *)parentDocument;
- (NSObject *)actionableObjectForID:(NSObject *)arg0;
- (void)configureActions;
- (NSObject *)plugID;
- (void)copyActions:(id)arg0;
- (void)setTimeIn:(double)arg0;
- (void)setPhaseInDuration:(double)arg0;
- (void)setPhaseOutDuration:(double)arg0;
- (char)isTriggered;
- (void)setIsTriggered:(char)arg0;
- (NSMutableDictionary *)animationPaths;
- (void)copyAnimationPaths:(NSArray *)arg0;
- (void)removeAnimationPathForKey:(NSString *)arg0;
- (NSString *)animationPathForKey:(NSString *)arg0;
- (void)setAnimationPath:(NSString *)arg0 forKey:(NSString *)arg1;
- (double)phaseInDuration;
- (double)phaseOutDuration;
- (void)copyStruct:(id)arg0;
- (void)setPlug:(MCPlug *)arg0;
- (void)removeAllLayers;
- (NSString *)navigatorKey;
- (void)setLayer:(CALayer *)arg0 forKey:(NSString *)arg1;
- (void)reconnectAll;
- (double)numberOfLoops;
- (void)setNumberOfLoops:(double)arg0;
- (NSArray *)allSlides:(char)arg0;
- (void)removeLayerForKey:(NSString *)arg0;
- (NSString *)layerForKey:(NSString *)arg0;
- (MCPlug *)plug;
- (NSArray *)allSongs;
- (float)xRotationAngle;
- (float)yRotationAngle;
- (void)setXRotationAngle:(float)arg0;
- (void)setYRotationAngle:(float)arg0;
- (void)setStartsPaused:(char)arg0;
- (double)timeIn;
- (char)startsPaused;
- (NSMutableDictionary *)layerKeyDictionary;
- (NSString *)layerKey;
- (void)copyLayers:(id)arg0;
- (void)setInitialLayer:(NSString *)arg0;
- (NSString *)initialLayer;
- (float)rotationAngle;
- (void)setRotationAngle:(float)arg0;
- (NSString *)objectID;
- (GLKShaderBlockNode *)parent;
- (void)setParent:(NSObject *)arg0;
- (NSMutableDictionary *)layers;
- (void)finalize;
- (float)zPosition;

@end
