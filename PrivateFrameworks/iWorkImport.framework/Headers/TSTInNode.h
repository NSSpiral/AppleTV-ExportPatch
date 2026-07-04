/* Runtime dump - TSTInNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTInNode : TSTExpressionNode

+ (NSAttributedString *)inString;

- (TSTInNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct InNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTInNode *)initFromArchive:(struct InNodeArchive *)arg0 unarchiver:(struct InNodeArchive)arg1;
- (TSCEFunctionArgumentSpec *)argumentSpec;
- (NSString *)formulaPlainText;
- (NSString *)string;
- (int)tokenType;

@end
