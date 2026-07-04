/* Runtime dump - TSWPListLabelGeometry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPListLabelGeometry : NSObject
{
    float mScale;
    float mBaselineOffset;
    char mScaleWithText;
}

@property (nonatomic) float scale;
@property (nonatomic) float baselineOffset;
@property (nonatomic) char scaleWithText;

+ (NSObject *)listLabelGeometry;

- (char)scaleWithText;
- (TSWPListLabelGeometry *)initWithScale:(float)arg0 scaleWithText:(char)arg1 baselineOffset:(float)arg2;
- (void)setScaleWithText:(char)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (float)scale;
- (TSWPListLabelGeometry *)copyWithZone:(struct _NSZone *)arg0;
- (void)setScale:(float)arg0;
- (float)baselineOffset;
- (void)setBaselineOffset:(float)arg0;

@end
