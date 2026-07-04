/* Runtime dump - EDTokenTreeNode
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTokenTreeNode : NSObject
{
    unsigned int mTokenIndex;
    int mTokenType;
    EDTokenTreeNode * mFirstChild;
    EDTokenTreeNode * mSibling;
}

+ (NSObject *)tokenTreeNodeWithIndexAndType:(unsigned int)arg0 type:(int)arg1;

- (void)dealloc;
- (EDTokenTreeNode *)init;
- (NSObject *)firstChild;
- (EDTokenTreeNode *)initWithIndexAndType:(unsigned int)arg0 type:(int)arg1;
- (unsigned int)tokenIndex;
- (void)setFirstChild:(NSObject *)arg0;
- (id)sibling;
- (void)setSibling:(id)arg0;

@end
