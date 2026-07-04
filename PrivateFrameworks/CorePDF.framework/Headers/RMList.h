/* Runtime dump - RMList
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface RMList : NSObject
{
    NSMutableArray * _items;
}

@property (readonly) NSArray * listItems;
@property (readonly) struct CGPDFPage * page;

- (struct CGRect)bounds;
- (void)addItem:(NSObject *)arg0;
- (struct CGPDFPage *)page;
- (NSArray *)listItems;

@end
