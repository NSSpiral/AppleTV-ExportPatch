/* Runtime dump - TSDMutableAngleGradient
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableAngleGradient : TSDAngleGradient <TSDGradientStopContainer>

@property (nonatomic) float gradientAngleInDegrees;
@property (nonatomic) float gradientAngle;
@property (nonatomic) unsigned int gradientType;
@property (nonatomic) float opacity;
@property (nonatomic) char isAdvancedGradient;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) NSArray * gradientStops;
@property (retain, nonatomic) TSUColor * firstColor;
@property (retain, nonatomic) TSUColor * lastColor;

- (void)setColorOfStopAtIndex:(unsigned int)arg0 toColor:(UIColor *)arg1;
- (void)insertGradientStop:(id)arg0;
- (NSObject *)insertStopAtFraction:(float)arg0;
- (void)swapStopAtIndex:(unsigned int)arg0 withStopAtIndex:(unsigned int)arg1;
- (NSObject *)insertStopAtFraction:(float)arg0 withColor:(UIColor *)arg1;
- (void)removeStop:(id)arg0;
- (NSObject *)removeStopAtIndex:(unsigned int)arg0;
- (void)reverseStopOrder;
- (void)evenlyDistributeStops;
- (void)moveStopAtIndex:(unsigned int)arg0 toFraction:(float)arg1;
- (void)setInflectionOfStopAtIndex:(unsigned int)arg0 toInflection:(float)arg1;
- (void)setGradientStops:(NSArray *)arg0;
- (void)setFirstColor:(TSUColor *)arg0;
- (void)setLastColor:(TSUColor *)arg0;
- (void)setGradientAngleInDegrees:(float)arg0;
- (TSDMutableAngleGradient *)copyWithZone:(struct _NSZone *)arg0;
- (void)setGradientType:(unsigned int)arg0;

@end
