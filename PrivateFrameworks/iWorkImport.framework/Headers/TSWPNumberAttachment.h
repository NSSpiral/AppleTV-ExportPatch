/* Runtime dump - TSWPNumberAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPNumberAttachment : TSWPTextualAttachment
{
    int _numberFormat;
    NSString * _stringValue;
}

@property (nonatomic) int numberFormat;
@property (copy, nonatomic) NSString * stringValue;

+ (TSWPNumberAttachment *)newObjectForUnarchiver:(TSPUnknownObjectUnarchiver *)arg0;

- (TSWPNumberAttachment *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (id)stringEquivalent;
- (struct TextualAttachmentArchive *)textualAttachmentArchiveFromUnarchiver:(id)arg0;
- (NSObject *)stringEquivalentWithLayoutParent:(NSObject *)arg0;
- (NSNumber *)stringWithNumber:(unsigned int)arg0;
- (struct NumberAttachmentArchive *)numberAttachmentArchiveFromUnarchiver:(id)arg0;
- (void)dealloc;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (int)numberFormat;
- (void)setNumberFormat:(int)arg0;

@end
