/* Runtime dump - WebDefaultUIKitDelegate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDefaultUIKitDelegate : NSObject

+ (WebDefaultUIKitDelegate *)sharedUIKitDelegate;

- (NSArray *)supportedPasteboardTypesForCurrentSelection;
- (void)addInputString:(NSString *)arg0 withFlags:(unsigned int)arg1;
- (void)deleteFromInput;
- (char)hasRichlyEditableSelection;
- (void)webViewDidDrawTiles:(id)arg0;
- (void)webView:(NSObject *)arg0 didReceiveViewportArguments:(NSDictionary *)arg1;
- (void)webView:(NSObject *)arg0 needsScrollNotifications:(id)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didFinishLoadForFrame:(NSObject *)arg1;
- (void)webViewDidStartOverflowScroll:(id)arg0;
- (void)webViewDidEndOverflowScroll:(id)arg0;
- (void)webView:(NSObject *)arg0 runOpenPanelForFileButtonWithResultListener:(NSObject<WebOpenPanelResultListener> *)arg1 allowMultipleFiles:(char)arg2 acceptMIMETypes:(NSArray *)arg3;
- (void)webViewDidRestoreFromPageCache:(NSObject *)arg0;
- (void)webView:(NSObject *)arg0 didFirstVisuallyNonEmptyLayoutInFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didFailLoadWithError:(NSError *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didChangeLocationWithinPageForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didCommitLoadForFrame:(NSObject *)arg1;
- (void)webViewDidReceiveMobileDocType:(NSObject *)arg0;
- (void)webView:(NSObject *)arg0 saveStateToHistoryItem:(NSObject *)arg1 forFrame:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 restoreStateFromHistoryItem:(NSObject *)arg1 forFrame:(NSObject *)arg2 force:(char)arg3;
- (char)webView:(NSObject *)arg0 shouldScrollToPoint:(struct CGPoint)arg1 forFrame:(NSObject *)arg2;
- (void)writeDataToPasteboard:(id)arg0;
- (int)getPasteboardItemsCount;
- (char)performsTwoStepPaste:(id)arg0;
- (id)readDataFromPasteboard:(id)arg0 withIndex:(int)arg1;
- (int)getPasteboardChangeCount;
- (void)showPlaybackTargetPicker:(char)arg0 fromRect:(struct CGRect)arg1;
- (int)deviceOrientation;
- (char)isUnperturbedDictationResultMarker:(NSObject *)arg0;
- (void)revealedSelectionByScrollingWebFrame:(NSObject *)arg0;
- (void)_webthread_webView:(NSObject *)arg0 attachRootLayer:(id)arg1;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg0;
- (NSString *)checkSpellingOfString:(NSString *)arg0;
- (NSObject *)webView:(NSObject *)arg0 plugInViewWithArguments:(NSDictionary *)arg1 fromPlugInPackage:(id)arg2;
- (void)webView:(NSObject *)arg0 willShowFullScreenForPlugInView:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didHideFullScreenForPlugInView:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 willAddPlugInView:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didObserveDeferredContentChange:(int)arg1 forFrame:(NSObject *)arg2;
- (void)webViewDidPreventDefaultForEvent:(NSObject *)arg0;
- (struct CGPoint)interactionLocation;
- (void)webView:(NSObject *)arg0 didStartProvisionalLoadForFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 didFirstLayoutInFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 willCloseFrame:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 elementDidFocusNode:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 elementDidBlurNode:(NSObject *)arg1;
- (void)webView:(NSObject *)arg0 addMessageToConsole:(id)arg1 withSource:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 didCreateOrUpdateScrollingLayer:(id)arg1 withContentsLayer:(CALayer *)arg2 scrollSize:(NSObject *)arg3 forNode:(NSObject *)arg4 allowHorizontalScrollbar:(char)arg5 allowVerticalScrollbar:(char)arg6;
- (void)webView:(NSObject *)arg0 willRemoveScrollingLayer:(id)arg1 withContentsLayer:(CALayer *)arg2 forNode:(NSObject *)arg3;
- (void)webView:(NSObject *)arg0 didFinishDocumentLoadForFrame:(NSObject *)arg1;
- (struct CGPoint)contentsPointForWebView:(NSObject *)arg0;
- (struct CGRect)documentVisibleRectForWebView:(NSObject *)arg0;
- (void)webView:(NSObject *)arg0 didReceiveMessage:(NSString *)arg1;
- (void)deleteFromInputwithFlags:(unsigned int)arg0;
- (void)webViewDidLayout:(NSObject *)arg0;

@end
