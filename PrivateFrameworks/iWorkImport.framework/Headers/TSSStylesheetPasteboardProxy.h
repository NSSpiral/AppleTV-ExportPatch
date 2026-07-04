/* Runtime dump - TSSStylesheetPasteboardProxy
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSStylesheetPasteboardProxy : TSPObject
{
    TSSStylesheet * mStylesheet;
    TSUMutableRetainedPointerSet * mReferencedStyles;
    NSObject<OS_dispatch_queue> * mReferencedStylesQueue;
    char mSelfArchiving;
}

- (void)saveToArchiver:(NSObject *)arg0;
- (void)addStyleReference:(NSObject *)arg0;
- (TSSStylesheetPasteboardProxy *)initWithContext:(NSObject *)arg0 stylesheet:(TSSStylesheet *)arg1;
- (void)dealloc;

@end
