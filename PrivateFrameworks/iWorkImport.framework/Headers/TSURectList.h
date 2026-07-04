/* Runtime dump - TSURectList
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSURectList : NSObject
{
    struct vector<CGRect, std::__1::allocator<CGRect> > mRectList;
}

@property (readonly, nonatomic) unsigned int count;

+ (TSURectList *)rectListWithDifference:(struct CGRect)arg0 withRect:(struct CGSize)arg1;

- (void)addRect:(struct CGRect)arg0;
- (TSURectList *)initWithRect:(struct CGRect)arg0;
- (TSURectList *)initWithRectList:(struct CGRect)arg0;
- (void)insertRect:(struct CGRect)arg0 atIndex:(struct CGSize)arg1;
- (unsigned int)count;
- (void).cxx_construct;
- (struct CGRect)rectAtIndex:(NSObject *)arg0;
- (void).cxx_destruct;

@end
