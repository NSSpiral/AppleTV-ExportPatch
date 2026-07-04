/* Runtime dump - PTSHUDRow
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSHUDRow : NSObject
{
    float _height;
    NSArray * _controls;
}

@property (nonatomic) float height;
@property (retain, nonatomic) NSArray * controls;

+ (PTSHUDRow *)rowWithHeight:(float)arg0 controls:(NSArray *)arg1;
+ (NSArray *)rowWithControls:(NSArray *)arg0;
+ (PTSHUDRow *)controlsModeHeaderRow;
+ (PTSHUDRow *)controlsModeFooterRow;
+ (PTSHUDRow *)savedModeHeaderRow;
+ (PTSHUDRow *)savedModeTableRow;
+ (PTSHUDRow *)savedModeFooterRow;

- (float)height;
- (void).cxx_destruct;
- (void)setHeight:(float)arg0;
- (void)setControls:(NSArray *)arg0;
- (NSArray *)controls;

@end
