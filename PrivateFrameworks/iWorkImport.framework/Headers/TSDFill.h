/* Runtime dump - TSDFill
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFill : NSObject <TSSPropertyCommandSerializing, TSDPathPainter>

@property (readonly, nonatomic) char tsch_hasAllResources;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSDFill *)instanceWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
+ (void)registerSubclass:(Class)arg0;
+ (char)tsch_hasAllResourcesForFill:(id)arg0;
+ (TSDFill *)p_subclassRegistry;

- (void)saveToArchive:(struct FillArchive *)arg0 archiver:(struct /* ? */)arg1;
- (TSDFill *)initWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (char)isClear;
- (void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect)arg1 inContext:(struct CGSize)arg2 isPDF:(char)arg3;
- (char)tsch_hasAllResources;
- (char)canApplyToCAShapeLayer;
- (void)applyToCAShapeLayer:(id)arg0 withScale:(float)arg1;
- (char)drawsInOneStep;
- (TSDFill *)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(struct Message)arg1;
- (void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(NSObject *)arg1;
- (char)canApplyToCALayer;
- (char)canApplyToCALayerByAddingSublayers;
- (char)shouldBeReappliedToCALayer:(id)arg0;
- (void)applyToCALayer:(id)arg0 withScale:(float)arg1;
- (char)isOpaque;
- (TSUColor *)referenceColor;
- (char)isNearlyWhite;
- (void)paintRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (int)fillType;

@end
