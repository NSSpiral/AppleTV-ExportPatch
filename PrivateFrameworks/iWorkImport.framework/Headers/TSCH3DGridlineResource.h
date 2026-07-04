/* Runtime dump - TSCH3DGridlineResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGridlineResource : TSCH3DResource
{
    TSCH3DAxisGridEnumerator * mAxis;
}

@property (readonly, nonatomic) char enabled;
@property (readonly, nonatomic) TSDStroke * stroke;
@property (readonly, nonatomic) float opacity;

+ (NSEnumerator *)resourceWithAxisEnumerator:(NSEnumerator *)arg0;

- (TSCH3DGridlineResource *)initWithAxisEnumerator:(NSEnumerator *)arg0;
- (void)dealloc;
- (TSDStroke *)stroke;
- (float)opacity;
- (char)enabled;
- (NSObject *)get;

@end
