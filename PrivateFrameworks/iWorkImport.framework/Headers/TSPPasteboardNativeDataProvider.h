/* Runtime dump - TSPPasteboardNativeDataProvider
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardNativeDataProvider : NSObject <TSPPasteboardWriting>
{
    TSPPasteboard * _pasteboard;
    NSMutableDictionary * _nativeData;
    NSMutableDictionary * _tspData;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (id)writableTypesForPasteboard:(id)arg0;
- (NSObject *)pasteboardPropertyListForType:(NSObject *)arg0;
- (TSPPasteboardNativeDataProvider *)initWithPasteboard:(TSPPasteboard *)arg0 nativeData:(NSMutableDictionary *)arg1 tspData:(NSMutableDictionary *)arg2;
- (void)loadNativeData;
- (void).cxx_destruct;

@end
