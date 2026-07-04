/* Runtime dump - ATVJSPopUpMenuControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVUpdatable;
@protocol BRContextMenuControlDelegate;
@protocol BRControlFactory;
@protocol BRControlHeightFactory;
@protocol BRProvider;

@class ATVFeedDocument, ATVFeedElement, ATVJSContext, BRContextMenuControl, BRControl;
@interface ATVJSPopUpMenuControl : NSObject <ATVUpdatable, BRProvider, BRControlFactory, BRControlHeightFactory, BRContextMenuControlDelegate>
{
    char _didLoadPopUpMenu;
    struct OpaqueJSValue * _popUpMenuRef;
    ATVJSContext * _context;
    id _onDismiss;
    ATVFeedDocument * _feedDocument;
    BRContextMenuControl * _popUpMenu;
    NSArray * _flattenedMenuElements;
}

@property (weak, nonatomic) ATVJSContext * context;
@property (readonly, nonatomic) char isVisible;
@property (copy, nonatomic) id onDismiss;
@property (retain, nonatomic) ATVFeedDocument * feedDocument;
@property (weak, nonatomic) BRContextMenuControl * popUpMenu;
@property (retain, nonatomic) NSArray * flattenedMenuElements;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (ATVFeedDocument *)feedDocument;
- (float)heightForControlForData:(NSData *)arg0 requestedBy:(BRControl *)arg1;
- (void)updateWithPropertyList:(NSDictionary *)arg0;
- (void)updateWithFeedElement:(ATVFeedElement *)arg0;
- (void)setFeedDocument:(ATVFeedDocument *)arg0;
- (void)setPopUpMenuRef:(struct OpaqueJSValue *)arg0;
- (_UIInputViewSetPlacementDragToDismiss *)onDismiss;
- (BRContextMenuControl *)popUpMenu;
- (id)_flattenedMenuElementsForMenu:(id)arg0;
- (void)setFlattenedMenuElements:(NSArray *)arg0;
- (NSArray *)flattenedMenuElements;
- (void)setPopUpMenu:(BRContextMenuControl *)arg0;
- (void)contextMenuDidDismiss:(BRContextMenuControl *)arg0;
- (ATVJSPopUpMenuControl *)initWithContext:(ATVJSContext *)arg0 completionHandler:(id /* block */)arg1;
- (void)destroyJSObject;
- (void)setOnDismiss:(_UIInputViewSetPlacementDragToDismiss *)arg0;
- (void)load:(id *)arg0;
- (ATVJSContext *)context;
- (void)setContext:(ATVJSContext *)arg0;
- (ATVJSPopUpMenuControl *)initWithContext:(ATVJSContext *)arg0;
- (char)isVisible;
- (void)dismiss;
- (void).cxx_destruct;
- (NSObject *)dataAtIndex:(long)arg0;

@end
