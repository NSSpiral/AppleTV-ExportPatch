/* Runtime dump - QLPreviewControllerReserved
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewControllerReserved : NSObject
{
    <QLPreviewItem> * previewItem;
    id delegate;
    char blockRemoteImages;
    char useCustomActionButton;
    char showActionAsDefaultButton;
    NSString * loadingTextForMissingFiles;
    int mode;
    QLPreviewItemsSource * itemsSource;
    UIViewController<QLPreviewContentControllerProtocol> * previewContentController;
    _UIAsyncInvocation * cancelViewServiceRequest;
    char isDelayingPresentation;
    id readyBlock;
    id restorePreviousStateBlock;
    UINavigationController * navigationController;
    int overlayState;
    UIBarButtonItem * archiveItem;
    UIBarButtonItem * listItem;
    UIBarButtonItem * titleItem;
    UIBarButtonItem * actionItem;
    NSArray * originalLeftBarButtonItems;
    NSArray * originalRightBarButtonItems;
    char scrubbing;
    UIBarButtonItem * indexItem;
    UILabel * indexLabel;
    UIBarButtonItem * playPauseButton;
    UIBarButtonItem * routeButton;
    MPVolumeView * volumeView;
    MPVolumeView * volumeViewHidden;
    char internalViewsLoaded;
    UIView * mainView;
    id statusBarWasHidden;
    id toolbarWasHidden;
    id isInUIDICPopover;
    NSNumberFormatter * indexFormatter;
    QLArchiveViewer * archiveViewer;
    UIDocumentInteractionController * interactionController;
    NSMutableDictionary * pdfPreviewDataCache;
    NSMutableDictionary * avStateForPreviewItems;
    char sourceIsManaged;
    NSURL * lastPreviewedRealItemURL;
    NSURL * lastPreviewedCurrentItemURL;
}

- (void)dealloc;
- (QLPreviewControllerReserved *)init;

@end
