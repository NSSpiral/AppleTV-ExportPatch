/* Runtime dump - TSCH3DArray2DResources
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DArray2DResources : TSCH3DMutable2DResources
{
    TSCH3DArray2D * mResources;
}

+ (NSObject *)resourcesWithSize:(struct tvec2<int> *)arg0;
+ (NSObject *)resourcesWithResource:(NSObject *)arg0;
+ (TSCH3DArray2D *)mResources;

- (char)hasResourceAtIndex:(struct tvec2<int> *)arg0;
- (NSObject *)firstResource;
- (void)setResource:(NSObject *)arg0 atIndex:(struct tvec2<int> *)arg1;
- (void)dealloc;
- (struct tvec2<int>)size;
- (TSCH3DArray2DResources *)initWithSize:(struct tvec2<int> *)arg0;
- (NSObject *)resourceAtIndex:(struct tvec2<int> *)arg0;
- (void)resize:(struct tvec2<int> *)arg0;

@end
