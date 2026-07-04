/* Runtime dump - WebPlainWhiteView
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)drawRect:(struct CGRect)arg0;
- (void)setDataSource:(NSObject *)arg0;
- (void)layout;
- (void)setNeedsLayout:(char)arg0;
- (NSObject *)elementAtPoint:(struct CGPoint)arg0;
- (void)dataSourceUpdated:(id)arg0;
- (void)viewWillMoveToHostWindow:(NSObject *)arg0;
- (void)viewDidMoveToHostWindow;
- (NSObject *)elementAtPoint:(struct CGPoint)arg0 allowShadowContent:(char)arg1;

@end
