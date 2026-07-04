/* Runtime dump - TSCH3DTransforms
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTransforms : NSObject
{
    NSMutableArray * mArray;
    struct tvec2<int> mSize;
}

@property (readonly, nonatomic) struct tvec2<int> size;

+ (NSObject *)transformsWithSize:(struct tvec2<int>)arg0;
+ (NSString *)transforms;

- (int)arrayIndex:(struct tvec2<int>)arg0;
- (void)setTransform:(struct CGAffineTransform)arg0 atIndex:(struct tvec2<int>)arg1;
- (NSObject *)transformAtIndex:(struct tvec2<int>)arg0;
- (void)dealloc;
- (struct tvec2<int>)size;
- (void).cxx_construct;

@end
