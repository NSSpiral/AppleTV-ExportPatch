/* Runtime dump - TSCH3DLabelResourceAttributes
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying>
{
    TSWPParagraphStyle * mParagraphStyle;
    NSString * mString;
    TSCH3DLabelBitmapContextInfo * mBitmapContextInfo;
    float mLabelWidth;
    float mRenderSamples;
}

@property (readonly, nonatomic) TSWPParagraphStyle * paragraphStyle;
@property (readonly, nonatomic) NSString * string;
@property (readonly, nonatomic) TSCH3DLabelBitmapContextInfo * bitmapContextInfo;
@property (readonly, nonatomic) float labelWidth;
@property (readonly, nonatomic) float renderSamples;

+ (NSObject *)labelAttributesWithParagraphStyle:(TSWPParagraphStyle *)arg0 string:(NSString *)arg1 bitmapContextInfo:(TSCH3DLabelBitmapContextInfo *)arg2 labelWidth:(float)arg3 renderSamples:(float)arg4;

- (TSWPParagraphStyle *)paragraphStyle;
- (TSCH3DLabelBitmapContextInfo *)bitmapContextInfo;
- (float)renderSamples;
- (TSCH3DLabelResourceAttributes *)initWithParagraphStyle:(TSWPParagraphStyle *)arg0 string:(NSString *)arg1 bitmapContextInfo:(TSCH3DLabelBitmapContextInfo *)arg2 labelWidth:(float)arg3 renderSamples:(float)arg4;
- (float)labelWidth;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSCH3DLabelResourceAttributes *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)string;

@end
