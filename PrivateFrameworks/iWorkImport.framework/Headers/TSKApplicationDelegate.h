/* Runtime dump - TSKApplicationDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate>
{
    <TSKCompatibilityDelegate> * _compatibilityDelegate;
}

@property (readonly, nonatomic) char tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (readonly, nonatomic) char tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (readonly, nonatomic) char tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (readonly, nonatomic) char tableCellInspectorShowsNaturalAlignment;
@property (readonly, nonatomic) char textInspectorShowsMoreSubpane;
@property (readonly, nonatomic) NSString * applicationName;
@property (readonly, nonatomic) NSString * documentTypeDisplayName;
@property (readonly, nonatomic) NSString * templateTypeDisplayName;
@property (retain, nonatomic) <TSKCompatibilityDelegate> * compatibilityDelegate;
@property (readonly) char activating;
@property (readonly) char inBackground;
@property (readonly, nonatomic) char designModeEnabled;
@property (readonly, nonatomic) char performanceModeEnabled;
@property (readonly, nonatomic) char isCanvasFullScreen;
@property (nonatomic) unsigned int iWorkAuthorColorIndex;
@property (copy, nonatomic) NSString * iWorkAuthorName;

+ (NSObject *)platform_sharedDelegate;
+ (NSString *)documentDirectoryPath;
+ (void)setDelegate:(NSObject *)arg0;
+ (TSKApplicationDelegate *)sharedDelegate;

- (id)invalidURLSchemes;
- (<TSKCompatibilityDelegate> *)compatibilityDelegate;
- (NSString *)iWorkAuthorName;
- (void)setIWorkAuthorName:(NSString *)arg0;
- (unsigned int)iWorkAuthorColorIndex;
- (void)setIWorkAuthorColorIndex:(unsigned int)arg0;
- (char)designModeEnabled;
- (id)appChartPropertyOverrides;
- (char)supportsShrinkTextToFit;
- (char)shouldRenderContactShadow;
- (char)shouldRenderCurvedShadow;
- (NSObject *)createCompatibilityDelegate;
- (void)setCompatibilityDelegate:(<TSKCompatibilityDelegate> *)arg0;
- (id)applicationNameForTitleBar;
- (NSString *)documentTypeDisplayName;
- (NSString *)templateTypeDisplayName;
- (char)isCanvasFullScreen;
- (struct CGRect)applicationToolbarFrame;
- (char)supportsRTL;
- (char)shouldValidateMasterLayoutWhileInsertingRows;
- (NSObject *)previewImageForType:(NSObject *)arg0;
- (NSURL *)defaultHyperlinkURL;
- (char)performanceModeEnabled;
- (char)shouldGenerateGuidesForOffscreenLayouts;
- (char)isActivating;
- (char)tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
- (char)tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
- (char)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (char)tableCellInspectorShowsNaturalAlignment;
- (char)textInspectorShowsMoreSubpane;
- (char)isInBackground;
- (TSKApplicationDelegate *)init;
- (char)openURL:(NSURL *)arg0;
- (NSString *)applicationName;

@end
