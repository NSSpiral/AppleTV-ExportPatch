/* Runtime dump - TSPPasteboardReadChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardReadChannel : NSObject <TSUStreamReadChannel>
{
    NSObject<OS_dispatch_queue> * _readQueue;
    TSPPasteboard * _pasteboard;
    NSString * _pasteboardType;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)readWithHandler:(id /* block */)arg0;
- (TSPPasteboardReadChannel *)initWithPasteboard:(TSPPasteboard *)arg0 pasteboardType:(NSString *)arg1;
- (void)close;
- (void).cxx_destruct;

@end
