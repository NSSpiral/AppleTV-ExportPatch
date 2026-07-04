/* Runtime dump - TSTLayoutTask
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutTask : NSObject <NSCopying>
{
    TSTMasterLayout * mMasterLayout;
    NSMutableArray * mCellStatesToLayout;
}

@property (readonly, nonatomic) unsigned int numberOfCellStates;

- (TSTLayoutTask *)initWithMasterLayout:(TSTMasterLayout *)arg0;
- (void)addCellState:(NSObject *)arg0;
- (unsigned int)numberOfCellStates;
- (void)enumerateCellStatesUsingBlock:(id /* block */)arg0;
- (void)writeToMasterLayoutCaches;
- (TSTLayoutTask *)initWithLayoutTask:(NSObject *)arg0;
- (void)dealloc;
- (TSTLayoutTask *)copyWithZone:(struct _NSZone *)arg0;
- (void)clear;

@end
