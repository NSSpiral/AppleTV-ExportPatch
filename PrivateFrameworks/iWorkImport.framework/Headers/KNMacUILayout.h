/* Runtime dump - KNMacUILayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying>
{
    char mShowingSidebar;
    char mShowingNavigatorViewInSidebar;
    char mShowingPresenterNotes;
    char mShowingLightTable;
    char mShowingInspectorPane;
    char mShowingMasterSlides;
    int mInspectorPaneViewMode;
}

@property (readonly, nonatomic) char showingSidebar;
@property (readonly, nonatomic) int sidebarViewMode;
@property (readonly, nonatomic) char showingLightTable;
@property (readonly, nonatomic) char showingPresenterNotes;
@property (readonly, nonatomic) char showingInspectorPane;
@property (readonly, nonatomic) int inspectorPaneViewMode;
@property (readonly, nonatomic) char showingMasterSlides;
@property (readonly, nonatomic) char p_showingNavigatorViewInSidebar;

+ (KNMacUILayout *)uiLayoutFromArchive:(struct DesktopUILayoutArchive *)arg0 unarchiver:(struct DesktopUILayoutArchive)arg1 context:(NSObject *)arg2;

- (void)saveToArchive:(struct DesktopUILayoutArchive *)arg0 archiver:(NSObject *)arg1;
- (char)isShowingSidebar;
- (char)p_isShowingNavigatorViewInSidebar;
- (char)isShowingPresenterNotes;
- (char)isShowingLightTable;
- (char)isShowingInspectorPane;
- (int)inspectorPaneViewMode;
- (char)isShowingMasterSlides;
- (int)sidebarViewMode;
- (NSString *)archivedUILayoutInContext:(NSObject *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (KNMacUILayout *)copyWithZone:(struct _NSZone *)arg0;
- (KNMacUILayout *)mutableCopyWithZone:(struct _NSZone *)arg0;

@end
