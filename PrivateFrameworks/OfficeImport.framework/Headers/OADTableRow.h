/* Runtime dump - OADTableRow
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableRow : NSObject
{
    NSMutableArray * mCells;
    float mHeight;
}

- (void)dealloc;
- (OADTableRow *)init;
- (float)height;
- (void)setHeight:(float)arg0;
- (unsigned int)cellCount;
- (NSObject *)cellAtIndex:(unsigned int)arg0;
- (NSObject *)addCell;

@end
