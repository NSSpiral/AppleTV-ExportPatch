/* Runtime dump - TSPPasteboard
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboard : NSObject <TSPDecoder>
{
    id _pasteboard;
}

@property (copy, nonatomic) NSString * string;
@property (readonly, nonatomic) NSArray * strings;
@property (readonly, nonatomic) NSArray * richTextStrings;
@property (readonly, nonatomic) NSArray * URLs;
@property (readonly, nonatomic) int numberOfItems;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) int changeCount;
@property (readonly, nonatomic) char isSmartCopy;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSOperationQueue *)activePasteboardsQueue;
+ (TSPPasteboard *)activePasteboards;
+ (Class)pasteboardClass;
+ (NSString *)activePasteboardForName:(NSString *)arg0;
+ (TSPPasteboard *)pasteboardWithPasteboard:(TSPPasteboard *)arg0;
+ (TSPPasteboard *)stylePasteboard;
+ (TSPPasteboard *)generalPasteboard;
+ (NSString *)pasteboardWithName:(NSString *)arg0 create:(char)arg1;
+ (NSString *)pasteboardWithUniqueName;

- (id)newReadChannelForRootObjectComponent;
- (NSDictionary *)newReadChannelForMetadata;
- (NSString *)newReadChannelForDataWithIdentifier:(long long)arg0 info:(NSDictionary *)arg1;
- (int)clearContents;
- (void)addItems:(NSArray *)arg0 isSmartCopy:(char)arg1;
- (char)containsNativePasteboardTypes;
- (TSPPasteboard *)initWithGeneralPasteboard;
- (TSPPasteboard *)initWithPasteboardName:(TSPPasteboard *)arg0 create:(char)arg1;
- (TSPPasteboard *)initWithUniquePasteboardName;
- (TSPPasteboard *)initWithNativePasteboard:(id)arg0;
- (NSArray *)richTextStrings;
- (char)containsAnyPasteboardTypeInArray:(NSArray *)arg0;
- (void)performAsynchronousWriteUsingBlock:(id /* block */)arg0;
- (void)addData:(NSData *)arg0 forPasteboardType:(NSObject *)arg1;
- (NSArray *)importableRichTextTypes;
- (NSArray *)importableImageTypes;
- (NSArray *)importablePlainTextTypes;
- (char)containsImportableRichTextTypes;
- (char)containsImportableTextTypes;
- (char)isSmartCopy;
- (char)fromExcelDataSource;
- (char)fromIWorkSageDataSource;
- (NSString *)description;
- (NSString *)name;
- (void)invalidate;
- (NSString *)string;
- (int)changeCount;
- (void)setString:(NSString *)arg0;
- (int)numberOfItems;
- (NSObject *)valuesForPasteboardType:(NSObject *)arg0 inItemSet:(NSSet *)arg1;
- (NSObject *)valueForPasteboardType:(NSObject *)arg0;
- (NSObject *)dataForPasteboardType:(NSObject *)arg0 inItemSet:(NSSet *)arg1;
- (NSSet *)pasteboardTypesForItemSet:(NSSet *)arg0;
- (NSArray *)pasteboardTypes;
- (char)containsPasteboardTypes:(NSArray *)arg0;
- (NSObject *)dataForPasteboardType:(NSObject *)arg0;
- (void)addItems:(NSArray *)arg0;
- (NSArray *)strings;
- (NSArray *)URLs;
- (void).cxx_destruct;

@end
