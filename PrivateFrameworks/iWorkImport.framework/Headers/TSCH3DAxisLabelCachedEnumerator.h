/* Runtime dump - TSCH3DAxisLabelCachedEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DAxisLabelCachedEnumerator : TSCH3DValueEnumerator
{
    TSCH3DValueEnumerator * mCachee;
    TSCH3DAxisLabelKind * mKind;
    unsigned int mCount;
    char mShouldRender;
    char mValid;
    int mLabelPosition;
    struct vector<TSCH3D::AxisLabelCacheItem, std::__1::allocator<TSCH3D::AxisLabelCacheItem> > mCache;
}

@property (readonly, nonatomic) TSCH3DAxisLabelKind * kind;

+ (NSEnumerator *)enumeratorWithAxisLabelEnumerator:(NSEnumerator *)arg0;

- (char)shouldRender;
- (TSCH3DAxisLabelCachedEnumerator *)initWithAxisLabelEnumerator:(NSEnumerator *)arg0;
- (NSEnumerator *)enumerator;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)string;
- (void)update;
- (void).cxx_construct;
- (void)cache;
- (void).cxx_destruct;
- (TSCH3DAxisLabelKind *)kind;
- (int)labelPosition;

@end
