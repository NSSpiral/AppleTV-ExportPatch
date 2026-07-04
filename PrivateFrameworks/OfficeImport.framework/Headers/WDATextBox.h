/* Runtime dump - WDATextBox
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDATextBox : NSObject
{
    WDText * mText;
    unsigned long mNextTextBoxId;
    BOOL mOle;
    WDDocument * mDocument;
    WDAContent * mParent;
}

- (void)dealloc;
- (WDATextBox *)init;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (<UITextInput> *)document;
- (void)setDocument:(NSObject *)arg0;
- (unsigned long)nextTextBoxId;
- (void)setOle:(char)arg0;
- (char)isOle;
- (void)setNextTextBoxId:(unsigned long)arg0;
- (GLKShaderBlockNode *)parent;
- (void)setParent:(NSObject *)arg0;

@end
