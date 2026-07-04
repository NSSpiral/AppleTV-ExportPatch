/* Runtime dump - TSWPTextReplacement
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextReplacement : NSObject <TSWPReplaceAction>
{
    TSWPSelection * _selection;
    NSString * _string;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)performWithStorage:(id)arg0 delta:(int)arg1 actionBuilder:(struct TSWPStorageActionBuilder *)arg2 withFlags:(unsigned int)arg3 replaceBlock:(id /* block */)arg4;
- (struct _NSRange)insertedRange;
- (TSWPTextReplacement *)initWithSelection:(TSWPSelection *)arg0 string:(NSString *)arg1;
- (unsigned int)targetCharIndex;
- (void)dealloc;
- (int)delta;

@end
