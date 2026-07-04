/* Runtime dump - TSUMutableFormatObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUMutableFormatObject : TSUFormatObject <TSCHCustomFormatUpdateSupport>

@property (nonatomic) struct ? formatStruct;

- (void)updateAfterPasteForDocumentRoot:(NSObject *)arg0 pasteboardCustomFormatList:(NSArray *)arg1;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(NSObject *)arg0;
- (TSUMutableFormatObject *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFormatStruct:(struct ?)arg0;

@end
