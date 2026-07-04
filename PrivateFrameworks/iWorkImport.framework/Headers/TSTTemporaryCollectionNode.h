/* Runtime dump - TSTTemporaryCollectionNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTemporaryCollectionNode : NSObject
{
    struct TSCEVectorIndexPair mDimensions;
    NSMutableArray * mChildren;
    NSString * mWhitespaceBeforeFirstChild;
    NSMutableArray * mWhitespaceAfterDelimiters;
    unsigned int mFirstIndex;
    unsigned int mLastIndex;
}

@property (nonatomic) struct TSCEVectorIndexPair dimensions;
@property (retain, nonatomic) NSMutableArray * children;
@property (retain, nonatomic) NSString * whitespaceBeforeFirstChild;
@property (retain, nonatomic) NSMutableArray * whitespaceAfterDelimiters;
@property (nonatomic) unsigned int firstIndex;
@property (nonatomic) unsigned int lastIndex;

- (void)setFirstIndex:(unsigned int)arg0;
- (void)setLastIndex:(unsigned int)arg0;
- (NSMutableArray *)whitespaceAfterDelimiters;
- (void)setWhitespaceAfterDelimiters:(NSMutableArray *)arg0;
- (void)setWhitespaceBeforeFirstChild:(NSString *)arg0;
- (void)setDimensions:(struct TSCEVectorIndexPair)arg0;
- (NSString *)whitespaceBeforeFirstChild;
- (void)dealloc;
- (TSTTemporaryCollectionNode *)init;
- (unsigned int)firstIndex;
- (unsigned int)lastIndex;
- (void).cxx_construct;
- (struct TSCEVectorIndexPair)dimensions;
- (void)setChildren:(NSMutableArray *)arg0;
- (NSMutableArray *)children;

@end
