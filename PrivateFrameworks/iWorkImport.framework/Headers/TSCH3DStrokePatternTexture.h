/* Runtime dump - TSCH3DStrokePatternTexture
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DStrokePatternTexture : TSCH3DResource
{
    TSDStroke * mStroke;
}

@property (readonly, nonatomic) TSDStroke * stroke;

- (TSCH3DStrokePatternTexture *)initWithStroke:(TSDStroke *)arg0;
- (void)dealloc;
- (TSDStroke *)stroke;
- (NSObject *)get;

@end
