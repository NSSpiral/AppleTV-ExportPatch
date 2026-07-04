/* Runtime dump - WKActionSheetAssistant
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate>
{
    struct WeakObjCPtr<id<WKActionSheetAssistantDelegate> > _delegate;
    struct RetainPtr<WKActionSheet> _interactionSheet;
    struct RetainPtr<_WKActivatedElementInfo> _elementInfo;
    UIView * _view;
}

@property (weak, nonatomic) <WKActionSheetAssistantDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<WKActionSheetAssistantDelegate> *)arg0;
- (<WKActionSheetAssistantDelegate> *)delegate;
- (WKActionSheetAssistant *)initWithView:(UIView *)arg0;
- (NSObject *)superviewForSheet;
- (void)_createSheetWithElementActions:(id)arg0 showLinkTitle:(char)arg1;
- (char)presentSheet;
- (struct CGRect)_presentationRectForSheetGivenPoint:(NSObject *)arg0 inHostView:(SEL)arg1;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)showLinkSheet;
- (struct CGRect)initialPresentationRectInHostViewForSheet;
- (NSObject *)hostViewForSheet;
- (void)updateSheetPosition;
- (void)updatePositionInformation;
- (void)cleanupSheet;
- (struct CGRect)presentationRectInHostViewForSheet;
- (void)showImageSheet;
- (void)showDataDetectorsSheet;

@end
