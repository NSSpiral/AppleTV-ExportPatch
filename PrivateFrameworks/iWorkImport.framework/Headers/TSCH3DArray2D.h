/* Runtime dump - TSCH3DArray2D
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DArray2D : NSObject
{
    struct tvec2<int> mSize;
    NSMutableArray * mElements;
}

@property (readonly, nonatomic) struct tvec2<int> size;

+ (NSObject *)array2DWithSize:(struct tvec2<int> *)arg0;
+ (NSArray *)array2D;

- (char)hasObjectAtIndex:(struct tvec2<int> *)arg0;
- (void)setObject:(NSObject *)arg0 atIndex:(struct tvec2<int> *)arg1;
- (void)dealloc;
- (struct tvec2<int>)size;
- (NSObject *)objectAtIndex:(struct tvec2<int> *)arg0;
- (NSObject *)firstObject;
- (TSCH3DArray2D *)initWithSize:(struct tvec2<int> *)arg0;
- (void).cxx_construct;
- (void)resize:(struct tvec2<int> *)arg0;

@end
