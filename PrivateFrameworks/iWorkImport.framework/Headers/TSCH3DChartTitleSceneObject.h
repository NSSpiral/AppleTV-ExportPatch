/* Runtime dump - TSCH3DChartTitleSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartTitleSceneObject : TSCH3DChartLabelsContainingSceneObject

+ (void)setSelectionPath:(TSKSelectionPath *)arg0 selectionMode:(int)arg1 forScene:(NSObject *)arg2;
+ (char)setLabelWrapBounds:(struct box<glm::detail::tvec2<float> > *)arg0 forScene:(struct box<glm::detail::tvec2<float> >)arg1;
+ (struct TSCH3DScenePart)partWithChartInfo:(NSDictionary *)arg0;
+ (struct CGSize)p_labelWrapSizeForScene:(NSObject *)arg0 returningSizeValue:(id *)arg1;
+ (struct CGSize)labelWrapSizeForScene:(NSObject *)arg0;

- (void)renderLabels:(id)arg0;
- (void)renderAnnotatedLabels:(id)arg0;
- (NSString *)renderInfoForSelectionPath:(NSString *)arg0 info:(NSDictionary *)arg1;
- (char)isAnnotated;
- (void)p_renderLabel:(NSString *)arg0;

@end
