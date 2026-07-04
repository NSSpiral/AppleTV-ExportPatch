/* Runtime dump - TSPPasteboardMetadata
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardMetadata : TSPObject
{
    struct PasteboardMetadata _message;
    char _isCrossAppPaste;
    char _isCrossDocumentPaste;
    NSHashTable * _dataReferences;
}

@property (readonly, nonatomic) char isCrossAppPaste;
@property (readonly, nonatomic) char isCrossDocumentPaste;
@property (readonly, nonatomic) NSHashTable * dataReferences;

+ (NSString *)appNameAndVersion;
+ (NSString *)bundleIdentifier;

- (TSPPasteboardMetadata *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (long long)tsp_identifier;
- (NSHashTable *)dataReferences;
- (char)isCrossDocumentPaste;
- (char)isCrossAppPaste;
- (TSPPasteboardMetadata *)initWithContext:(NSObject *)arg0 dataReferences:(NSHashTable *)arg1;
- (struct PasteboardMetadata *)message;
- (TSPPasteboardMetadata *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
