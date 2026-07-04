/* Runtime dump - TSCHCompositeRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHCompositeRenderer : TSCHRenderer <TSCHCompositeRendering>
{
    NSArray * mSubRenderers;
    TSCHRenderer * mEventHandler;
}

@property (readonly, nonatomic) NSArray * renderers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)renderTSCHCompositeRendering:(id)arg0 intoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
+ (void)p_delegateSelector:(SEL)arg0 toRenderer:(NSObject *)arg1 transparencyLayer:(int)arg2 inContext:(struct CGContext *)arg3;

- (id)transparencyLayers;
- (void)drawIntoLayer:(int)arg0 inContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (NSArray *)renderers;
- (char)needsAnySeparateLayers;
- (void)willBeginTransparencyLayer:(int)arg0 inContext:(struct CGContext *)arg1;
- (void)didBeginTransparencyLayer:(int)arg0 inContext:(struct CGContext *)arg1;
- (void)willEndTransparencyLayer:(int)arg0 inContext:(struct CGContext *)arg1;
- (void)didEndTransparencyLayer:(int)arg0 inContext:(struct CGContext *)arg1;
- (TSCHCompositeRenderer *)initWithChartRep:(<TSCHSupportsRendering> *)arg0 withSubRenderers:(id)arg1;
- (void)p_delegateSelectorToRenderers:(SEL)arg0 transparencyLayer:(int)arg1 inContext:(struct CGContext *)arg2;
- (void)dealloc;

@end
