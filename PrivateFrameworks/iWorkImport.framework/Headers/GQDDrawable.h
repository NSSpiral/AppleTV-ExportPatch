/* Runtime dump - GQDDrawable
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDDrawable : NSObject <GQWrapPointGenerator>
{
    GQDAffineGeometry * mGeometry;
    struct __CFURL * mUrl;
    char * mUid;
    GQDBezierPath * mWrapPath;
    GQDAffineGeometry * mWrapGeometry;
    struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > * mInnerWrapPoints;
    char mHasPagesOrder;
    long mPagesOrder;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (struct CGPath *)createBezierPath;
- (void)collectWrapPoints:(id)arg0 forPath:(struct CGPath *)arg1 context:(struct FindLinesContext *)arg2;
- (struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)wrapPoints;
- (void)addWrapPoint:(NSObject *)arg0;
- (struct vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)createListOfWrapPointsAlongY:(id)arg0 minX:(id)arg1 maxX:(float)arg2 zIndex:(SEL)arg3;
- (void)clearWrapPoints;
- (int)collectWrapPointsForState:(NSObject *)arg0 graphicStyle:(NSObject *)arg1;
- (char)hasPagesOrder;
- (int)pagesOrder;
- (struct __CFString *)urlString;
- (void)dealloc;
- (struct __CFURL *)url;
- (SCNGeometry *)geometry;
- (char *)uid;

@end
