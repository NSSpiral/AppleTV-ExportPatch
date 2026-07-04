/* Runtime dump - CALayerHost
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CALayerHost : CALayer

@property unsigned int contextId;
@property char inheritsSecurity;

+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (char)_hasRenderLayerSubclass;

- (void)layerDidBecomeVisible:(char)arg0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg0;
- (struct Layer *)_copyRenderLayer:(struct Rect)arg0 layerFlags:(id)arg1 commitFlags:(struct Ref<CA::Render::Object>)arg2;
- (unsigned int)contextId;
- (void)didChangeValueForKey:(NSString *)arg0;
- (void)setInheritsSecurity:(char)arg0;
- (char)inheritsSecurity;
- (void)setContextId:(unsigned int)arg0;

@end
