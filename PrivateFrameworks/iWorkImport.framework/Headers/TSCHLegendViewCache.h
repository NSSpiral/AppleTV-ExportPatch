/* Runtime dump - TSCHLegendViewCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendViewCache : NSObject <TSCHUnretainedParent>
{
    unsigned int mCellCount;
    unsigned int mNumberOfRows;
    unsigned int mNumberOfColumns;
    struct CGSize mFinalSize;
    TSCHLegendModelCache * mModelCache;
    struct CGPoint * mCellOrigins;
}

@property (readonly) unsigned int numberOfRows;
@property (readonly) unsigned int numberOfColumns;
@property (readonly) struct CGSize legendSize;

- (void)clearParent;
- (struct CGSize)legendSize;
- (struct CGPoint)originForCell:(NSObject *)arg0;
- (TSCHLegendViewCache *)initWithLegendModelCache:(NSObject *)arg0 legendWidth:(float)arg1;
- (void)dealloc;
- (unsigned int)numberOfColumns;
- (unsigned int)numberOfRows;

@end
