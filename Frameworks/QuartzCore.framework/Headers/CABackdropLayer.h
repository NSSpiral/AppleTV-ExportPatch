/* Runtime dump - CABackdropLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CABackdropLayer : CALayer

@property char enabled;
@property (copy) NSString * groupName;
@property float scale;
@property struct CGRect backdropRect;
@property float marginWidth;
@property char disablesOccludedBackdropBlurs;
@property (copy) NSString * statisticsType;
@property double statisticsInterval;

+ (CABackdropLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (char)_hasRenderLayerSubclass;

- (void)layerDidBecomeVisible:(char)arg0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0;
- (struct Layer *)_copyRenderLayer:(struct Rect)arg0 layerFlags:(id)arg1 commitFlags:(struct Ref<CA::Render::Object>)arg2;
- (NSString *)statisticsType;
- (struct CGRect)backdropRect;
- (void)setBackdropRect:(struct CGRect)arg0;
- (float)scale;
- (void)didChangeValueForKey:(NSString *)arg0;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void)setScale:(float)arg0;
- (void)setGroupName:(NSString *)arg0;
- (NSString *)groupName;
- (void)setDisablesOccludedBackdropBlurs:(char)arg0;
- (void)setStatisticsType:(NSString *)arg0;
- (double)statisticsInterval;
- (void)setStatisticsInterval:(double)arg0;
- (NSArray *)statisticsValues;
- (char)disablesOccludedBackdropBlurs;
- (float)marginWidth;
- (void)setMarginWidth:(float)arg0;

@end
