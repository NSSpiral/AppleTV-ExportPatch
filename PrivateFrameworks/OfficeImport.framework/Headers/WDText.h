/* Runtime dump - WDText
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDText : NSObject
{
    NSMutableArray * mBlocks;
    WDDocument * mDocument;
    int mTextType;
    WDTableCell * mTableCell;
}

- (void)dealloc;
- (NSString *)description;
- (char)isEmpty;
- (struct __CFAttributedString *)content;
- (UITableViewCell *)tableCell;
- (<UITextInput> *)document;
- (unsigned int)blockCount;
- (id)blockAt:(unsigned int)arg0;
- (id)addParagraph;
- (void)removeLastCharacter:(unsigned short)arg0;
- (int)textType;
- (void)removeLastBlock;
- (WDText *)initWithDocument:(NSObject *)arg0 textType:(int)arg1;
- (WDText *)initWithDocument:(NSObject *)arg0 textType:(int)arg1 tableCell:(NSObject *)arg2;
- (NSObject *)blockIterator;
- (NSObject *)newBlockIterator;
- (NSObject *)newRunIterator;
- (struct _VMUBlockNode *)blocks;
- (id /* block */)lastBlock;
- (unsigned int)indexOfBlock:(id /* block */)arg0;
- (void)addBlock:(id /* block */)arg0;
- (NSObject *)addParagraphAtIndex:(int)arg0;
- (id)addTable;
- (NSObject *)addTableAtIndex:(int)arg0;
- (int)tableNestingLevel;
- (NSObject *)runIterator;

@end
