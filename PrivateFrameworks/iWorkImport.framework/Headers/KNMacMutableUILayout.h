/* Runtime dump - KNMacMutableUILayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMacMutableUILayout : KNMacUILayout

@property (nonatomic) char showingSidebar;
@property (nonatomic) int sidebarViewMode;
@property (nonatomic) char showingLightTable;
@property (nonatomic) char showingPresenterNotes;
@property (nonatomic) char showingInspectorPane;
@property (nonatomic) int inspectorPaneViewMode;
@property (nonatomic) char showingMasterSlides;

- (void)setShowingSidebar:(char)arg0;
- (void)setSidebarViewMode:(int)arg0;
- (void)setShowingPresenterNotes:(char)arg0;
- (void)setShowingLightTable:(char)arg0;
- (void)setShowingInspectorPane:(char)arg0;
- (void)setInspectorPaneViewMode:(int)arg0;
- (void)setShowingMasterSlides:(char)arg0;

@end
