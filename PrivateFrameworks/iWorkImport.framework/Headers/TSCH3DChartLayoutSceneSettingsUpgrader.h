/* Runtime dump - TSCH3DChartLayoutSceneSettingsUpgrader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader
{
    TSCH3DChartLayout * mChartLayout;
    char mIsMutatedForSceneSettings;
    NSValue * mInfoGeometryOffset;
    char hasConstantDepth;
}

@property (nonatomic) char hasConstantDepth;

- (NSDictionary *)sceneResetWithLayoutSettings:(struct ?)arg0;
- (struct ?)oldLayoutSettings;
- (struct CGRect)oldResizingFrame;
- (NSObject *)containingViewportByResizingScene:(NSObject *)arg0 toResizingFrame:(struct CGRect)arg1;
- (void)mutateInfoWithContainingViewport:(id)arg0 scene:(NSObject *)arg1;
- (void)upgrade;
- (char)hasConstantDepth;
- (void)updateInfoGeometryIfNecessary;
- (void)setHasConstantDepth:(char)arg0;
- (void)dealloc;

@end
