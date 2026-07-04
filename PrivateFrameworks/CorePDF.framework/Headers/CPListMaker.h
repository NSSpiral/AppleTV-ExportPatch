/* Runtime dump - CPListMaker
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPListMaker : NSObject <CPDisposable>
{
    CPLayoutArea * area;
    NSArray * spacers;
    unsigned int textLineCount;
    id * textLines;
    CPList * list;
}

+ (void)makeListsInPage:(id)arg0;
+ (void)makeListsInLayoutArea:(id)arg0;
+ (void)makeListsInChunk:(id)arg0;

- (void)dealloc;
- (void)dispose;
- (void)fetchTextLine:(id)arg0;
- (void)makeListItemFrom:(struct CPListInfo *)arg0 stopAt:(struct CGSize)arg1;
- (char)makeListFrom:(struct CPListInfo *)arg0;
- (void)fetchTextLinesInColumn:(id)arg0;
- (void)makeListsInColumn:(id)arg0;
- (CPListMaker *)initWithLayoutArea:(CPLayoutArea *)arg0;
- (void)makeLists;
- (void)finalize;

@end
