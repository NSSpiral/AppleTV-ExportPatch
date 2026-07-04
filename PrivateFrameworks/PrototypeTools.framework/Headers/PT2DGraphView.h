/* Runtime dump - PT2DGraphView
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PT2DGraphView : UIView
{
    NSArray * _provisionalData;
    float _xminimum;
    float _yminimum;
    float _xmaximum;
    float _ymaximum;
    PT2DGraphAxisStyle * _xaxisStyle;
    PT2DGraphAxisStyle * _yaxisStyle;
    UIColor * _groundColor;
    UIColor * _dataColor;
    UIColor * _provisionalDataColor;
    NSArray * _data;
    NSMutableArray * _provisionalDataSubviews;
    struct CGPoint _origin;
    struct CGSize _datumSize;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) float xminimum;
@property (nonatomic) float yminimum;
@property (nonatomic) float xmaximum;
@property (nonatomic) float ymaximum;
@property (nonatomic) struct CGPoint origin;
@property (retain, nonatomic) PT2DGraphAxisStyle * xaxisStyle;
@property (retain, nonatomic) PT2DGraphAxisStyle * yaxisStyle;
@property (retain, nonatomic) UIColor * groundColor;
@property (retain, nonatomic) UIColor * dataColor;
@property (retain, nonatomic) UIColor * provisionalDataColor;
@property (nonatomic) struct CGSize datumSize;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (retain, nonatomic) NSArray * data;
@property (retain, nonatomic) NSArray * provisionalData;
@property (retain, nonatomic) NSMutableArray * provisionalDataSubviews;

- (PT2DGraphView *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (struct UIEdgeInsets)edgeInsets;
- (NSArray *)data;
- (void)setData:(NSArray *)arg0;
- (struct CGPoint)origin;
- (void)setOrigin:(struct CGPoint)arg0;
- (void)setEdgeInsets:(struct UIEdgeInsets)arg0;
- (void).cxx_destruct;
- (struct CGSize)datumSize;
- (UIColor *)provisionalDataColor;
- (void)setXaxisStyle:(PT2DGraphAxisStyle *)arg0;
- (void)setYaxisStyle:(PT2DGraphAxisStyle *)arg0;
- (void)setGroundColor:(UIColor *)arg0;
- (void)setDataColor:(UIColor *)arg0;
- (void)setProvisionalDataColor:(UIColor *)arg0;
- (void)setDatumSize:(struct CGSize)arg0;
- (void)setXminimum:(float)arg0;
- (void)setXmaximum:(float)arg0;
- (void)setYminimum:(float)arg0;
- (void)setYmaximum:(float)arg0;
- (void)setProvisionalDataSubviews:(NSMutableArray *)arg0;
- (float)xmaximum;
- (float)xminimum;
- (float)ymaximum;
- (float)yminimum;
- (NSMutableArray *)provisionalDataSubviews;
- (PT2DGraphAxisStyle *)xaxisStyle;
- (UIColor *)groundColor;
- (struct CGPoint)pointForText:(NSString *)arg0 centeredOnPoint:(struct CGPoint)arg1 withAttributes:(NSDictionary *)arg2;
- (PT2DGraphAxisStyle *)yaxisStyle;
- (UIColor *)dataColor;
- (void)setProvisionalData:(NSArray *)arg0;
- (NSArray *)provisionalData;

@end
