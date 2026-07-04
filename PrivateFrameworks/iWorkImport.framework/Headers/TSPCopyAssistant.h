/* Runtime dump - TSPCopyAssistant
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCopyAssistant : TSPPasteboardWriteAssistant
{
    TSPPasteboard * _pasteboard;
    char _didAttemptToCopy;
}

- (void)copyToPasteboardIsSmartCopy:(char)arg0;
- (TSPCopyAssistant *)initWithPasteboard:(TSPPasteboard *)arg0 sourceContext:(NSManagedObjectContext *)arg1;
- (TSPCopyAssistant *)initWithContext:(NSObject *)arg0;
- (void).cxx_destruct;
- (void)copyToPasteboard;
- (void)loadData;

@end
