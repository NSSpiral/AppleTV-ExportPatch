/* Runtime dump - WebDefaultEditingDelegate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDefaultEditingDelegate : NSObject

+ (WebDefaultEditingDelegate *)sharedEditingDelegate;

- (char)webView:(NSObject *)arg0 shouldDeleteDOMRange:(NSObject *)arg1;
- (char)webView:(NSObject *)arg0 shouldInsertText:(NSString *)arg1 replacingDOMRange:(NSObject *)arg2 givenAction:(int)arg3;
- (void)webViewDidChange:(NSDictionary *)arg0;
- (NSObject *)undoManagerForWebView:(NSObject *)arg0;
- (NSArray *)supportedPasteboardTypesForCurrentSelection;
- (NSObject *)documentFragmentForPasteboardItemAtIndex:(int)arg0;
- (char)webView:(NSObject *)arg0 shouldBeginEditingInDOMRange:(NSObject *)arg1;
- (char)webView:(NSObject *)arg0 shouldEndEditingInDOMRange:(NSObject *)arg1;
- (char)webView:(NSObject *)arg0 shouldInsertNode:(NSObject *)arg1 replacingDOMRange:(NSObject *)arg2 givenAction:(int)arg3;
- (char)webView:(NSObject *)arg0 shouldChangeSelectedDOMRange:(NSObject *)arg1 toDOMRange:(NSObject *)arg2 affinity:(int)arg3 stillSelecting:(char)arg4;
- (char)webView:(NSObject *)arg0 shouldApplyStyle:(NSObject *)arg1 toElementsInDOMRange:(NSObject *)arg2;
- (char)webView:(NSObject *)arg0 shouldMoveRangeAfterDelete:(id)arg1 replacingRange:(NSObject *)arg2;
- (char)webView:(NSObject *)arg0 shouldChangeTypingStyle:(NSObject *)arg1 toStyle:(NSObject *)arg2;
- (char)webView:(NSObject *)arg0 doCommandBySelector:(SEL)arg1;
- (void)webViewDidBeginEditing:(id)arg0;
- (void)webViewDidEndEditing:(id)arg0;
- (void)webViewDidChangeTypingStyle:(NSObject *)arg0;
- (void)webViewDidChangeSelection:(id)arg0;

@end
