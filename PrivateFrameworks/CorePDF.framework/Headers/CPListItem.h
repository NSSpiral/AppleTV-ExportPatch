/* Runtime dump - CPListItem
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPListItem : NSObject <CPDisposable>
{
    CPList * list;
    int number;
    struct __CFArray * paragraphs;
}

@property (retain, nonatomic) CPList * list;
@property (nonatomic) int number;

- (void)dealloc;
- (CPListItem *)init;
- (void)dispose;
- (void)setList:(CPList *)arg0;
- (void)addParagraph:(GQHParagraph *)arg0;
- (CPList *)list;
- (NSObject *)paragraphAtIndex:(unsigned int)arg0;
- (unsigned int)paragraphCount;
- (void)setNumber:(int)arg0;
- (int)number;
- (void)finalize;

@end
