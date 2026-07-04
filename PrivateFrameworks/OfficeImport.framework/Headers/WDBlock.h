/* Runtime dump - WDBlock
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDBlock : NSObject
{
    WDText * mText;
}

- (void)clearProperties;
- (WDBlock *)init;
- (char)isEmpty;
- (NSString *)text;
- (<UITextInput> *)document;
- (WDBlock *)initWithText:(NSString *)arg0;
- (int)blockType;
- (int)textType;
- (NSObject *)newRunIterator;
- (NSObject *)runIterator;

@end
