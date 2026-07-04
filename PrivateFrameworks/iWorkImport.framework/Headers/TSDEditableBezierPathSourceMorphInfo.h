/* Runtime dump - TSDEditableBezierPathSourceMorphInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDEditableBezierPathSourceMorphInfo : NSObject
{
    TSDEditableBezierPathSource * mOriginal;
    TSDEditableBezierPathSource * mSmoothOriginal;
    TSUPointerKeyDictionary * mOriginalNodeIndexMapping;
}

@property (retain, nonatomic) TSDEditableBezierPathSource * original;
@property (retain, nonatomic) TSDEditableBezierPathSource * smoothOriginal;

- (TSDEditableBezierPathSource *)original;
- (void)setOriginal:(TSDEditableBezierPathSource *)arg0;
- (TSDEditableBezierPathSourceMorphInfo *)initWithEditableBezierPathSource:(NSObject *)arg0;
- (NSObject *)originalNodeForNode:(NSObject *)arg0;
- (unsigned int)originalSubpathIndexForNode:(NSObject *)arg0;
- (unsigned int)originalNodeIndexForNode:(NSObject *)arg0;
- (NSObject *)originalSmoothNodeForNode:(NSObject *)arg0;
- (TSDEditableBezierPathSource *)smoothOriginal;
- (void)setSmoothOriginal:(TSDEditableBezierPathSource *)arg0;
- (void)dealloc;

@end
