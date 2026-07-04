/* Runtime dump - TSDPathStroker
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDPathStroker : NSObject
{
    TSUColor * mColor;
    float mWidth;
    TSDPathStroker * mPrecedingStroker;
}

@property (nonatomic) float width;

- (TSDPathStroker *)initWithProperties:(NSDictionary *)arg0 bundle:(NSObject *)arg1 dataManager:(void *)arg2 precedingStroker:(id)arg3;
- (void)strokePath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 inColor:(UIColor *)arg2;
- (void)dealloc;
- (float)width;
- (void)setWidth:(float)arg0;

@end
