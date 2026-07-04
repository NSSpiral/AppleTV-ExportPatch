/* Runtime dump - TNHintCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNHintCache : NSObject
{
    TNPageController * mPageController;
    TSDDrawableInfo * mInfo;
    struct ? mPageRange;
    char mIsMaxColumnValid;
    char mIsMaxRowValid;
    TNPageCoordinateDictionary * mHintCacheEntryDictionary;
}

@property (readonly) TNPageController * pageController;
@property (retain) TSDDrawableInfo * info;

- (id)p_hintCacheEntryAtCoordinate:(struct ?)arg0;
- (TNHintCache *)initWithInfo:(TSDDrawableInfo *)arg0 pageController:(TNPageController *)arg1;
- (struct ?)pageRangeWithUpperBound:(id)arg0;
- (id)layoutAtCoordinate:(struct ?)arg0 parentLayout:(TSWPTextParentLayout *)arg1;
- (void)dealloc;
- (void)invalidate;
- (TSDDrawableInfo *)info;
- (void).cxx_construct;
- (TNPageController *)pageController;
- (void)setInfo:(TSDDrawableInfo *)arg0;

@end
