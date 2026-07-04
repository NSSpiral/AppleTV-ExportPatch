/* Runtime dump - TSWPShapeRepStageChunk
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeRepStageChunk : NSObject
{
    int _stageIndex;
    NSArray * _storageRanges;
}

@property (nonatomic) int stageIndex;
@property (retain, nonatomic) NSArray * storageRanges;

- (int)stageIndex;
- (void)setStageIndex:(int)arg0;
- (NSArray *)storageRanges;
- (void)setStorageRanges:(NSArray *)arg0;
- (void)dealloc;
- (NSString *)description;

@end
