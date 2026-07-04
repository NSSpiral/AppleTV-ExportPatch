/* Runtime dump - CUIThemeSchemaRenditionGroup
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIThemeSchemaRenditionGroup : NSObject
{
    CUIRenditionKey * _baseKey;
    NSArray * _renditions;
    struct ? * _part;
}

@property (retain, nonatomic) NSArray * renditions;

+ (CUIThemeSchemaRenditionGroup *)renditionGroupsForRenditions:(id)arg0 part:(struct ? *)arg1;

- (void)dealloc;
- (NSString *)description;
- (CUIRenditionKey *)baseKey;
- (CUIThemeSchemaRenditionGroup *)initWithRenditions:(NSArray *)arg0 part:(struct ? *)arg1;
- (NSArray *)renditions;
- (void)setRenditions:(NSArray *)arg0;
- (int)partFeatures;
- (id)themeSchemaLayers;
- (void)addLayoutMetricsToPSDImageRef:(id)arg0 withRendition:(CUIThemeSchemaRendition *)arg1;
- (id)schemaLayersAndLayerGroups;
- (id)_renditionsSortedIntoLayers;
- (CALayer *)_layerNameForDrawingLayer:(int)arg0;
- (NSObject *)_layerNameForState:(int)arg0;
- (void)addStatesAndDrawingLayersToPSDLayers:(id)arg0 forPresentationState:(unsigned int)arg1;
- (void)addValueOrDim1LayersToPSDLayers:(id)arg0 forPresentationState:(unsigned int)arg1 state:(unsigned int)arg2 drawingLayer:(unsigned int)arg3;
- (id)mutablePSDImageRef;
- (NSObject *)mutablePSDImageRefColumnStyle;

@end
